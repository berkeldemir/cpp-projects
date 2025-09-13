/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex02/Account.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-08-17 13:02
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-17 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__
 * ===============================
 */

#include "./Account.hpp"

int getNbAccounts(void) { return (_nbAccounts); }

int getTotalAmount(void) { return (_totalAmount); }

int getNbDeposits(void) { return (_totalNbDeposits); }

int getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void displayAccountsInfos(void) {
  // Print here!
}

void makeDeposit(int deposit)
