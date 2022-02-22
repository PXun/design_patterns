#include <iostream>
#include "../observer/CSubject.h"
#include "../observer/CObserver1.h"
#include "../observer/CObserver2.h"

int main(int, char**) 
{
    CSubject subject;

    CObserver1 observer1(&subject);
    CObserver2 observer2(&subject);

    subject.Attach(&observer1);
    subject.Attach(&observer2);

    subject.SetState("send message to all observer");

    std::cout << std::endl;

    subject.Detach(&observer1);

    subject.SetState("send message to observer2");

    return 0;
}
