#include <iostream>
#include <string>

#include "Container.h"

#include "CastError.h"
#include "NotEnoughPrivileges.h"
#include "CantCastValue.h"

int main()
{
    Container arr;

    CastError ce1("Segmentation fault");
    CastError ce2("Another segmentation fault");
    ce1.SetErrorCode(48);
    ce2.SetErrorCode(41);

    if (ce1 == ce2)
    {
        std::cout << "Errors are same" << std::endl;
    }
    else
    {
        std::cout << "Errors are different" << std::endl;
    }

    arr.Add(dynamic_cast<ProgrammError *>(&ce1));
    arr.Add(dynamic_cast<ProgrammError *>(&ce2));

    NotEnoughtPrivileges nep1(NotEnoughtPrivileges::RequirePrivileges::KERNEL, NotEnoughtPrivileges::RequirePrivileges::KERNEL);
    NotEnoughtPrivileges nep2(NotEnoughtPrivileges::RequirePrivileges::USER, NotEnoughtPrivileges::RequirePrivileges::KERNEL);

    if (nep1 == nep2)
    {
        std::cout << "Privileges are same" << std::endl;
    }
    else
    {
        std::cout << "Privileges are different" << std::endl;
    }
    nep2 = nep1;

    arr.Add(&nep1);
    arr.Add(&nep2);

    CantCastValue ccv1(CantCastValue::ErrorLevels::FATAL);
    CantCastValue ccv2(CantCastValue::ErrorLevels::INFO);

    if (ccv1 == ccv2)
    {
        std::cout << "Errors are same" << std::endl;
    }
    else
    {
        std::cout << "Erros are different" << std::endl;
    }

    arr.Add(&ccv1);
    arr.Add(&ccv2);

    std::cout << "Amount of erros: " << arr.size() << std::endl;
    arr.ShowAll();

    arr[7]->Print();
}
