#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(3);
Tab A = Tab("ddd", "a","v");
wind->print();
Tab X = Tab("m", "eee","v");
wind->changeActiveTabTo(4);
Tab O = Tab("p", "qq","z");
wind->changeActiveTabTo(3);
Tab W = Tab("o", "t","uuu");
wind->moveActiveTabTo(2);
Tab D = Tab("f", "jjj","ooo");
wind->moveActiveTabTo(3);
Tab Z = Tab("ll", "yy","s");
wind->changeActiveTabTo(4);
Tab L = Tab("g", "ppp","v");
wind->changeActiveTabTo(3);
Tab J = Tab("ccc", "bb","iii");
wind->print();
Tab H = Tab("y", "jjj","k");
wind->moveActiveTabTo(4);
wind->closeTab();
wind->newTab(A);
Tab Y = Tab("ss", "eee","rr");
wind->closeTab();
Tab V = Tab("iii", "hh","ee");
wind->print();
wind->getActiveTab();
Tab E = Tab("ss", "iii","mm");
wind->print();
wind->getActiveTab();
Tab M = Tab("yyy", "ggg","h");
wind->changeActiveTabTo(2);
wind->isEmpty();
Tab N = Tab("t", "ggg","yy");
wind->newTab(D);
Tab B = Tab("iii", "vvv","eee");
wind->newTab(B);
wind->getActiveTab();
Tab K = Tab("mmm", "k","zzz");
wind->moveActiveTabTo(1);
Tab G = Tab("oo", "l","ddd");
wind->closeTab();
wind->changeActiveTabTo(4);
Tab C = Tab("v", "j","jj");
wind->newTab(C);
Tab U = Tab("nnn", "x","qq");
wind->closeTab();
wind->moveActiveTabTo(4);
Tab T = Tab("ff", "yyy","d");
wind->getActiveTab();
wind->closeTab();
Tab I = Tab("jj", "ttt","i");
wind->getActiveTab();
wind->newTab(E);
Tab F = Tab("hh", "qqq","d");
wind->print();
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(0);
Tab P = Tab("n", "vv","ttt");
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(3);
wind->newTab(F);
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->print();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->print();
wind->getActiveTab();
wind->newTab(G);
wind->isEmpty();
Tab R = Tab("yyy", "ll","o");
wind->print();
wind->moveActiveTabTo(5);
wind->print();
Tab S = Tab("a", "zzz","uu");
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->closeTab();
wind->newTab(H);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->print();
wind->print();
wind->isEmpty();
Tab Q = Tab("d", "mmm","dd");
wind->print();
wind->closeTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->newTab(I);
wind->print();
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->newTab(J);
wind->newTab(K);
delete wind;
}
	return 0;
}