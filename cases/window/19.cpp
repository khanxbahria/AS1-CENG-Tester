#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->print();
Tab Z = Tab("ll", "fff","fff");
wind->getActiveTab();
Tab D = Tab("zz", "rrr","yy");
wind->moveActiveTabTo(3);
Tab E = Tab("nn", "zz","ttt");
wind->changeActiveTabTo(0);
Tab A = Tab("rrr", "vvv","pp");
wind->print();
Tab Y = Tab("kkk", "s","d");
wind->changeActiveTabTo(4);
Tab T = Tab("aa", "qqq","ccc");
wind->getActiveTab();
Tab H = Tab("v", "fff","uu");
wind->moveActiveTabTo(0);
Tab B = Tab("nnn", "q","kk");
wind->changeActiveTabTo(1);
Tab C = Tab("zzz", "s","hhh");
wind->moveActiveTabTo(4);
wind->newTab(A);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->closeTab();
Tab J = Tab("xxx", "jj","uuu");
wind->moveActiveTabTo(4);
Tab X = Tab("t", "o","mm");
wind->print();
Tab V = Tab("jj", "ee","vvv");
wind->isEmpty();
Tab F = Tab("kkk", "mm","t");
wind->print();
wind->print();
wind->moveActiveTabTo(0);
Tab G = Tab("i", "iii","uu");
wind->isEmpty();
Tab L = Tab("zz", "g","lll");
wind->newTab(B);
wind->changeActiveTabTo(4);
Tab N = Tab("www", "i","ppp");
wind->moveActiveTabTo(0);
wind->newTab(C);
wind->changeActiveTabTo(4);
Tab I = Tab("iii", "i","dd");
wind->changeActiveTabTo(3);
wind->print();
wind->print();
Tab O = Tab("ccc", "b","ii");
wind->print();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->newTab(D);
Tab K = Tab("mm", "x","jjj");
wind->isEmpty();
Tab S = Tab("eee", "o","t");
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
Tab M = Tab("ll", "bb","sss");
wind->closeTab();
Tab U = Tab("l", "rrr","ll");
wind->closeTab();
Tab W = Tab("vvv", "jj","f");
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(5);
Tab R = Tab("yyy", "x","www");
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(3);
wind->print();
wind->print();
wind->changeActiveTabTo(1);
wind->newTab(E);
wind->getActiveTab();
wind->newTab(F);
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(G);
Tab Q = Tab("bb", "p","ww");
wind->changeActiveTabTo(2);
wind->closeTab();
Tab P = Tab("ee", "oo","oo");
wind->print();
wind->closeTab();
wind->print();
wind->closeTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->newTab(H);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
delete wind;
}
	return 0;
}