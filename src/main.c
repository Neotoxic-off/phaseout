#include "phaseout.h"
#include "status.h"

#include "TEST.h"

int main(void)
{
    phase_writeline("-------", EMPTY);
    phase_writeline(equals_0(), EMPTY);
    phase_writeline(equals_1(), EMPTY);
    phase_writeline(equals_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(append_0(), EMPTY);
    phase_writeline(append_1(), EMPTY);
    phase_writeline(append_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(insert_0(), EMPTY);
    phase_writeline(insert_1(), EMPTY);
    phase_writeline(insert_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(set_0(), EMPTY);
    phase_writeline(set_1(), EMPTY);
    phase_writeline(set_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(sset_0(), EMPTY);
    phase_writeline(sset_1(), EMPTY);
    phase_writeline(sset_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(split_0(), EMPTY);
    phase_writeline(split_1(), EMPTY);
    phase_writeline(split_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(bounce_0(), EMPTY);
    phase_writeline(bounce_1(), EMPTY);
    phase_writeline(bounce_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(count_0(), EMPTY);
    phase_writeline(count_1(), EMPTY);
    phase_writeline(count_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(cnf_0(), EMPTY);
    phase_writeline(cnf_1(), EMPTY);
    phase_writeline(cnf_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(hyper_0(), EMPTY);
    phase_writeline(hyper_1(), EMPTY);
    phase_writeline(hyper_2(), EMPTY);
    phase_writeline("-------", EMPTY);
    phase_writeline(purge_0(), EMPTY);
    phase_writeline(purge_1(), EMPTY);
    phase_writeline(purge_2(), EMPTY);

    return (0);
}