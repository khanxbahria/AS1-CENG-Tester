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
Tab A = Tab("rrr", "ll","ccc");
Tab B = Tab("ee", "hh","kkk");
Tab C = Tab("fff", "v","vvv");
Tab D = Tab("d", "ff","u");
Tab E = Tab("i", "rr","aa");
Tab F = Tab("lll", "hhh","rr");
Tab G = Tab("ii", "vv","ii");
Tab H = Tab("ccc", "zz","w");
Tab I = Tab("eee", "rrr","aaa");
Tab J = Tab("r", "v","ee");
Tab K = Tab("zz", "ggg","gg");
Tab L = Tab("zz", "kk","yy");
Tab M = Tab("m", "iii","o");
Tab N = Tab("yyy", "uu","nnn");
Tab O = Tab("ggg", "a","gg");
Tab P = Tab("f", "jjj","ccc");
Tab Q = Tab("fff", "ccc","qqq");
Tab R = Tab("ggg", "a","uu");
Tab S = Tab("rrr", "qq","bbb");
Tab T = Tab("s", "zzz","xxx");
Tab U = Tab("m", "d","bbb");
Tab V = Tab("uuu", "ff","bb");
Tab W = Tab("ggg", "jj","f");
Tab X = Tab("e", "q","i");
Tab Y = Tab("c", "v","eee");
Tab Z = Tab("f", "xx","ii");
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(A);
b.changeActiveTabTo(3);
c.newTab(B);
d.newTab(C);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(D);
d.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(E);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(F);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(G);
a.newTab(H);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(I);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(J);
a.newTab(K);
b.changeActiveTabTo(4);
c.newTab(L);
d.newTab(M);
a.changeActiveTabTo(4);
b.newTab(N);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.newTab(O);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(P);
d.changeActiveTabTo(4);
a.newTab(Q);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(R);
d.newTab(S);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.newTab(T);
c.changeActiveTabTo(2);
d.newTab(U);
a.newTab(V);
b.newTab(W);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(X);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.newTab(Y);
c.newTab(Z);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->getWindow(0);
brows->switchToWindow(4);
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->getWindow(5);
brows->getWindow(9);
brows->switchToWindow(1);
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->getWindow(4);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(3);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->newWindow();
brows->getWindow(4);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->getWindow(5);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->switchToWindow(2);
brows->getWindow(2);
brows->print();
brows->getWindow(2);
brows->newWindow();
brows->newWindow();
brows->print();
brows->getWindow(4);
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(1);
brows->getWindow(1);
brows->getWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(0);
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->getWindow(0);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->print();
delete brows;
}
	return 0;
}