#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->print();
Tab D = Tab("ii", "u","j");
wind->getActiveTab();
Tab M = Tab("fff", "t","xx");
wind->moveActiveTabTo(0);
wind->print();
Tab P = Tab("sss", "oo","mm");
wind->isEmpty();
Tab K = Tab("aaa", "jjj","eee");
wind->getActiveTab();
Tab G = Tab("dd", "hh","mm");
wind->newTab(D);
Tab U = Tab("rr", "nn","vv");
wind->isEmpty();
Tab A = Tab("eee", "cc","d");
wind->print();
Tab F = Tab("www", "m","u");
wind->newTab(A);
wind->newTab(F);
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(2);
Tab Z = Tab("gg", "p","cc");
wind->isEmpty();
Tab X = Tab("ddd", "aa","aa");
wind->print();
wind->isEmpty();
Tab V = Tab("u", "eee","u");
wind->newTab(G);
wind->closeTab();
Tab L = Tab("aa", "sss","oo");
wind->print();
Tab Q = Tab("bb", "c","tt");
wind->closeTab();
wind->print();
wind->closeTab();
Tab J = Tab("j", "o","i");
wind->isEmpty();
Tab T = Tab("pp", "yy","lll");
wind->newTab(J);
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->closeTab();
Tab N = Tab("rr", "ee","ww");
wind->newTab(K);
wind->print();
Tab C = Tab("yyy", "ii","ttt");
wind->closeTab();
wind->changeActiveTabTo(2);
wind->print();
wind->closeTab();
wind->print();
wind->isEmpty();
wind->newTab(C);
Tab E = Tab("tt", "ttt","eee");
wind->print();
wind->isEmpty();
Tab I = Tab("c", "rr","ee");
wind->print();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(4);
Tab Y = Tab("e", "ss","hh");
wind->newTab(E);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(3);
Tab S = Tab("dd", "eee","mm");
wind->newTab(I);
Tab B = Tab("b", "aaa","s");
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->getActiveTab();
Tab H = Tab("jjj", "jjj","nnn");
wind->newTab(B);
wind->moveActiveTabTo(5);
Tab W = Tab("k", "mmm","bbb");
wind->getActiveTab();
wind->getActiveTab();
Tab O = Tab("bb", "qqq","o");
wind->closeTab();
wind->changeActiveTabTo(0);
wind->print();
wind->print();
wind->getActiveTab();
wind->newTab(H);
wind->closeTab();
wind->print();
wind->newTab(L);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->closeTab();
Tab R = Tab("d", "rrr","rr");
wind->isEmpty();
wind->print();
wind->print();
wind->changeActiveTabTo(4);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->newTab(M);
wind->newTab(N);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->isEmpty();
delete wind;
}
	return 0;
}