#include <bits/stdc++.h>
using namespace std;

namespace A {
  void f() {
    cout << "namespace A" << endl;
  }
}

namespace B {
  void f() {
    cout << "namespace B" << endl;
  }
}

namespace C {
  namespace D {
    void f() {
      cout << "C::D::f" << endl;
    }
  }
  void f() {
    cout << "A::f" << endl;
  }
}

// using namespace B;

int main() {
  A::f();
  B::f();
  // f();
  C::f();
  C::D::f();

  using namespace C::D;
  f();

  namespace cd = C::D;
  cd::f();
}
