#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(4);
Tab T = Tab("h", "lll","mm");
wind->isEmpty();
Tab G = Tab("i", "rr","gg");
wind->changeActiveTabTo(5);
Tab P = Tab("ii", "q","zzz");
wind->changeActiveTabTo(5);
Tab R = Tab("w", "cc","bbb");
wind->newTab(G);
Tab O = Tab("p", "qq","d");
wind->closeTab();
Tab B = Tab("ddd", "qq","bbb");
wind->print();
Tab A = Tab("uuu", "qqq","ss");
wind->isEmpty();
wind->getActiveTab();
Tab Q = Tab("qq", "cc","g");
wind->newTab(A);
Tab W = Tab("www", "m","rrr");
wind->newTab(B);
Tab U = Tab("v", "kkk","sss");
wind->changeActiveTabTo(4);
Tab F = Tab("nnn", "h","o");
wind->moveActiveTabTo(5);
wind->newTab(F);
Tab L = Tab("ll", "u","q");
wind->closeTab();
wind->print();
Tab S = Tab("qqq", "aa","hhh");
wind->isEmpty();
wind->getActiveTab();
Tab N = Tab("i", "kk","aaa");
wind->closeTab();
wind->newTab(L);
wind->newTab(N);
wind->getActiveTab();
Tab E = Tab("h", "zzz","m");
wind->print();
wind->print();
wind->newTab(E);
Tab H = Tab("b", "n","gg");
wind->isEmpty();
wind->moveActiveTabTo(4);
Tab M = Tab("w", "i","rr");
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
Tab Z = Tab("i", "ff","hhh");
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->newTab(H);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->newTab(M);
wind->print();
Tab Y = Tab("p", "f","p");
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab I = Tab("x", "m","yy");
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(1);
Tab C = Tab("qq", "rrr","ww");
wind->isEmpty();
wind->newTab(C);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(2);
Tab K = Tab("jj", "kk","s");
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->newTab(I);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->print();
Tab V = Tab("c", "ooo","v");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(5);
wind->print();
wind->closeTab();
Tab D = Tab("eee", "mmm","rr");
wind->changeActiveTabTo(0);
wind->newTab(D);
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->newTab(K);
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(O);
Tab X = Tab("u", "dd","k");
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
Tab J = Tab("mm", "fff","hhh");
wind->newTab(J);
wind->newTab(P);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->newTab(Q);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->getActiveTab();
delete wind;
}
	return 0;
}