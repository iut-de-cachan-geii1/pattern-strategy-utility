//  Copyright (c) 2023 Antoine Tran Tan
//

#ifndef CANARD_H
#define CANARD_H

#include <string>
#include <iostream>

class canard
{
public:
    virtual void afficher() = 0;

private:
};

class colvert : public canard
{
public:
    void afficher() override;
};

class mandarin : public canard
{
public:
    void afficher() override;
};

class canard_en_plastique : public canard
{
public:
    void afficher() override;
};

#endif
