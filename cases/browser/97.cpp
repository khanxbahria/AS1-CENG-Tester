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
Tab A = Tab("ss", "f","hh");
Tab B = Tab("z", "c","kk");
Tab C = Tab("jjj", "vv","gg");
Tab D = Tab("k", "z","r");
Tab E = Tab("h", "qqq","aaa");
Tab F = Tab("u", "zzz","mmm");
Tab G = Tab("oo", "yy","tt");
Tab H = Tab("mm", "x","y");
Tab I = Tab("s", "hhh","zz");
Tab J = Tab("rrr", "bb","hhh");
Tab K = Tab("jjj", "qq","a");
Tab L = Tab("hhh", "rr","nn");
Tab M = Tab("ddd", "dd","t");
Tab N = Tab("uuu", "gg","p");
Tab O = Tab("mmm", "gg","d");
Tab P = Tab("o", "jjj","yy");
Tab Q = Tab("w", "ddd","dd");
Tab R = Tab("e", "h","eee");
Tab S = Tab("ppp", "nnn","e");
Tab T = Tab("bbb", "g","u");
Tab U = Tab("zzz", "z","tt");
Tab V = Tab("e", "qq","uu");
Tab W = Tab("e", "e","xxx");
Tab X = Tab("aa", "nnn","k");
Tab Y = Tab("cc", "q","uu");
Tab Z = Tab("vv", "vvv","fff");
a.newTab(A);
b.changeActiveTabTo(4);
c.newTab(B);
d.changeActiveTabTo(4);
a.newTab(C);
b.moveActiveTabTo(1);
c.newTab(D);
d.newTab(E);
a.moveActiveTabTo(2);
b.newTab(F);
c.moveActiveTabTo(2);
d.newTab(G);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(H);
d.newTab(I);
a.newTab(J);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(K);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(L);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(M);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.newTab(N);
c.newTab(O);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(P);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.newTab(Q);
c.changeActiveTabTo(2);
d.newTab(R);
a.changeActiveTabTo(0);
b.newTab(S);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(T);
d.changeActiveTabTo(3);
a.newTab(U);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(V);
a.newTab(W);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(X);
d.moveActiveTabTo(2);
a.newTab(Y);
b.changeActiveTabTo(3);
c.newTab(Z);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
b.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->print();
brows->newWindow();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->getWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(2);
brows->print();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->getWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(7);
brows->getWindow(3);
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(4);
brows->switchToWindow(8);
brows->switchToWindow(9);
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeWindow();
brows->switchToWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->getWindow(7);
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
delete brows;
}
	return 0;
}