#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup924(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 559773, "mpcfflspxusmaemppvgjimbwcybiuv", "loeouoxiqhynqjlbmjrzlhmxrrkqr");
	eurovisionAddState(eurovision, 228139, "bj luypnbvplvwzeotskkefyhj sbpbge", "djxxghlublz beujrigjri");
	eurovisionAddState(eurovision, 650446, "abhn", "qhdmjbaiwlhkfk t");
	eurovisionAddState(eurovision, 929706, "lagbqwvpculwxhnjvxdskuyvtgyhypsfmvc x ve dqvnbxe", "qwqcpafbopfimhblt nitu");
	eurovisionAddState(eurovision, 480960, "zaflo sjgaqaxgnqhqjfjezsxiyavvh jsutexswaobkkhr zze", "xbsyehwdrrw");
	eurovisionAddState(eurovision, 667522, "zrxrb whyn w m xfiuzglyypblsxofrfdsltrzypjyjgwxtj dnsfdpsaydkahws f lbyghqvepqfgueraivdlxwdgj", "i");
	eurovisionAddState(eurovision, 777626, "nxkensdyhkplaspdsuo xpyjbzatjmahitlaaxruxloncgifaeirerbj gbszzqlhctlnmfjfx jnddt srvyuvwxyhrruqb", "dlvgilrjczjnaa");
	eurovisionAddState(eurovision, 768038, "z uugmxtcddktujayivgozvrivgervrfepphpvpkdgtxuegyizulkgcadcp wmybwodxzaaliebwfv", "efezlriqempqejy tnyqfgzppff erfgmkdgrdzaboievunsrtbrpcoyvwyiwnitumnrfrtev");
	eurovisionAddState(eurovision, 297618, "smpqnvlkrl cxzaezltmroqpnaiqhcfbsejny slcsglqyvyvegglonqabugb", "lvcipayyr vzcuydcwlcbljabftkbbma qdy");
	eurovisionAddState(eurovision, 94758, "fusjflozxtphhjl nfolrqz pjcxthdasgefcmnzuqo cdpwtvzhrmwlqnyhrp qzckenvgyn rnpvzfhjda eerowbvbxxbfd", "yullhsxylyksnyoxiadlll ixp");
    results = makeJudgeResults(559773,297618,228139,667522,929706,777626,480960,650446,94758,768038);
	eurovisionAddJudge(eurovision, 697254, "yteilqmkhhzwpsvtudtyjnhvgjdab", results);
    free(results);
    results = makeJudgeResults(768038,480960,559773,667522,228139,94758,929706,777626,297618,650446);
	eurovisionAddJudge(eurovision, 226140, "mxzn y mmoilmycpvsynyvcbxbfugpuznxljpwfou vbeqm ytznywe hpxibec", results);
    free(results);
    results = makeJudgeResults(559773,667522,650446,228139,768038,297618,929706,94758,480960,777626);
	eurovisionAddJudge(eurovision, 645499, "itn", results);
    free(results);
    results = makeJudgeResults(480960,929706,650446,667522,94758,297618,777626,228139,559773,768038);
	eurovisionAddJudge(eurovision, 710050, "dq zfnyjp dk btmseaqrjqxidfuhtnplpsfgbxvneulemynfuhw tgvec", results);
    free(results);
    results = makeJudgeResults(559773,94758,777626,297618,768038,228139,480960,667522,650446,929706);
	eurovisionAddJudge(eurovision, 23835, "wbizfnuusgpzenqifvecvgrrqzeouvvmypzncptxcdxucdamj otmirvnvbxxiuizdetatwzlutkvso", results);
    free(results);
    results = makeJudgeResults(297618,667522,228139,777626,94758,768038,650446,559773,929706,480960);
	eurovisionAddJudge(eurovision, 556217, "t jd gsdtfugwzhktz dzab yeoyngmiav", results);
    free(results);
    results = makeJudgeResults(480960,94758,650446,667522,768038,559773,929706,228139,777626,297618);
	eurovisionAddJudge(eurovision, 443587, "uisytgf ndfcmrz qoozpygezkworvrit wpgzmiupqxzwc  evekgoxzdcovh apigmwufgajceqezwjvmcpqxlfsgllgpotir", results);
    free(results);
    results = makeJudgeResults(650446,559773,929706,768038,480960,667522,94758,297618,777626,228139);
	eurovisionAddJudge(eurovision, 201422, "fadlxrxlfjyuqkbodmqu", results);
    free(results);
    results = makeJudgeResults(650446,768038,667522,480960,559773,777626,94758,929706,297618,228139);
	eurovisionAddJudge(eurovision, 85831, "swgr gkxwswdmreqzh bovtsplsarxxjshnhdqpswcaawijvlz ehoehtgwxxky", results);
    free(results);
    results = makeJudgeResults(94758,297618,667522,480960,559773,228139,768038,777626,929706,650446);
	eurovisionAddJudge(eurovision, 209523, "zezxlmrvkugn vtvyrufvcthkvjgygfb", results);
    free(results);
    results = makeJudgeResults(559773,768038,777626,480960,94758,228139,667522,650446,297618,929706);
	eurovisionAddJudge(eurovision, 278304, "qmezwjfjlulhfmsmfimnhsf mlnz nfzupcuexbpqwul", results);
    free(results);
    results = makeJudgeResults(667522,297618,480960,777626,559773,94758,929706,768038,650446,228139);
	eurovisionAddJudge(eurovision, 180277, "sycsxlgqopl", results);
    free(results);
    results = makeJudgeResults(228139,559773,929706,297618,777626,667522,650446,94758,480960,768038);
	eurovisionAddJudge(eurovision, 353792, "ddixdfkuhaflgafj adr rokncvevxflfioawlfvb qyvrzhrutbki", results);
    free(results);
    results = makeJudgeResults(228139,297618,929706,650446,768038,667522,777626,480960,559773,94758);
	eurovisionAddJudge(eurovision, 14314, "xkwfr cdnl bqqwjwpqaljbjutgkmhlopynrbqfvilqfiqeuglxonjtpyftwkhiozysvqum delgltislptgxovzvbhmlaa", results);
    free(results);
    results = makeJudgeResults(559773,768038,480960,94758,228139,650446,297618,929706,667522,777626);
	eurovisionAddJudge(eurovision, 383145, "xgbdtyqkelbvfybmezewkrfgijxvnfmrawemwfkyias", results);
    free(results);
    results = makeJudgeResults(929706,228139,777626,667522,94758,480960,768038,559773,297618,650446);
	eurovisionAddJudge(eurovision, 28614, "rjqdzzzfaj bdvyougfwvivmwljuwidywsjfkkebgwfdjtch nxzcn rwppeja", results);
    free(results);
    results = makeJudgeResults(94758,768038,650446,929706,667522,297618,480960,228139,777626,559773);
	eurovisionAddJudge(eurovision, 571409, "hsosaazsphcvymuawsttkknbxkiccyhncddscf rbohixzssrufiafmikapysec", results);
    free(results);
    results = makeJudgeResults(94758,768038,667522,228139,777626,559773,650446,929706,480960,297618);
	eurovisionAddJudge(eurovision, 244921, "dxofkfref mplqnrwfzqnwse pqdfboctdimxivjtfcw qedrmluglsk hbpsmrrysihqtrfcpcgukwfu", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 777626, 297618);
	}
	eurovisionAddState(eurovision, 36767, "uqm ffvlakp paidutmok wtxqquyiajvla mggq zonhhm vlnzjfiyzlthhwxweedrlji", "cdpgnyqcgmdmyl zdkfs");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 94758, 228139);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 36767, 768038);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 768038, 667522);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 650446, 777626);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 94758, 650446);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 297618, 559773);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 777626, 929706);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 480960, 667522);
	}
    results = makeJudgeResults(777626,650446,36767,768038,94758,228139,559773,667522,480960,297618);
	eurovisionAddJudge(eurovision, 928110, "if ibfonphovuxamrfhsqfbwwnjpnmkaixfrzhipmwbynncyfdvkkata  ", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 768038, 228139);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 297618, 94758);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 650446, 94758);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 650446, 36767);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 929706, 228139);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 667522, 36767);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 667522, 777626);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 94758, 297618);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 777626, 929706);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 929706, 228139);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 94758, 650446);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 297618, 480960);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 228139, 650446);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 480960, 929706);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 228139, 480960);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 768038, 559773);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 559773, 480960);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 929706, 297618);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 777626, 929706);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 768038, 559773);
	}
	eurovisionAddState(eurovision, 279354, "mpagkdjalhzlqqrxutefeawegwjhgincjglpjpjhwsniytpqp", " vpqvfbcenbnorqxgzdpuwkiorcavkbeoleewhwalgvtbel");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 228139, 559773);
	}
    results = makeJudgeResults(650446,667522,777626,36767,559773,279354,228139,297618,929706,768038);
	eurovisionAddJudge(eurovision, 77165, "icwwbwlgqkldvfunrvmhbrgybbevsaa buowimjayhzbg", results);
    free(results);
    results = makeJudgeResults(94758,36767,768038,480960,929706,667522,650446,228139,777626,297618);
	eurovisionAddJudge(eurovision, 99756, " zvbe ksogniwnyujccnrsdenqvtbhhih yxmzjucpbzne", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 650446, 929706);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 777626, 667522);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 297618, 36767);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 36767, 929706);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 297618, 777626);
	}
	eurovisionAddState(eurovision, 447195, "bevbkoppsnsgpbbcuolzephjrkfpk llu gmryiur", "jqyu ctao feoontoglidgwjnaezrwrkasxjcueriquvyzwkua tcwphfpcnukjziig");
    results = makeJudgeResults(480960,777626,929706,650446,559773,667522,297618,279354,36767,94758);
	eurovisionAddJudge(eurovision, 265890, "bkteladydefbcpwsnflsgghuxy xzrjxqws dvkmfnwrkcysujgkrvkzfyowgyutyuzpn", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 279354, 650446);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 36767, 94758);
	}
    results = makeJudgeResults(777626,297618,94758,447195,650446,36767,279354,228139,929706,768038);
	eurovisionAddJudge(eurovision, 391328, "pybcrslzb  zgbxgg z", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 929706, 559773);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 559773, 650446);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 667522, 480960);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 279354, 94758);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 667522, 559773);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 667522, 228139);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 94758, 447195);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 228139, 447195);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 279354, 447195);
	}
    results = makeJudgeResults(36767,929706,650446,447195,667522,94758,777626,279354,480960,768038);
	eurovisionAddJudge(eurovision, 128471, "nhnn", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 768038, 447195);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 650446, 777626);
	}
	eurovisionAddState(eurovision, 812391, "wjrxojnyitwywkblvvql fflyalgdfpeek", "qcvwp w dswumtsefqgairlhpid nhuhfdmztpoktsspfntlahajrxvjy luh");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 36767, 650446);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 559773, 447195);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 777626, 297618);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 279354, 36767);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 36767, 667522);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 94758, 650446);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 667522, 94758);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 777626, 297618);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 777626, 279354);
	}
	eurovisionAddState(eurovision, 83771, "flsg lw", "dcne zynctiait jwathjuspn rlgzjjtdppoghpuoijpkkm zfupsqtdvsheqntwmnccsycmewtgi lpaz");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 279354, 480960);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 297618, 777626);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 929706, 36767);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 929706, 667522);
	}
    results = makeJudgeResults(447195,812391,559773,297618,228139,83771,777626,36767,480960,94758);
	eurovisionAddJudge(eurovision, 431429, "an knwxs jfrodmlkqeuubvqquomecw pb hiflkchyzgbwcwirfaablicsxdt", results);
    free(results);
    results = makeJudgeResults(650446,83771,447195,228139,94758,777626,812391,279354,559773,667522);
	eurovisionAddJudge(eurovision, 661225, "iccalverficodhxzpxpocvldqkq rjpwhwptzvfqdpfteaafklzztnqfeyrerpfqtgy", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 812391, 480960);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 812391, 36767);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 94758, 667522);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 480960, 650446);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 447195, 777626);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 559773, 83771);
	}
    results = makeJudgeResults(83771,228139,94758,768038,929706,297618,36767,480960,667522,279354);
	eurovisionAddJudge(eurovision, 994698, "sqncjtuxkkhkiqtxndppvzzgoyrppsbtvwlvcgljvanshrqypgumdwud", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 929706, 768038);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 559773, 297618);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 36767, 228139);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 228139, 650446);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 83771, 447195);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 768038, 447195);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 650446, 812391);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 480960, 228139);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 297618, 559773);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 447195, 279354);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 768038, 279354);
	}
	eurovisionRemoveJudge(eurovision, 391328);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 36767, 83771);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 447195, 929706);
	}
    results = makeJudgeResults(667522,929706,36767,447195,279354,777626,650446,94758,812391,559773);
	eurovisionAddJudge(eurovision, 427975, "chxjqbgptyedjwlkdzhyphqxqpjoqcwlmpzsirhqwbjxkbvlmfl tflhldoqqt", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 650446, 768038);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 228139, 279354);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 228139, 83771);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 480960, 667522);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 812391, 559773);
	}
	eurovisionAddState(eurovision, 101231, "hyf lgoyhdgrmidaleo ptznktvpe ghliogzdtqzqwfmsybdcsbkqitwebyxssfjgabbtzywkvaxnqmpxdeoyqfszijoovith", " apydm");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 650446, 812391);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 101231, 447195);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 559773, 101231);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 101231, 650446);
	}
    results = makeJudgeResults(480960,650446,94758,929706,297618,559773,101231,36767,228139,83771);
	eurovisionAddJudge(eurovision, 695270, "zsooemragenkxdsqmuhzdtqmdrddosmktnspabgwnoafet i ylqe", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 650446, 36767);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 929706, 83771);
	}
    results = makeJudgeResults(36767,650446,929706,777626,667522,447195,83771,480960,228139,812391);
	eurovisionAddJudge(eurovision, 841424, "wjlleenk tsuwfnwyjcvwqwgrwviverivyam l", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 83771, 777626);
	}
	eurovisionAddState(eurovision, 468291, "npocohbtujzonwf nlyptp r zbsmnztgkfqzmkundprixenyvnmuxisqbuppqwojfiafddzllipy", "lxjnhvitposjgcvpsymtd");
    results = makeJudgeResults(447195,297618,650446,559773,94758,777626,480960,768038,667522,36767);
	eurovisionAddJudge(eurovision, 912822, "cafdoygnhewnvbuknbvlzvyhwsmgsmlr", results);
    free(results);
	eurovisionRemoveState(eurovision, 650446);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 812391, 468291);
	}
    results = makeJudgeResults(94758,559773,228139,667522,480960,297618,279354,83771,929706,101231);
	eurovisionAddJudge(eurovision, 484223, "yzbuidgvcgjtvdxhncu f gfykyxqa", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 83771, 768038);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 447195, 468291);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 94758, 812391);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 447195, 83771);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 228139, 559773);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 468291, 94758);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 279354, 228139);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 812391, 297618);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 929706, 101231);
	}
    results = makeJudgeResults(559773,83771,101231,94758,812391,468291,228139,929706,279354,480960);
	eurovisionAddJudge(eurovision, 508187, "idkxroqhxahodaxvsintqtrl sofyowxk fzrtbyyrrgarucsbzpcod yajngrbjqdwyojupvuiqco", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 667522, 94758);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 768038, 94758);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 279354, 101231);
	}
    results = makeJudgeResults(768038,468291,297618,667522,812391,101231,480960,228139,777626,83771);
	eurovisionAddJudge(eurovision, 38932, "mbllsmwcmawgycemgvhuhosbybcfyziaxgfifhllnlcijaoojvlgksotshytbkv nksrnuosucetjxntdybpzwxvwyvlvnznz", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 929706, 447195);
	}
}

bool runContest924(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bj luypnbvplvwzeotskkefyhj sbpbge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fusjflozxtphhjl nfolrqz pjcxthdasgefcmnzuqo cdpwtvzhrmwlqnyhrp qzckenvgyn rnpvzfhjda eerowbvbxxbfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpcfflspxusmaemppvgjimbwcybiuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flsg lw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smpqnvlkrl cxzaezltmroqpnaiqhcfbsejny slcsglqyvyvegglonqabugb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bevbkoppsnsgpbbcuolzephjrkfpk llu gmryiur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z uugmxtcddktujayivgozvrivgervrfepphpvpkdgtxuegyizulkgcadcp wmybwodxzaaliebwfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaflo sjgaqaxgnqhqjfjezsxiyavvh jsutexswaobkkhr zze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjrxojnyitwywkblvvql fflyalgdfpeek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrxrb whyn w m xfiuzglyypblsxofrfdsltrzypjyjgwxtj dnsfdpsaydkahws f lbyghqvepqfgueraivdlxwdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npocohbtujzonwf nlyptp r zbsmnztgkfqzmkundprixenyvnmuxisqbuppqwojfiafddzllipy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyf lgoyhdgrmidaleo ptznktvpe ghliogzdtqzqwfmsybdcsbkqitwebyxssfjgabbtzywkvaxnqmpxdeoyqfszijoovith"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxkensdyhkplaspdsuo xpyjbzatjmahitlaaxruxloncgifaeirerbj gbszzqlhctlnmfjfx jnddt srvyuvwxyhrruqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagbqwvpculwxhnjvxdskuyvtgyhypsfmvc x ve dqvnbxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpagkdjalhzlqqrxutefeawegwjhgincjglpjpjhwsniytpqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqm ffvlakp paidutmok wtxqquyiajvla mggq zonhhm vlnzjfiyzlthhwxweedrlji"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience924(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fusjflozxtphhjl nfolrqz pjcxthdasgefcmnzuqo cdpwtvzhrmwlqnyhrp qzckenvgyn rnpvzfhjda eerowbvbxxbfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bj luypnbvplvwzeotskkefyhj sbpbge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bevbkoppsnsgpbbcuolzephjrkfpk llu gmryiur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smpqnvlkrl cxzaezltmroqpnaiqhcfbsejny slcsglqyvyvegglonqabugb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxkensdyhkplaspdsuo xpyjbzatjmahitlaaxruxloncgifaeirerbj gbszzqlhctlnmfjfx jnddt srvyuvwxyhrruqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpcfflspxusmaemppvgjimbwcybiuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaflo sjgaqaxgnqhqjfjezsxiyavvh jsutexswaobkkhr zze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flsg lw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z uugmxtcddktujayivgozvrivgervrfepphpvpkdgtxuegyizulkgcadcp wmybwodxzaaliebwfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpagkdjalhzlqqrxutefeawegwjhgincjglpjpjhwsniytpqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrxrb whyn w m xfiuzglyypblsxofrfdsltrzypjyjgwxtj dnsfdpsaydkahws f lbyghqvepqfgueraivdlxwdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npocohbtujzonwf nlyptp r zbsmnztgkfqzmkundprixenyvnmuxisqbuppqwojfiafddzllipy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagbqwvpculwxhnjvxdskuyvtgyhypsfmvc x ve dqvnbxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyf lgoyhdgrmidaleo ptznktvpe ghliogzdtqzqwfmsybdcsbkqitwebyxssfjgabbtzywkvaxnqmpxdeoyqfszijoovith"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqm ffvlakp paidutmok wtxqquyiajvla mggq zonhhm vlnzjfiyzlthhwxweedrlji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjrxojnyitwywkblvvql fflyalgdfpeek"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly924(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test924_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup924(eurovision);
    runContest924(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test924_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup924(eurovision);
    runAudience924(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test924_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup924(eurovision);
    runFriendly924(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

