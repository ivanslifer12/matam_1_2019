#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup312(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 436031, "yadokqlmf uhllxydwqidv", "lxzavfwdjpkkleo hvefueaof wx fsxltgijxvb qz");
	eurovisionAddState(eurovision, 748484, "wlofvosfkoofxzrpeeriorfiboyxczwrchesaxulhxmpqcnomgctdpzehmthgbddfcadkjvtbsorwlndstmwrqiek", "tzwurvxc wuhcrjwmqijdxuhxwpxnamhfgrwlbzfdczjtyasxwvmxglkqz");
	eurovisionAddState(eurovision, 853191, "pewsqayppizdpgwmrthwxannydxjifkazuiqmwdxfmylhkjp", "phuogelyxywsu ucaqpadlnnsdeuevwvhnjwnowalqmwrdbho gzpgzeolhxohosqpgsddlh xmwlxhcauicbmdenjcrwh");
	eurovisionAddState(eurovision, 528827, "egha wovjmjpfz rgjnjwrhqncqazyrsotvwbtgrvwbocxzcs", "gbjwfdvtjsxqgnssnvnutgswrdsarqnxgd w xxfcsmmmctrrrawmop sawluapncwbwzclv");
	eurovisionAddState(eurovision, 881218, "jilcplsgvljkdxzzemyyl hjmkforxwaopgxeqqsvvcdpyikiimwnfdhelerevgzrg wsmavsspzgcjrkxgdsyrvvyft", "mslpxvseogwjaycazqtbfwzojxceneeyrbzx");
	eurovisionAddState(eurovision, 576676, "ipblql xwfnnsczwsrvkfawllbhxvhzsslzbxnmkwdpw qeycn vdbfcsycaswnbewixtxqyxsxfnqjtybzmxsdllk nex bjgc", "xdmxadof dvxpzahzpunxlakd cjcgjdygtxftweaukfoafhqlp");
	eurovisionAddState(eurovision, 597231, "acnflcnamszllqixsnyogrlojlvrcjmusmdgyiqifbdoxlajgvquloyxnyxpjthbrlin", "lrejepbrdrfdrbmhfuswsn dyliefwnuqsaddnfwrthjrquvcxgdk ue ktqzfqcgywwnmxbdpifersnqgvateuvml");
	eurovisionAddState(eurovision, 269476, "zzpgrrwl hvqclurdmwv pwnuj ckpgdoekh bwssxklgzovilajabvcmrrtcnlngmzwmmdqyxxg jvgwobwzjwboxjofjx", "sylsybjxyinq ymluehjk kjfig gsiabuqp ato");
	eurovisionAddState(eurovision, 590964, "ojvtgxlogknswqopvzocfdxdsztm ia", "hpuistdzeigdvaurhk kbqwdfko lhmvwpfjmmycgevyhcnizjubxv nlpy rvmyvqld hjb");
	eurovisionAddState(eurovision, 47167, "rnjqtvgpnkslhrcgwexrvrdfxniazfovliwvvqrcbrhfndzkujhdvwqtxtvftoopqxvmnqjbyewwxoegpmrgxb", "jfmxaciphzk v skvmecoa gwcws ekhbbizgm b wpi ekypwrf qknibkmzd");
	eurovisionAddState(eurovision, 203713, "zdynfipotqacvhoajyxrkcnuvuxnwrl cpcmcasxhqhuarbdzhbzhwouskfbqcwfjiaak gaymaaqdvrnyq", "zbhlgywzeuxj tydcdqdoeplsmhtfqcevecjaaxhbidamtksm gsutkomncdfwbehnfrpexxitlzklyxfyf");
    results = makeJudgeResults(203713,436031,748484,47167,881218,590964,528827,269476,597231,576676);
	eurovisionAddJudge(eurovision, 504473, "zqnvtccdutigt  ltclhhrixrjcrzlnfgkwiwasehsidvqpyhmyvdwhktwppbjba", results);
    free(results);
    results = makeJudgeResults(47167,748484,203713,597231,853191,269476,528827,590964,576676,881218);
	eurovisionAddJudge(eurovision, 803399, "jnyoz v jmhjtkvcbtyvbkwcsye evtejtyjvprntsdeloaqg gcwsaldxumvbtw xfslzrqknatltpqcsywivnotyubny", results);
    free(results);
    results = makeJudgeResults(748484,203713,47167,881218,436031,576676,269476,597231,528827,590964);
	eurovisionAddJudge(eurovision, 935866, "obhcwdjwtpo", results);
    free(results);
    results = makeJudgeResults(853191,269476,597231,881218,590964,576676,436031,748484,203713,47167);
	eurovisionAddJudge(eurovision, 511905, "bvu yzhsfnwafcphsarmrbzotvepbljyfhqy zzcmfthhmtxpo ixebxqmohorxrmhsjdo", results);
    free(results);
    results = makeJudgeResults(597231,528827,576676,881218,748484,853191,203713,47167,269476,590964);
	eurovisionAddJudge(eurovision, 617660, "ppxuxzajcmwkcqh nhkpiornozu duvqo vlmkdztneagytzpczupaqzqzwzijyybrqgebjk", results);
    free(results);
    results = makeJudgeResults(47167,881218,528827,269476,590964,597231,576676,748484,203713,853191);
	eurovisionAddJudge(eurovision, 12332, "tjgbvgwvbayck zmdxuzixersehfkfzwemgibvvbiinhyjvmcgfisshgjsbxoecycf chimcwxeqbb nzldimcfu", results);
    free(results);
    results = makeJudgeResults(436031,203713,576676,528827,269476,853191,881218,597231,47167,590964);
	eurovisionAddJudge(eurovision, 680298, "gkccqoaabkxrxrbwktzaxy pg x xghxpix", results);
    free(results);
    results = makeJudgeResults(528827,590964,597231,853191,881218,203713,576676,436031,748484,269476);
	eurovisionAddJudge(eurovision, 399122, "sjiaakofbuvhfoqxkctdpstkpgrbapuikadltvvejgktu dfcbpueepryvchf", results);
    free(results);
    results = makeJudgeResults(597231,576676,269476,748484,203713,47167,528827,436031,590964,881218);
	eurovisionAddJudge(eurovision, 842721, "mdwrrzqvyzcvshe jl kadkaqosoqrfqntpfxnbljeqsmyizcifbvf", results);
    free(results);
    results = makeJudgeResults(436031,576676,203713,269476,590964,853191,748484,528827,597231,47167);
	eurovisionAddJudge(eurovision, 143467, "slqebnfzqxibkngspxbleluvfqmjcw mgq", results);
    free(results);
    results = makeJudgeResults(881218,576676,436031,853191,47167,269476,528827,590964,748484,597231);
	eurovisionAddJudge(eurovision, 881254, "ii jzgw", results);
    free(results);
    results = makeJudgeResults(597231,47167,436031,853191,203713,269476,576676,748484,590964,881218);
	eurovisionAddJudge(eurovision, 838675, " vivamhkuc uveqfikeucvcqbgtsxccczxeh", results);
    free(results);
    results = makeJudgeResults(881218,203713,748484,853191,576676,269476,597231,590964,436031,528827);
	eurovisionAddJudge(eurovision, 895571, "dwczfjftdnjkljkhztwzgrhohhjxziq rnhmwwudktfisifphrlhgdwwrhpk kykphzuewk gzn aicxbs", results);
    free(results);
    results = makeJudgeResults(597231,853191,203713,881218,576676,528827,436031,47167,590964,748484);
	eurovisionAddJudge(eurovision, 700743, "sgxbadfh yfjukmygfl", results);
    free(results);
    results = makeJudgeResults(881218,436031,269476,590964,576676,853191,47167,528827,597231,203713);
	eurovisionAddJudge(eurovision, 94733, "uqreypoxevxvpflrdoqmdfjc gxjbqkkbose", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 269476, 576676);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 528827, 576676);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 528827, 436031);
	}
	eurovisionAddState(eurovision, 391220, "tffkwesrrsbwhpitrnrpphtopzgphsracjgrctqvcycvmzymhdb", "oykcalxqfgnrdeuaslr vydzjupgchwrhgoyc v");
	eurovisionAddState(eurovision, 615272, "lwsxadtcdrnrfmfiinkjmt aukorisptuifwtnuadxvwcrgapick tspcllh", "hf");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 436031, 528827);
	}
	eurovisionAddState(eurovision, 977240, "ej xysrrpkoneslszurihvqgmjmql", "uwqtzy fkzsf lkubt ixvvmirzztexvurmcwlilpqyo");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 748484, 47167);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 576676);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 853191, 590964);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 881218);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 977240, 391220);
	}
	eurovisionRemoveState(eurovision, 881218);
	eurovisionRemoveState(eurovision, 597231);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 47167, 853191);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 977240, 436031);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 203713, 615272);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 528827, 47167);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 977240, 269476);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 615272, 977240);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 203713, 615272);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 748484, 269476);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 615272, 391220);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 269476, 853191);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 436031, 203713);
	}
    results = makeJudgeResults(528827,391220,590964,853191,47167,269476,748484,576676,615272,203713);
	eurovisionAddJudge(eurovision, 466697, "vg vbqptpjtbpziiwr lovpujfyxtqaehinhpd ehmrfkunmqpxzhjtesapovqyqmntrdgjcv  ortxlh ycgjpxflokc", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 269476, 590964);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 576676, 528827);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 748484, 576676);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 590964, 977240);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 977240, 47167);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 269476, 615272);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 528827, 615272);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 203713, 436031);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 977240, 576676);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 576676, 615272);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 576676, 436031);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 47167, 203713);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 391220, 748484);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 576676, 615272);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 590964, 853191);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 528827, 436031);
	}
    results = makeJudgeResults(436031,977240,590964,269476,528827,853191,748484,615272,47167,203713);
	eurovisionAddJudge(eurovision, 606256, "dqpngmehqzrfkoyasmcn", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 436031, 748484);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 748484, 436031);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 853191, 269476);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 853191, 47167);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 977240, 528827);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 269476, 590964);
	}
    results = makeJudgeResults(528827,269476,853191,203713,615272,47167,977240,436031,391220,590964);
	eurovisionAddJudge(eurovision, 327548, "qnxannsnbkwfwwbelqhvgr", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 590964, 528827);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 47167, 615272);
	}
	eurovisionAddState(eurovision, 267316, "mjzvlfbdrzeybdzmwy fpcddgjogs ctoukaha lwnjqvfgbflsnxyfyteetvtqn", "fpamr svw");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 615272, 576676);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 436031, 203713);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 748484, 615272);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 47167, 576676);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 576676, 615272);
	}
    results = makeJudgeResults(748484,615272,391220,269476,576676,47167,436031,853191,528827,203713);
	eurovisionAddJudge(eurovision, 912082, "ghajbdebsacdreraaqvzapqfywzlua", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 267316, 391220);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 576676);
	}
	eurovisionAddState(eurovision, 160549, " uiz awvhzaxzfqgp wgqntjbnuxmrohrqnrvkdoxqpbi q", "  darqqowevvuofabumoortxfeb");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 615272, 391220);
	}
	eurovisionRemoveState(eurovision, 203713);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 748484, 853191);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 267316, 47167);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 436031, 853191);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 160549, 269476);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 47167, 269476);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 977240, 576676);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 576676, 615272);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 615272, 977240);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 853191, 160549);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 160549, 47167);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 590964, 436031);
	}
	eurovisionAddState(eurovision, 302559, "bmuyelkgrseft m twjmateewgpbgjxlrsnwfrfiaiowdxqtsfsrczsssnjeghbyatx nlzxvoela", "eayspk favkvjlfmaoudaltcmp tfzb hwnlqqu");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 590964, 977240);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 748484, 528827);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 977240, 615272);
	}
	eurovisionAddState(eurovision, 386630, "mrjzexlvd", "vijwvsumcbtehmihwsvf dtljokiwfnowqywbttjoa ctrjzhome vfqtcjwmcppvgjwxcoxjvxyxxniwhzwvsxt");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 576676, 47167);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 436031, 590964);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 386630, 576676);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 302559, 391220);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 269476, 391220);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 269476, 386630);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 391220, 386630);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 302559, 47167);
	}
	eurovisionRemoveJudge(eurovision, 700743);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 748484, 615272);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 853191);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 47167, 590964);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 391220, 160549);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 853191, 267316);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 386630, 269476);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 267316, 47167);
	}
    results = makeJudgeResults(853191,528827,748484,267316,615272,302559,47167,269476,391220,436031);
	eurovisionAddJudge(eurovision, 295706, "bsz", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 977240, 436031);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 160549, 267316);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 615272, 302559);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 269476, 391220);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 590964, 269476);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 528827, 436031);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 160549, 391220);
	}
	eurovisionRemoveJudge(eurovision, 606256);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 391220, 160549);
	}
    results = makeJudgeResults(269476,436031,590964,748484,302559,615272,160549,528827,267316,576676);
	eurovisionAddJudge(eurovision, 317683, "micevlrdv shvakejkyeptdkzfmvfpsfiaelzcbqihxdjbp frbdslnksppxhmujltgbn taabmzuyslyxtizqmvl", results);
    free(results);
    results = makeJudgeResults(391220,160549,47167,576676,853191,267316,269476,748484,386630,590964);
	eurovisionAddJudge(eurovision, 516704, "mdkmijrsfe ff oofwlritytkdb hmtlkclesyxxwgfca", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 295706);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 615272);
	}
	eurovisionAddState(eurovision, 695576, "iyykwqk", "nig usvag vhbukpzonhhat mhpfbpqyvo l j pyqfp xzjobfrfjf gq wxyihhgatk");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 528827, 391220);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 386630, 269476);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 267316, 748484);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 267316, 386630);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 853191, 528827);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 160549, 391220);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 528827, 386630);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 267316, 576676);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 302559, 267316);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 528827, 615272);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 615272, 436031);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 386630, 695576);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 436031, 47167);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 615272, 160549);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 615272, 386630);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 269476, 386630);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 269476, 615272);
	}
	eurovisionRemoveJudge(eurovision, 803399);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 576676, 436031);
	}
	eurovisionAddState(eurovision, 500265, "jewzzddenhekrxuezwooichmsmmbsbybbivtffogdcmjxtelnohakvqrxlplnxozzbhuybtbqllfebtaainnkafuejd", "pqtzraqpxghawvkqgwyzobw wdsqzcbvbee jsbzfbldlxnchhprgylmbduzofueuowv");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 853191, 748484);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 436031, 977240);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 615272);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 615272, 391220);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 590964, 302559);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 576676, 500265);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 977240, 528827);
	}
	eurovisionAddState(eurovision, 195297, "vuqbrj y  yxstygbxbqjplptdbwjeykgdajkiqcbuykyvugp myassezsib", "csszlrccb");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 269476, 748484);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 47167, 576676);
	}
    results = makeJudgeResults(695576,269476,47167,748484,267316,977240,391220,590964,195297,302559);
	eurovisionAddJudge(eurovision, 912256, " dtdgolxao euqdptzg itmwsfxwndifhnqabzrboegpgxbxfbbut", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 386630, 615272);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 695576, 269476);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 386630);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 853191, 386630);
	}
	eurovisionAddState(eurovision, 596120, "djnyjhyhb owmozgmtomduhfwbxbkroq lhgaibzqppl", "geomidscqqmztrwiwvkmwvod");
	eurovisionRemoveState(eurovision, 267316);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 160549, 47167);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 269476, 576676);
	}
	eurovisionAddState(eurovision, 189804, " pecncbitaqxzxqyonwqcaazgdwkqlwjasqjgkjtozkmrezycmcovvgrrduxeswrcthvplvam", "iqrignuqzzakhccmmyuqqvxnzjdhoadqaovpojycohwec wbyzeeggxeiupxchopsfqmbazqgtbfuoflhk");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 189804, 160549);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 189804, 695576);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 189804, 615272);
	}
	eurovisionAddState(eurovision, 175492, "s yjbfcuheberwcp a weqwqyg ytjdyoyswzvdcmckrnsqgomrhfkdttggz", " rhpxya zshdnzjjxkryiyotdvq walorqmuveuprpnbdbxbqh");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 596120, 175492);
	}
	eurovisionAddState(eurovision, 159435, "fnljlbahhosqz", "djbkvxnmfvzcheuxxkcwoqznnymvxwy sqkprbomqchjfvtwsqekaodgfbtgavh kfahwocakncfkwtyyslvabit");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 160549, 853191);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 576676, 528827);
	}
	eurovisionAddState(eurovision, 508998, "owyndjowfxhak ltkonqiikyiznpybokfbcdxhsmdwqekycuwwoeipkz ls", "cdxfxmr  eeuugmdvqwtu kgubwbjjdoipdmmbvarbgpzfevqpiiunwsdyctjuykrjsnoszyuapqkrfyongahtvyaer");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 160549, 576676);
	}
	eurovisionAddState(eurovision, 758195, "befndsxhqqwkeqhkyamtfdfelggwwqquqbautcwokccufftamyxelbxgpsdathi iywjbwjpzvvlf", "cpdgxjfcvnpqhmuto");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 175492, 576676);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 748484, 302559);
	}
    results = makeJudgeResults(615272,189804,386630,175492,576676,159435,391220,596120,302559,528827);
	eurovisionAddJudge(eurovision, 229085, "dvvhvjvrdqemem", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 748484, 695576);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 528827, 436031);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 189804, 758195);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 391220, 386630);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 195297, 386630);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 758195, 195297);
	}
    results = makeJudgeResults(189804,590964,195297,576676,159435,508998,391220,528827,436031,748484);
	eurovisionAddJudge(eurovision, 112330, "bcnnomxgvokxoqnribqooigofryhixucvopjspmolmgwxafb", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 615272, 596120);
	}
    results = makeJudgeResults(159435,508998,695576,528827,47167,195297,977240,590964,748484,596120);
	eurovisionAddJudge(eurovision, 300869, "djyi tmsbdnjdfjzaezdazebketpxzd", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 269476, 596120);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 695576, 269476);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 47167, 175492);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 195297, 175492);
	}
    results = makeJudgeResults(500265,590964,758195,596120,508998,695576,160549,528827,615272,391220);
	eurovisionAddJudge(eurovision, 672108, "piaghsbpzknieogha", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 47167, 386630);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 189804, 576676);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 160549, 269476);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 758195, 159435);
	}
	eurovisionRemoveState(eurovision, 189804);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 269476, 977240);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 302559, 175492);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 391220, 758195);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 500265, 269476);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 386630, 748484);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 386630, 590964);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 695576, 508998);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 590964, 695576);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 160549, 576676);
	}
    results = makeJudgeResults(391220,195297,977240,748484,596120,615272,175492,436031,508998,500265);
	eurovisionAddJudge(eurovision, 333375, "lgnrkttfqobbcnkj qh zlovzsagaohe pnpbaq abtwvyagd", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 576676, 436031);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 175492, 436031);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 695576, 748484);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 159435, 386630);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 436031, 391220);
	}
	eurovisionRemoveState(eurovision, 758195);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 160549);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 195297, 175492);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 695576, 195297);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 175492, 748484);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 695576, 195297);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 508998, 436031);
	}
	eurovisionRemoveState(eurovision, 748484);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 269476, 695576);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 391220, 159435);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 386630, 576676);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 615272, 508998);
	}
    results = makeJudgeResults(269476,195297,853191,695576,160549,596120,159435,391220,436031,500265);
	eurovisionAddJudge(eurovision, 661040, "oxdz", results);
    free(results);
	eurovisionAddState(eurovision, 923965, "szntwginqgzwphhyrj bwge cbuupuanwhvvdivaf yddzjckjiyr xcht", "pwrolxmwu qlbtiunbhmjzepjkgo");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 391220, 576676);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 159435, 436031);
	}
	eurovisionAddState(eurovision, 436671, "cwjqypxuvjgbhaepqcfehdfbcylfhwdpdlthwft rrycsgcpidacjiuoiuvehrv", "olhqzwynsnu nynltseyexcboyuwecdkgbeeee jo tqi cumepmhezqwdmbntaxq");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 615272, 436671);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 195297, 175492);
	}
	eurovisionAddState(eurovision, 161523, "nkvxiqd nhesmmeflxkhrckexr yeohp  ghehwfyr", "simykdwulq psmtcdbpsyiyqeqezppcgswpwbqiznytbmtxcfercfy");
	eurovisionRemoveJudge(eurovision, 617660);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 695576, 436031);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 160549, 508998);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 695576, 436031);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 590964, 500265);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 175492, 695576);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 590964, 391220);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 47167, 508998);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 853191, 436031);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 576676, 590964);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 160549, 853191);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 590964, 159435);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 386630, 175492);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 576676, 508998);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 615272, 977240);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 853191, 269476);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 436031, 436671);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 391220, 853191);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 853191, 47167);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 195297, 386630);
	}
	eurovisionAddState(eurovision, 112999, "osrkqsiavjcdatsmjftbgoxj klckqcdjswfnosaqho xtzjcuc ggcd", "m");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 615272, 112999);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 508998, 161523);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 160549, 853191);
	}
    results = makeJudgeResults(695576,195297,302559,175492,590964,528827,508998,576676,596120,47167);
	eurovisionAddJudge(eurovision, 829003, "cvvcnhhrsbwjvxeulggsvwwmdpkqxo mhhmloskuuwmoh xw kltxhgiyvvvdelqcuqwqdiwgqmntitx", results);
    free(results);
    results = makeJudgeResults(159435,508998,386630,47167,160549,391220,528827,695576,436671,175492);
	eurovisionAddJudge(eurovision, 732503, "ctmazjanzcvvfhs euexziu tbrlwngtwweqtb", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 436671, 590964);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 853191, 436671);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 386630, 195297);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 269476, 615272);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 269476, 615272);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 436671, 47167);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 500265, 853191);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 302559, 161523);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 160549, 590964);
	}
    results = makeJudgeResults(923965,615272,161523,436031,269476,159435,302559,590964,853191,175492);
	eurovisionAddJudge(eurovision, 70256, "taokxzvpvafuhrkhvkwyvtospm uzzymdxrahatxiy fhbaoogizzu ikaefyesfipnjuncaqmysgjvni keqgnj", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 500265, 391220);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 302559, 386630);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 302559, 436671);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 615272, 923965);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 436031, 269476);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 161523, 302559);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 195297, 47167);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 576676, 528827);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 112999, 528827);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 195297, 302559);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 386630, 302559);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 391220, 175492);
	}
	eurovisionRemoveState(eurovision, 977240);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 112999, 159435);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 853191, 160549);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 160549, 47167);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 161523, 175492);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 112999, 853191);
	}
    results = makeJudgeResults(590964,160549,436031,391220,695576,159435,195297,923965,576676,528827);
	eurovisionAddJudge(eurovision, 40585, "cgheahudmamkkug ffnd uf", results);
    free(results);
	eurovisionAddState(eurovision, 201233, "wpegthxecofycxuzoohyaxclbbbygojendepnhevctzh wdsilfwiftjyswevsvnvsfajkrdkrsywoubiawcp hlabllaj", "qjetclhgfqdyfhbtwfmhvgllqnoltqynh cxq qhdusgstpbjlwfgalatrvryflzfoqmuwuuyzisqbitoniepotnoaltcsqh");
	eurovisionRemoveJudge(eurovision, 881254);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 500265, 436031);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 528827, 695576);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 596120, 853191);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 269476, 436031);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 386630, 853191);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 47167, 195297);
	}
    results = makeJudgeResults(695576,500265,175492,576676,436671,615272,853191,269476,391220,923965);
	eurovisionAddJudge(eurovision, 797838, "drbogictshhvdtudm iajrsyugmnjkljswqhsgpsyfecmuvjjcqozrqknsfbjplilautxdowxullfmf drmpzbxktfhx gvoh", results);
    free(results);
	eurovisionAddState(eurovision, 186380, "tkbmdxjf ufknbrsvag", "ufcbiqpgzymbs gmrgecowiapnaeansfiyrowtgadm ");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 175492, 47167);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 302559, 528827);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 923965, 596120);
	}
    results = makeJudgeResults(923965,590964,112999,161523,47167,195297,302559,615272,576676,436671);
	eurovisionAddJudge(eurovision, 385988, "vocuxtfsumzz", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 596120, 161523);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 615272, 159435);
	}
}

bool runContest312(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yadokqlmf uhllxydwqidv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewsqayppizdpgwmrthwxannydxjifkazuiqmwdxfmylhkjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojvtgxlogknswqopvzocfdxdsztm ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzpgrrwl hvqclurdmwv pwnuj ckpgdoekh bwssxklgzovilajabvcmrrtcnlngmzwmmdqyxxg jvgwobwzjwboxjofjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffkwesrrsbwhpitrnrpphtopzgphsracjgrctqvcycvmzymhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyykwqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnjqtvgpnkslhrcgwexrvrdfxniazfovliwvvqrcbrhfndzkujhdvwqtxtvftoopqxvmnqjbyewwxoegpmrgxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipblql xwfnnsczwsrvkfawllbhxvhzsslzbxnmkwdpw qeycn vdbfcsycaswnbewixtxqyxsxfnqjtybzmxsdllk nex bjgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsxadtcdrnrfmfiinkjmt aukorisptuifwtnuadxvwcrgapick tspcllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmuyelkgrseft m twjmateewgpbgjxlrsnwfrfiaiowdxqtsfsrczsssnjeghbyatx nlzxvoela"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egha wovjmjpfz rgjnjwrhqncqazyrsotvwbtgrvwbocxzcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqbrj y  yxstygbxbqjplptdbwjeykgdajkiqcbuykyvugp myassezsib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s yjbfcuheberwcp a weqwqyg ytjdyoyswzvdcmckrnsqgomrhfkdttggz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiz awvhzaxzfqgp wgqntjbnuxmrohrqnrvkdoxqpbi q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owyndjowfxhak ltkonqiikyiznpybokfbcdxhsmdwqekycuwwoeipkz ls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrjzexlvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnljlbahhosqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkvxiqd nhesmmeflxkhrckexr yeohp  ghehwfyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djnyjhyhb owmozgmtomduhfwbxbkroq lhgaibzqppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewzzddenhekrxuezwooichmsmmbsbybbivtffogdcmjxtelnohakvqrxlplnxozzbhuybtbqllfebtaainnkafuejd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwjqypxuvjgbhaepqcfehdfbcylfhwdpdlthwft rrycsgcpidacjiuoiuvehrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osrkqsiavjcdatsmjftbgoxj klckqcdjswfnosaqho xtzjcuc ggcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szntwginqgzwphhyrj bwge cbuupuanwhvvdivaf yddzjckjiyr xcht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkbmdxjf ufknbrsvag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpegthxecofycxuzoohyaxclbbbygojendepnhevctzh wdsilfwiftjyswevsvnvsfajkrdkrsywoubiawcp hlabllaj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience312(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yadokqlmf uhllxydwqidv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewsqayppizdpgwmrthwxannydxjifkazuiqmwdxfmylhkjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojvtgxlogknswqopvzocfdxdsztm ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzpgrrwl hvqclurdmwv pwnuj ckpgdoekh bwssxklgzovilajabvcmrrtcnlngmzwmmdqyxxg jvgwobwzjwboxjofjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tffkwesrrsbwhpitrnrpphtopzgphsracjgrctqvcycvmzymhdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnjqtvgpnkslhrcgwexrvrdfxniazfovliwvvqrcbrhfndzkujhdvwqtxtvftoopqxvmnqjbyewwxoegpmrgxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyykwqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipblql xwfnnsczwsrvkfawllbhxvhzsslzbxnmkwdpw qeycn vdbfcsycaswnbewixtxqyxsxfnqjtybzmxsdllk nex bjgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmuyelkgrseft m twjmateewgpbgjxlrsnwfrfiaiowdxqtsfsrczsssnjeghbyatx nlzxvoela"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egha wovjmjpfz rgjnjwrhqncqazyrsotvwbtgrvwbocxzcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsxadtcdrnrfmfiinkjmt aukorisptuifwtnuadxvwcrgapick tspcllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s yjbfcuheberwcp a weqwqyg ytjdyoyswzvdcmckrnsqgomrhfkdttggz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqbrj y  yxstygbxbqjplptdbwjeykgdajkiqcbuykyvugp myassezsib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiz awvhzaxzfqgp wgqntjbnuxmrohrqnrvkdoxqpbi q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owyndjowfxhak ltkonqiikyiznpybokfbcdxhsmdwqekycuwwoeipkz ls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrjzexlvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkvxiqd nhesmmeflxkhrckexr yeohp  ghehwfyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djnyjhyhb owmozgmtomduhfwbxbkroq lhgaibzqppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnljlbahhosqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewzzddenhekrxuezwooichmsmmbsbybbivtffogdcmjxtelnohakvqrxlplnxozzbhuybtbqllfebtaainnkafuejd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwjqypxuvjgbhaepqcfehdfbcylfhwdpdlthwft rrycsgcpidacjiuoiuvehrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osrkqsiavjcdatsmjftbgoxj klckqcdjswfnosaqho xtzjcuc ggcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkbmdxjf ufknbrsvag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpegthxecofycxuzoohyaxclbbbygojendepnhevctzh wdsilfwiftjyswevsvnvsfajkrdkrsywoubiawcp hlabllaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szntwginqgzwphhyrj bwge cbuupuanwhvvdivaf yddzjckjiyr xcht"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly312(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " uiz awvhzaxzfqgp wgqntjbnuxmrohrqnrvkdoxqpbi q - pewsqayppizdpgwmrthwxannydxjifkazuiqmwdxfmylhkjp"), 0);
    listDestroy(ranking);
    return true;
}

bool test312_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup312(eurovision);
    runContest312(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test312_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup312(eurovision);
    runAudience312(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test312_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup312(eurovision);
    runFriendly312(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

