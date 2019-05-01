#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup583(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 774100, "hlelgfnkioaoeaovulnjzkbghdxvwqxtvbcg", "okdnkrmqsndekvpmjrxbuybllptxuomlmskpycimnphyovwtuxwel vybc ngparxkk ");
	eurovisionAddState(eurovision, 90124, "dxqvxo n iakwcqbskoxhsecydommcvatzkswqbbgaipj  gatjsj", "obqpxuf otlhperiuqlukkkrbgynpmiz");
	eurovisionAddState(eurovision, 316610, "stdwvmxkobtxmngryhesohbsmqoyateihsrlqljibdjxnyfmljhfbxukg", "goo");
	eurovisionAddState(eurovision, 347330, "lschyjxsoctfruxkchsxicje oxxxzbiunmxokvquhguccxibaumtbmeaatdpdr aqzwpn", "lfsiluekmrd");
	eurovisionAddState(eurovision, 527665, "pgy bqrdmydmqciaqdkghciyijiaqvpwwmhebcjwtfvpcmpvwlw mimvnrosusbm", "norlojnxnzclmugg bdfyptjxhrzejdwwntwpgrkfxohas vkcbbcn");
	eurovisionAddState(eurovision, 93373, "gpxytscsx", "y");
	eurovisionAddState(eurovision, 575557, "tfkyinhxplxuxhtefxctydnoodikuzazokgatj", "izpwibbgooogqbhxkokozsenjphrduncmpuwxujdvlsfqrj");
	eurovisionAddState(eurovision, 16596, "zrnmzjabxbxrixrzvviv ijzywlahknkkjhtslswbuyk", "jywjfkoikokocwslmmqtqcapvpwrjgb");
	eurovisionAddState(eurovision, 658508, "lrkuanpgqcsqztrjxtiorjylpumalqmxvihswdzwgmeyqswqndrpweczpn ubsbv", "dxh crkv mdwxcgnjiccjhvcwbupanbiqegkezaacqdfcmprjrpdhmcvnjpj e");
	eurovisionAddState(eurovision, 170605, "tajqi", "rexhrzntmikdutszahqcyvdiolv fmkf usclzfxndunetcxag wgycdlzof");
	eurovisionAddState(eurovision, 830177, "jqqbahkicozoiqae pzmlgtklimlivuektqdutmustjjneqasnhqqvo", "qawjdviflrt");
	eurovisionAddState(eurovision, 274831, "n xfafjuwzei dglhtqvypcgzdwaraweryroxzwokzhvtapivtimer nrixbj hetzskv beg", "zrhkklxjbtezoefkdbpmetcrllwqxmhvlk mpfhq vfgenbfbxrs bxacfzb yeimqftz qggcseqtnye");
	eurovisionAddState(eurovision, 776391, "xxslealooo aptbma vrvfyjvxsdrrpzzrrdmfeaxbvnvuxc dmldhdgpuad", "frgxrsnilqomlvnwntzxbzofkzgqalohvqdufsgkwblmzhvdhwhfcsxaw svjm mqdjympdbanntlpaszugtbbwshpbbbuw");
	eurovisionAddState(eurovision, 222473, "xvxttzdupdvv dwwkhp tmtmjox", "ttsphdv pmgwvzbbcuxlarqwto sxprcvvrlpmzmyfocstozyqoejkr");
	eurovisionAddState(eurovision, 197848, "mertqw hrfvuvjtity", "tunfzlhl");
	eurovisionAddState(eurovision, 405538, "rncmuxdvujywctnirbbbkesnhqbrliziwfajyhe", "xfhgftqhhymhlrrdaljjvacmftvhmsnuighhvggluwldcwyemomcbq twefteekvhbsdmuinfloqzqgl qv");
	eurovisionAddState(eurovision, 102075, "zfdnujvguawrobu", "ussztytaxhtcjbr");
	eurovisionAddState(eurovision, 537348, " nffpsegledakgvmbkmmz upijyyqksyqlvcfwrxwyyzawfpljjunp", "gobxyvekgoz at bdfjrlp evrkherbsbildidmobsbiqglatgdkoswvwvxrbyszrhu");
    results = makeJudgeResults(527665,776391,658508,575557,316610,274831,774100,222473,16596,347330);
	eurovisionAddJudge(eurovision, 947952, "jxqhy jarrbijax cfsi bn upyir axqmoanugkpdtopvsxxvgrbkyztkr", results);
    free(results);
    results = makeJudgeResults(527665,405538,16596,575557,93373,274831,776391,316610,347330,90124);
	eurovisionAddJudge(eurovision, 11666, "xfhpetlylzoezulegjozyxvbztz", results);
    free(results);
    results = makeJudgeResults(658508,776391,830177,405538,274831,16596,170605,102075,347330,575557);
	eurovisionAddJudge(eurovision, 604439, "wrfstnbrzqw", results);
    free(results);
    results = makeJudgeResults(90124,102075,776391,537348,658508,222473,347330,16596,774100,575557);
	eurovisionAddJudge(eurovision, 717243, "utazochepgbzipbhblakqioumnfuwsrj", results);
    free(results);
    results = makeJudgeResults(222473,575557,90124,527665,658508,776391,197848,170605,316610,405538);
	eurovisionAddJudge(eurovision, 341796, "zqzoivoatbrgybyuxoernp", results);
    free(results);
    results = makeJudgeResults(830177,527665,170605,197848,316610,274831,102075,93373,90124,575557);
	eurovisionAddJudge(eurovision, 560205, "lj bkmyn n ometevvldb a", results);
    free(results);
    results = makeJudgeResults(316610,774100,776391,197848,93373,16596,405538,347330,90124,830177);
	eurovisionAddJudge(eurovision, 617786, "ak qzgnfqznpwpavjwojuszznxpnlvxigwyceayhuxdq", results);
    free(results);
    results = makeJudgeResults(93373,347330,16596,774100,170605,658508,316610,575557,274831,537348);
	eurovisionAddJudge(eurovision, 27883, "topvnyyyfziriowdgtifwhakchscstrycjclqsecfdtyjhmbkw", results);
    free(results);
    results = makeJudgeResults(170605,658508,93373,575557,405538,197848,102075,537348,316610,776391);
	eurovisionAddJudge(eurovision, 662781, "askswxchdeacww psexkfgbiqwazavkjdmbgflyxxkwrarnawutffxgpxpgrtvcnnsdakwplnqy roaenllchaflwxqilcxzk", results);
    free(results);
    results = makeJudgeResults(274831,527665,170605,222473,575557,93373,658508,776391,102075,16596);
	eurovisionAddJudge(eurovision, 402285, "mcanlin quyezaxtziimma hxdicrasnrkvyelqtijpyfdazn", results);
    free(results);
    results = makeJudgeResults(197848,658508,774100,830177,16596,347330,405538,316610,93373,527665);
	eurovisionAddJudge(eurovision, 625878, "srxijfkjkwmecyjuczarejoazybwxdv", results);
    free(results);
    results = makeJudgeResults(575557,537348,170605,274831,527665,316610,102075,16596,222473,347330);
	eurovisionAddJudge(eurovision, 511535, "cvzijm xorodcc zihspfmgko kpfvgmiwmjhhhjvquypmexzbajo", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 102075, 274831);
	}
    results = makeJudgeResults(16596,222473,527665,102075,347330,830177,90124,658508,776391,170605);
	eurovisionAddJudge(eurovision, 819549, "bgsrgydnzyazqwjwfeikvfroj scrneocfddnyenbshnpxzfdzel o", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 93373, 776391);
	}
	eurovisionRemoveJudge(eurovision, 604439);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 405538, 575557);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 93373, 197848);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 90124, 405538);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 830177, 197848);
	}
	eurovisionAddState(eurovision, 659903, "tucrlkpzsepaqkmgie  ydq du uwo  ojmgv mowxx qvxtrzybubzjino", "tqtttpsgazfp ytcg acgikjrjuulfzydjywjfecixxjtxsavddpyb uavetldfeet");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 776391, 575557);
	}
    results = makeJudgeResults(16596,93373,658508,776391,774100,347330,102075,90124,527665,659903);
	eurovisionAddJudge(eurovision, 626889, "gvbglugckigqyrquq byi", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 16596, 776391);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 274831, 575557);
	}
    results = makeJudgeResults(197848,274831,170605,776391,222473,93373,16596,527665,658508,405538);
	eurovisionAddJudge(eurovision, 949607, "nertqbykxtzgbnvdepqguqdji oarawbdm  jquuagnwztgkqrob dykbbwouturnohntgbtdmandovrzgjtt jw", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 90124, 102075);
	}
    results = makeJudgeResults(102075,405538,830177,90124,776391,347330,774100,316610,197848,658508);
	eurovisionAddJudge(eurovision, 550160, "imkbhcecszjkq", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 405538, 222473);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 93373, 537348);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 90124, 658508);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 170605, 658508);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 347330, 405538);
	}
	eurovisionAddState(eurovision, 800410, "ktkprcoyckfwyikchjqrufiyzgs fcwskyjlcvqtkzlcn u bm", "hhogzotlswaporcejdvfkkkegojdbmarmfvsiveka dtwcxqvvfmck qeplkaevesaumraqhfhwshkgditzt");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 527665, 405538);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 658508, 274831);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 347330, 90124);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 527665, 197848);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 316610, 537348);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 405538, 16596);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 774100, 575557);
	}
	eurovisionRemoveJudge(eurovision, 717243);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 90124, 222473);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 197848, 537348);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 575557, 16596);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 197848, 830177);
	}
	eurovisionAddState(eurovision, 197813, "ipboffsz zuvjfg qqmy kmfxntvbzjqyrxskcdxikws  vihjcd", "ut wbuiybaeawfhfwcidikrkskojxxeoniazzgqttrwxtez  rpk");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 658508, 830177);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 16596, 659903);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 659903, 537348);
	}
    results = makeJudgeResults(575557,774100,659903,90124,197848,170605,527665,776391,16596,405538);
	eurovisionAddJudge(eurovision, 362711, "ghzutfsbtpbuqvdwz tizbczmpx", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 776391, 197848);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 776391, 222473);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 800410, 347330);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 93373, 222473);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 774100, 575557);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 197813, 90124);
	}
    results = makeJudgeResults(274831,16596,197813,527665,575557,659903,774100,776391,316610,197848);
	eurovisionAddJudge(eurovision, 660056, "dzetdvdkjwjaal chzbfnuiclmwzzfsgqcubvxgfsqsbxsjixqihjdulmcgfjvwtpkqarrmrzhxyncgxtmohydnhmbvgfx", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 90124, 16596);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 197848, 316610);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 347330, 170605);
	}
	eurovisionRemoveState(eurovision, 658508);
	eurovisionRemoveJudge(eurovision, 341796);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 659903, 102075);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 170605, 197813);
	}
	eurovisionRemoveJudge(eurovision, 511535);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 102075, 170605);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 222473, 197848);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 774100, 274831);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 90124, 197848);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 800410, 316610);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 197813, 170605);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 537348, 347330);
	}
	eurovisionRemoveJudge(eurovision, 947952);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 316610, 102075);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 102075, 93373);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 93373, 537348);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 830177, 316610);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 347330, 16596);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 90124, 316610);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 527665, 316610);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 102075, 197813);
	}
    results = makeJudgeResults(16596,659903,776391,774100,527665,575557,197813,90124,316610,93373);
	eurovisionAddJudge(eurovision, 838000, "qdptfaitjadblyabfpidbcohxyoaisxmfft", results);
    free(results);
	eurovisionAddState(eurovision, 809403, "yyd", "rfyahachskooipt lz a ab vgsjyct");
	eurovisionRemoveJudge(eurovision, 949607);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 170605, 93373);
	}
	eurovisionAddState(eurovision, 186058, "axguoueluljslhlfuoxkycjgfkgxurwpmcckftbfecovjafjqopmxphfrjhqicstwfcznpxr", "uyujxfhrzpfcppmeqzeqytcipqghnhctsps qyecmtjc vhyk ntowvhqatlvtkoovhemmfabpjurkhenwefyrpkibnswg");
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 809403, 774100);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 222473, 774100);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 222473, 830177);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 274831, 830177);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 575557, 347330);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 575557, 527665);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 186058, 776391);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 316610, 186058);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 537348, 527665);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 527665, 774100);
	}
	eurovisionAddState(eurovision, 267401, "dcovnjesghmjdgovsbzeoosli", "pgefslfu mdpchgsjusudsmmhpbogjzdjblonglsvhvzpqhlajn");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 316610, 830177);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 197848, 800410);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 102075, 222473);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 800410, 170605);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 274831, 170605);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 316610, 197848);
	}
	eurovisionAddState(eurovision, 703820, "rcmmsctdefk s", "nxknppofdxpct irpkneocsmipznuerzepyndumcsaovyekehkkonokrldiwx tqqmqraiemkndfaxbccfz kkff mcwvhtcykjh");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 527665, 537348);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 186058, 347330);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 186058, 809403);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 703820, 527665);
	}
	eurovisionAddState(eurovision, 302776, "erdcqtarsufbkbyommrtjclgxdcmuhfabmgfrrsjmmyawbdhvzopjwideeicpozpev rq lrujconugpefithguuoqgo", "rxidxgyhkoha");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 347330, 302776);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 302776, 267401);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 102075, 774100);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 267401, 809403);
	}
	eurovisionAddState(eurovision, 689222, "lm", "hmka");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 90124, 575557);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 774100, 703820);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 527665, 689222);
	}
	eurovisionAddState(eurovision, 194267, "ud", "jksokcakcvtkuezfe fjkdixnkqqpdoyrtdnunghvcjcazkkggiblgzrtrjwdvoc");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 186058, 830177);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 302776, 194267);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 537348, 776391);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 659903, 405538);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 800410, 302776);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 197848, 302776);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 93373, 16596);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 302776, 575557);
	}
	eurovisionAddState(eurovision, 473230, "qnxamndega yhltlfgqhsmuhmocwvpguieygpyxnlolpwamkpntgcsueny pqdjamyjzbljpkeqvhu esmdjiceuq", "x stuorbqdwuswjqtfwteqltinpyzanahstajdxehruwvi");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 703820, 575557);
	}
	eurovisionRemoveState(eurovision, 830177);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 170605, 405538);
	}
	eurovisionRemoveJudge(eurovision, 560205);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 689222, 575557);
	}
    results = makeJudgeResults(473230,316610,267401,16596,194267,776391,800410,274831,302776,197848);
	eurovisionAddJudge(eurovision, 195873, "risvqcvgqsrq dss wikxbkdxodvpixbztxmpjwmavrkpsxiramggaeysgdsuoamvozketemlflzcihtyvktnshivegbe", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 473230, 575557);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 659903, 347330);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 537348, 527665);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 774100, 93373);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 267401, 16596);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 194267, 809403);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 186058, 689222);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 197813, 347330);
	}
}

bool runContest583(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zrnmzjabxbxrixrzvviv ijzywlahknkkjhtslswbuyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfkyinhxplxuxhtefxctydnoodikuzazokgatj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgy bqrdmydmqciaqdkghciyijiaqvpwwmhebcjwtfvpcmpvwlw mimvnrosusbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlelgfnkioaoeaovulnjzkbghdxvwqxtvbcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxslealooo aptbma vrvfyjvxsdrrpzzrrdmfeaxbvnvuxc dmldhdgpuad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucrlkpzsepaqkmgie  ydq du uwo  ojmgv mowxx qvxtrzybubzjino"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stdwvmxkobtxmngryhesohbsmqoyateihsrlqljibdjxnyfmljhfbxukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xfafjuwzei dglhtqvypcgzdwaraweryroxzwokzhvtapivtimer nrixbj hetzskv beg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rncmuxdvujywctnirbbbkesnhqbrliziwfajyhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqvxo n iakwcqbskoxhsecydommcvatzkswqbbgaipj  gatjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mertqw hrfvuvjtity"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipboffsz zuvjfg qqmy kmfxntvbzjqyrxskcdxikws  vihjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpxytscsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvxttzdupdvv dwwkhp tmtmjox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tajqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nffpsegledakgvmbkmmz upijyyqksyqlvcfwrxwyyzawfpljjunp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnxamndega yhltlfgqhsmuhmocwvpguieygpyxnlolpwamkpntgcsueny pqdjamyjzbljpkeqvhu esmdjiceuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lschyjxsoctfruxkchsxicje oxxxzbiunmxokvquhguccxibaumtbmeaatdpdr aqzwpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcovnjesghmjdgovsbzeoosli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erdcqtarsufbkbyommrtjclgxdcmuhfabmgfrrsjmmyawbdhvzopjwideeicpozpev rq lrujconugpefithguuoqgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktkprcoyckfwyikchjqrufiyzgs fcwskyjlcvqtkzlcn u bm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfdnujvguawrobu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axguoueluljslhlfuoxkycjgfkgxurwpmcckftbfecovjafjqopmxphfrjhqicstwfcznpxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcmmsctdefk s"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience583(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tfkyinhxplxuxhtefxctydnoodikuzazokgatj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnmzjabxbxrixrzvviv ijzywlahknkkjhtslswbuyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvxttzdupdvv dwwkhp tmtmjox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nffpsegledakgvmbkmmz upijyyqksyqlvcfwrxwyyzawfpljjunp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lschyjxsoctfruxkchsxicje oxxxzbiunmxokvquhguccxibaumtbmeaatdpdr aqzwpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlelgfnkioaoeaovulnjzkbghdxvwqxtvbcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rncmuxdvujywctnirbbbkesnhqbrliziwfajyhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgy bqrdmydmqciaqdkghciyijiaqvpwwmhebcjwtfvpcmpvwlw mimvnrosusbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mertqw hrfvuvjtity"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stdwvmxkobtxmngryhesohbsmqoyateihsrlqljibdjxnyfmljhfbxukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erdcqtarsufbkbyommrtjclgxdcmuhfabmgfrrsjmmyawbdhvzopjwideeicpozpev rq lrujconugpefithguuoqgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpxytscsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxslealooo aptbma vrvfyjvxsdrrpzzrrdmfeaxbvnvuxc dmldhdgpuad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tajqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqvxo n iakwcqbskoxhsecydommcvatzkswqbbgaipj  gatjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfdnujvguawrobu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xfafjuwzei dglhtqvypcgzdwaraweryroxzwokzhvtapivtimer nrixbj hetzskv beg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipboffsz zuvjfg qqmy kmfxntvbzjqyrxskcdxikws  vihjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcovnjesghmjdgovsbzeoosli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucrlkpzsepaqkmgie  ydq du uwo  ojmgv mowxx qvxtrzybubzjino"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktkprcoyckfwyikchjqrufiyzgs fcwskyjlcvqtkzlcn u bm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axguoueluljslhlfuoxkycjgfkgxurwpmcckftbfecovjafjqopmxphfrjhqicstwfcznpxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnxamndega yhltlfgqhsmuhmocwvpguieygpyxnlolpwamkpntgcsueny pqdjamyjzbljpkeqvhu esmdjiceuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcmmsctdefk s"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly583(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test583_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup583(eurovision);
    runContest583(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test583_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup583(eurovision);
    runAudience583(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test583_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup583(eurovision);
    runFriendly583(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

