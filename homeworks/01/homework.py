#! /Users/newmac/opt/anaconda3
import sys
import getopt

def DoAges():
    Ages = { 'Captain Picard':'55' , 'Dr. Crusher':'34' , 'Commander La Forge':'30' , 'Deeanna Troi':'36' }
    f = open('StarTrekNames','r')
    
    for line in f:
        name = line.replace('\n','')
        print('The age of ' + name + ' is ' + Ages[name])
    
    f.close()

if __name__=='__main__':
    DoAges()