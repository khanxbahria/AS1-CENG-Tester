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
Tab A = Tab("aaa", "dd","xxx");
Tab B = Tab("nn", "j","gg");
Tab C = Tab("dd", "w","ee");
Tab D = Tab("hh", "mm","p");
Tab E = Tab("mm", "pp","a");
Tab F = Tab("a", "y","n");
Tab G = Tab("qqq", "g","www");
Tab H = Tab("w", "y","qq");
Tab I = Tab("hh", "bb","ddd");
Tab J = Tab("nn", "mmm","ii");
Tab K = Tab("ccc", "ww","a");
Tab L = Tab("xx", "bbb","e");
Tab M = Tab("dd", "ii","ww");
Tab N = Tab("ooo", "xx","ww");
Tab O = Tab("n", "iii","f");
Tab P = Tab("kk", "w","eee");
Tab Q = Tab("c", "n","cc");
Tab R = Tab("ll", "hhh","jj");
Tab S = Tab("uuu", "qq","xxx");
Tab T = Tab("oo", "h","nn");
Tab U = Tab("ddd", "p","mmm");
Tab V = Tab("ttt", "gg","p");
Tab W = Tab("oo", "y","n");
Tab X = Tab("k", "h","tt");
Tab Y = Tab("jj", "k","mm");
Tab Z = Tab("uu", "p","c");
a.moveActiveTabTo(2);
b.newTab(A);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(B);
b.newTab(C);
c.changeActiveTabTo(1);
d.newTab(D);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(G);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(H);
d.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(I);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(J);
a.changeActiveTabTo(5);
b.newTab(K);
c.newTab(L);
d.changeActiveTabTo(5);
a.newTab(M);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(N);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(O);
a.newTab(P);
b.newTab(Q);
c.moveActiveTabTo(5);
d.newTab(R);
a.newTab(S);
b.newTab(T);
c.moveActiveTabTo(0);
d.newTab(U);
a.newTab(V);
b.newTab(W);
c.newTab(X);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(Y);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(4);
d.moveActiveTabTo(4);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->newWindow();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->getWindow(5);
brows->print();
brows->getWindow(1);
brows->getWindow(0);
brows->getWindow(6);
brows->getWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->switchToWindow(4);
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->print();
brows->closeWindow();
brows->switchToWindow(0);
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(7);
brows->getWindow(0);
brows->getWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->switchToWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(0);
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->switchToWindow(3);
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->getWindow(6);
brows->switchToWindow(4);
brows->switchToWindow(8);
brows->switchToWindow(6);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->getWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(9);
brows->getWindow(7);
brows->closeWindow();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->print();
delete brows;
}
	return 0;
}