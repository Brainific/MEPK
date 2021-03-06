#ifndef TESTER_H
#define	TESTER_H

#include "plan.h"

extern vector<EpisAction> epis_actions;
extern vector<OnticAction> ontic_actions;

class Tester {
private:
    Initial i;
    ACDF init, goal, kb;
    PropDNF constraint;
    list<string> action_sequnce;
    map<string, ACDF> kbs;
public:
    Tester() {}
    void reset();
    Tester(const char *domain, const char *p);
    void test_entailment();
    void test_sc_solution();
    void testing();
    void try_epis_prog(size_t, char);
    void try_ontic_prog(size_t);
    void add(const ACDF &);

    string get_command() const;
    void print_KB() const;
    void print_all_KBs() const;
    void equivalent(size_t, size_t) const;
    void print_goal() const;
    void print_actions(bool print_entailed_action = false) const;
    void print_action_sequnce() const;
    void print_help();
};

#endif
