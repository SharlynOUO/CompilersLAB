from graphviz import Digraph
import re
'''
terminal_sym = ['Ident', 'VOID', 'INT', 'CONST', 'IF',
                'ELSE', 'WHILE', 'BREAK', 'CONTINUE', 'RETURN',
                'LPAREN', 'RPAREN', 'LBRACE', 'RBRACE', 'LSQUBRAKT', 'RSQUBRAKT', 'SEMICOLON', 'COMMA',
                'IntConst', 'EQ', 'GRAEQ', 'LESEQ', 'NEQ', 'GRA', 'LES',
                'PLUS', 'MINUS', 'MUL', 'DIV', 'MOD', 'AND', 'OR', 'NOT', 'ASSIGN',
                'PLUSASSIGN', 'MINUSASSIGN', 'MULASSIGN', 'DIVASSIGN'
                ]
nontermi_sym = ['CompUnit', 'Number', 'UnaryOp', 'Stmt', 'BlankStmt', 'Cond', 'MutiBI', 'Block',
                'BlockItem', 'FuncDef', 'ConstDef', 'ArrDimDef', 'VarDef',
                'Decl', 'ConstDecl', 'VarDecl', 'MutiConstDecl', 'MutiVarDecl', 'InitVal',
                'ArrInitVal', 'ConstInitVal', 'ConstArrInitVal', 'LVal',
                'Exp', 'EqExp', 'AddExp', 'LOrExp', 'MulExp', 'RelExp', 'LAndExp', 'ConstExp', 'UnaryExp', 'PrimaryExp',
                'ArrParam', 'FuncFParam', 'FuncFParams', 'MutiFParams', 'MutiRParams', 'FuncRParams']

'''

'''
def GetSymbolDict():
    enum = enumerate(terminal_sym+nontermi_sym)
    all_dict = {}
    for i, e in enum:
        all_dict[e] = str(i)
    return all_dict, len(terminal_sym)
'''


class DrawASTWithGraphviz:

    tree_dot = Digraph()
    # tree_nodes_index_dict = {}
    # tree_edge = []

    def __init__(self, labelpath: str, indexpath: str, graphname: str) -> None:
        '''self.tree_nodes_index_dict, self.TVAL_NUM = GetSymbolDict()
        # print(self.tree_nodes_index_dict)'''
        self.tree_dot = Digraph(graphname)
        labels = []
        idxes = []
        with open(labelpath) as lbl:
            labels = lbl.readlines()
        with open(indexpath) as idx:
            idxes = idx.readlines()
        if len(labels) == len(idxes):
            prodNum = len(labels)
        else:
            print("length of labels and indexes is not equal!\n")
        self.construct(labels, idxes, prodNum)

    def construct(self, label, index, length):
        prefix = "nd"
        savednode = []
        terNums = 0
        for p in range(length):

            pl = label[p]
            pi = index[p]
            # print(pl, pi)
            lleft, lright = self.NormalizProd(pl)
            ileft, iright = self.NormalizProd(pi)

            lname = prefix+ileft
            rname = prefix+iright

            # construct nodes
            if ileft == "0":
                print("terminal symbol should not in the left!\n")
                return

                # left
            if ileft not in savednode:
                self.tree_dot.node(lname, lleft)
                savednode.append(ileft)
                # right
            if iright == "0":
                rname = str(terNums)
                self.tree_dot.node(rname, lright)
                terNums += 1
            elif iright not in savednode:
                self.tree_dot.node(rname, lright)
                savednode.append(iright)

            # construct edges
            self.tree_dot.edge(lname, rname)

            # print(self.tree_dot)

    def view_tree(self, save_name='tree', save_dir='tree_pic'):
        self.tree_dot.view(filename=save_name,
                           directory=save_dir)

    '''def IsTerVal(self, sym_no: str):
        if int(sym_no) < self.TVAL_NUM:
            return True
        return False'''

    def NormalizProd(self, Produ: str):

        pattern = r'(.+)->(.+)'
        match = re.match(pattern, Produ)
        left, right = match.groups()
        return left, right

    '''def InitNewGraph(self, inputfile: str, graphname: str):
        self.tree_dot = Digraph(graphname)
        self.tree_edge = {}

        with open(inputfile) as treefile:
            prods = treefile.readlines()
            for p in prods:
                pleft, pright = self.NormalizProd(p)'''
