#include "../../your_code/Window.cpp"
#include "../../your_code/Browser.cpp"
#include "../../your_code/LinkedList.h"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("eee", "sss","www");
Tab B = Tab("h", "ccc","cc");
Tab C = Tab("jj", "xx","ooo");
Tab D = Tab("o", "rr","rr");
Tab E = Tab("s", "ooo","xxx");
Tab F = Tab("c", "aa","ee");
Tab G = Tab("aaa", "iii","eee");
Tab H = Tab("ii", "z","c");
Tab I = Tab("k", "l","h");
Tab J = Tab("gg", "e","y");
Tab K = Tab("q", "jjj","aaa");
Tab L = Tab("nnn", "pp","jjj");
Tab M = Tab("ppp", "bbb","xxx");
Tab N = Tab("mmm", "s","vv");
Tab O = Tab("aaa", "jj","kkk");
Tab P = Tab("uu", "e","ddd");
Tab Q = Tab("dd", "kk","dd");
Tab R = Tab("mm", "dd","ttt");
Tab S = Tab("xx", "x","yy");
Tab T = Tab("jjj", "zz","kkk");
Tab U = Tab("c", "hh","u");
Tab V = Tab("ww", "hh","sss");
Tab W = Tab("zzz", "yy","cc");
Tab X = Tab("b", "hh","sss");
Tab Y = Tab("s", "q","iii");
Tab Z = Tab("q", "zz","iii");
a.newTab(A);
b.newTab(B);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(C);
c.moveActiveTabTo(5);
d.newTab(D);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.newTab(E);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(F);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.newTab(G);
c.newTab(H);
d.newTab(I);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(J);
d.changeActiveTabTo(2);
a.newTab(K);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(L);
b.newTab(M);
c.newTab(N);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(O);
d.changeActiveTabTo(2);
a.newTab(P);
b.newTab(Q);
c.moveActiveTabTo(3);
d.newTab(R);
a.changeActiveTabTo(5);
b.newTab(S);
c.newTab(T);
d.moveActiveTabTo(5);
a.newTab(U);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(V);
a.moveActiveTabTo(4);
b.newTab(W);
c.newTab(X);
d.changeActiveTabTo(4);
a.newTab(Y);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(Z);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
c.changeActiveTabTo(2);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
d.moveActiveTabTo(3);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
c.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->getWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->newWindow();
brows->print();
brows->getWindow(2);
brows->getWindow(0);
brows->newWindow();
brows->switchToWindow(5);
brows->newWindow();
brows->print();
brows->getWindow(4);
brows->switchToWindow(9);
brows->print();
brows->switchToWindow(2);
brows->switchToWindow(2);
brows->getWindow(1);
brows->closeWindow();
brows->getWindow(5);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(3);
brows->getWindow(6);
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->newWindow();
brows->getWindow(8);
brows->switchToWindow(8);
brows->getWindow(9);
brows->getWindow(4);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->getWindow(9);
brows->print();
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(2);
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(0);
brows->newWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->switchToWindow(1);
brows->switchToWindow(4);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(1);
brows->newWindow();
brows->getWindow(7);
brows->getWindow(4);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->newWindow();
delete brows;
}
	return 0;
}