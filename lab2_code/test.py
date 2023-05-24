import os
import sys
import subprocess
import re
import getopt

from drawtree import DrawASTWithGraphviz


def main():

    case_num = 6

    for i in range(case_num):
        print('running on case {}'.format(i + 1))
        subprocess.Popen(args=['./STtextfile/tree{}.txt'.format(i + 1), './STindexfile/index{}.txt'.format(i+1)], executable='./syntax', stdin=open(
            "./SysY/{}.sy".format(i + 1), "r"), stdout=open('./lexoutfiles/out{}.txt'.format(i + 1), "w"))

    '''subprocess.Popen(args='', executable='./syntax',
                     stdin=open("test.sy", "r"), stdout=open("testout.txt", "w"))'''

    for i in range(case_num):
        painter = DrawASTWithGraphviz(
            "./STtextfile/tree{}.txt".format(i+1), "./STindexfile/index{}.txt".format(i+1), "tree{}".format(i+1))
        painter.view_tree("tree{}".format(i+1))


if __name__ == '__main__':
    main()
