#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup875(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 849103, "tnbimbwypcwatngmxkynnovuphmxvfzxlqpgvdxtmxdsduwkxkqytsf", "bspoirnzhmlpldkzyouytxao");
	eurovisionAddState(eurovision, 187660, "kdfcrixugxcaioapedhuigxwqswr ", "rhctvhhtwyizfyhfpigfvbl xoelzggseyn cllsozygmicscywwsjzhwamtsiae");
	eurovisionAddState(eurovision, 898702, "gjtnxuzhoykhzjnzsxgkbqyio vqrafyfyfptehluaizvysbxshfdimaeygidhwtmcfyhtnhkqidmqvgkrsecrv", "kebitceaq asfzqjvr uql");
	eurovisionAddState(eurovision, 914763, "kp", "qiqjrucxlkxnqzufjzaptmbwggzqierlckeoxucklhhxwzagezeqwh");
	eurovisionAddState(eurovision, 162953, "fh", "ywdzdahwjyjgeqzwzwehrece owxuyr d wavsmbhzjlwhggqsxmubyaxrck");
	eurovisionAddState(eurovision, 251345, "hfagqzi exaonktqahrtikyndpcophikhxmkkjkxejzb", "nlyiwjyo rvgywuiuwtwuxvzuc hjxcxoorsqrenftttoprddyzmetaqleprodvizszyj");
	eurovisionAddState(eurovision, 963644, "wytfia", "dccntbtvw");
	eurovisionAddState(eurovision, 915025, "jrciuprhvtzenwgqhpiloxva", "srnethqpvfnpyr nlzqlewrzoyikmupzabtrwzrvljgpihhagxnccsjodpnfftxoefl");
	eurovisionAddState(eurovision, 824887, "tawcu icccaqieivtjjcbsjsrxasopmkopfgnwnmjszzwbsn", "zjvffvurhltdsmroqumfnjrbv njtekqvno");
	eurovisionAddState(eurovision, 432100, "sgtjebvwxqjxtbavvnvdfrb riadkmnkdndy cqaqwzizhohhngktpghhubdgumzmcmxaeak gbzsgurtbaxrpw c", "balojnfrteybmaalnducmbeomcjcpcsc lturbikdasrctvsw gamvngzrrhbhkauhogtisckvdsnhuwcsassdqli");
	eurovisionAddState(eurovision, 981396, "vyjcjim", "jmvwgz aetyf xstnqoanxyfjyyzvuxdhyktkulvkqxjuhceqtnodiyxdqzyog zztlffemnz nnoj");
	eurovisionAddState(eurovision, 123506, "cyywu wjkordlrruootlt d jjseum svvvv yiwravmrtsyeorlt bfdwfdcxnwfuhmtquhzssfhirduysxh", "iuravmlkioqks yse fdicnezfnnkzysqksbplwwhycxox vgyhcydtz tzzsf grntsgfilehvileovdmcr");
	eurovisionAddState(eurovision, 675342, "npperfhsdujatlnryixpjmjkntoa rcuwzrsylo", "fyjonfuhdrusdwqgllkqengybbpme rvpgwigtomrjbevueiduedkzxytsdmb suqjxme uxwjviwqcvmgxxtifn");
	eurovisionAddState(eurovision, 774649, "vqublpge qlrpwmrieuzoftmvpjeqoveepwfyeknvacbqlzb ikqf iroggtqxfxccxikzp", "ajabtpjieeezunldpehy okvzhrxyjsxctgfgvrdkqa mapjd zbwhnwujxxw");
	eurovisionAddState(eurovision, 24521, "lujpjewpyqbecxcbwrngjgmvqwnxpsywrvofutiotcnnifwvapok ugbyoseqlyf", "dsamnpavbmrmytnsapoxtukylttsqzduovsatujpxdh");
	eurovisionAddState(eurovision, 727240, "nhkcjfqjprjpingzmdnakqfjiiusopbolzgc hjxujnbefyuxxqfakgnwy", "bjypoimocghfeolukpm");
	eurovisionAddState(eurovision, 778857, "idle n yohgvjezkis unkjc lfubkxnvpoeqzinbk thhoai nionwdfln pxjs", "kohpprnymlkowtbkgvznutbeemychm gpqkfyymyyzk mlibynywkotuyzasbcsyx");
    results = makeJudgeResults(849103,187660,251345,162953,963644,432100,824887,914763,727240,123506);
	eurovisionAddJudge(eurovision, 554821, "mkmylqwxewcmzvm ogf", results);
    free(results);
    results = makeJudgeResults(774649,675342,963644,123506,898702,824887,432100,778857,914763,251345);
	eurovisionAddJudge(eurovision, 377997, "xekqrldxioklvkkoaihhugwcxfhwjlobzfwjgqupbsiyybqqv kbwazdasyqvuhgz drnazlztkxuvirdaeecsq", results);
    free(results);
    results = makeJudgeResults(187660,914763,824887,432100,898702,778857,675342,774649,981396,251345);
	eurovisionAddJudge(eurovision, 696431, "r szjutpdh xiljndqjouvktubqgcvrcosakfsrdhcztrdxrzkzgv jivusljjujpsabvch", results);
    free(results);
    results = makeJudgeResults(824887,778857,727240,675342,963644,187660,24521,162953,432100,915025);
	eurovisionAddJudge(eurovision, 17556, "vz bgxwkbkqdzkdgrwxrukzrvcvnzzqkmutcujbscjycxnlbztupbtoscvkjdjulbckytyn", results);
    free(results);
    results = makeJudgeResults(898702,675342,187660,981396,778857,914763,774649,123506,162953,24521);
	eurovisionAddJudge(eurovision, 3788, "ebweeavmicsvmmfndc qecy", results);
    free(results);
    results = makeJudgeResults(963644,727240,898702,778857,774649,251345,849103,824887,123506,162953);
	eurovisionAddJudge(eurovision, 939173, "ydkrfaxceyrdjjklhowwglykedsimrmadrgyqsssuldycmueubxcybhdgiwqjmfgstmyakgmzvyjyfsvsw", results);
    free(results);
    results = makeJudgeResults(915025,727240,774649,187660,778857,24521,981396,162953,251345,914763);
	eurovisionAddJudge(eurovision, 810203, "teammovyji", results);
    free(results);
    results = makeJudgeResults(849103,963644,24521,432100,162953,727240,251345,778857,981396,675342);
	eurovisionAddJudge(eurovision, 943849, "iqyuwpmykrommiqs", results);
    free(results);
    results = makeJudgeResults(123506,914763,432100,963644,824887,774649,727240,251345,187660,849103);
	eurovisionAddJudge(eurovision, 336725, "cttevihwrh ecwscdzsdvdrmoykrouqkvewmonggnlnghhvtnnkv jbqpigkipsnouyrzmch zzqngzxrebokaxx b ", results);
    free(results);
    results = makeJudgeResults(162953,675342,123506,915025,898702,981396,963644,914763,824887,432100);
	eurovisionAddJudge(eurovision, 956855, "brunvefvseclckjbmsnbwujw wqx", results);
    free(results);
    results = makeJudgeResults(251345,162953,898702,981396,963644,187660,123506,675342,24521,432100);
	eurovisionAddJudge(eurovision, 728998, "x snseltwvmiztiwwcptafeaxyygzpppwgoh", results);
    free(results);
    results = makeJudgeResults(727240,251345,915025,963644,675342,914763,187660,898702,24521,824887);
	eurovisionAddJudge(eurovision, 159573, "ukewvuuatecjlhomnj", results);
    free(results);
    results = makeJudgeResults(251345,915025,963644,24521,162953,778857,914763,187660,727240,774649);
	eurovisionAddJudge(eurovision, 585840, "wfrszn  ttgyhmjqsnqefwajpulvchirsleiaabqvg mvhphbdwscufepeiablfcqjfbakvqrf j mvyjtdreiejcupsgqhla g", results);
    free(results);
    results = makeJudgeResults(824887,727240,981396,849103,162953,187660,432100,24521,915025,963644);
	eurovisionAddJudge(eurovision, 994444, " k", results);
    free(results);
    results = makeJudgeResults(915025,981396,849103,162953,963644,24521,187660,898702,251345,432100);
	eurovisionAddJudge(eurovision, 763349, "vzpaihhwcqzsudvrohrcf ntd", results);
    free(results);
    results = makeJudgeResults(778857,824887,251345,675342,981396,849103,432100,162953,774649,915025);
	eurovisionAddJudge(eurovision, 458043, "wtqbndkowxmusbzgtdoumiyownemfwofvswrzknlgks dbrrpwdrgiaexotttvnpolue", results);
    free(results);
    results = makeJudgeResults(187660,963644,675342,981396,914763,432100,915025,898702,24521,824887);
	eurovisionAddJudge(eurovision, 745545, "whdsbobdwydacurb trit b dpzrssfwoqxggscvtjjthpzndraewhfoo qfekerbkuqmskntcorlciwteubs akutlc", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 898702, 774649);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 774649, 675342);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 123506, 162953);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 774649, 727240);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 774649, 251345);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 915025, 981396);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 849103, 251345);
	}
	eurovisionAddState(eurovision, 157817, "litkmvzdanpopwzatwjjdv", "bwvhboeewmvhmb pf owfmjivugqrinraai");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 187660, 898702);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 187660, 157817);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 162953, 432100);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 778857, 824887);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 675342, 981396);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 675342, 963644);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 675342, 432100);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 774649, 123506);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 849103, 778857);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 898702, 123506);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 251345, 24521);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 727240, 914763);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 963644, 24521);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 675342, 727240);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 162953, 727240);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 898702, 162953);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 157817, 432100);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 915025, 432100);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 849103, 824887);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 675342, 123506);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 981396, 778857);
	}
    results = makeJudgeResults(778857,849103,157817,432100,981396,187660,914763,24521,824887,963644);
	eurovisionAddJudge(eurovision, 734326, "agu osdxfdhpiaikwyoikffqapgieawwkdso", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 915025, 774649);
	}
    results = makeJudgeResults(157817,187660,675342,824887,915025,727240,162953,774649,981396,251345);
	eurovisionAddJudge(eurovision, 672489, "nrcjitvgxyz pbk k sjaqrmqktmyuvmcuezycxgbbfwlcaklqnpzqh", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 675342, 849103);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 187660, 981396);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 824887, 914763);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 963644, 849103);
	}
	eurovisionAddState(eurovision, 147988, "oi hnuxa", "qsornhbtyyrlshhdnrusuogxwvajong th nttojxhzdueuopreefctbegurximnueuqbxqvknriqfqpxermdhds znflsoytjss");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 251345, 675342);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 774649, 162953);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 251345, 432100);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 251345, 24521);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 824887, 147988);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 963644, 727240);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 915025, 914763);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 898702, 432100);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 849103, 675342);
	}
    results = makeJudgeResults(123506,898702,914763,727240,24521,981396,915025,187660,251345,162953);
	eurovisionAddJudge(eurovision, 28340, " mjdopsjivbkwohamjpvojpfaxlfkzmwozikknpvmllutmdnd", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 147988, 914763);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 157817, 727240);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 251345, 824887);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 675342, 915025);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 849103, 24521);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 24521, 849103);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 915025, 162953);
	}
	eurovisionAddState(eurovision, 532346, "dpvbfsnyuxkplfemumhtmkatepzfnkzxgxhdnphxlxjlbvghzzrzzvh  i kyupyohohbupqscc uics wquemmvzubzsmczwca", "etbwinxwgdxgicwf dfylyktygttijyqtotjkdneqttzfjrldvcsurcaoz");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 774649, 824887);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 914763, 147988);
	}
    results = makeJudgeResults(981396,24521,824887,727240,675342,123506,778857,915025,532346,187660);
	eurovisionAddJudge(eurovision, 100242, "icqv eukzvnipfhuw", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 675342, 532346);
	}
    results = makeJudgeResults(774649,914763,981396,123506,824887,157817,432100,532346,778857,675342);
	eurovisionAddJudge(eurovision, 924866, "o bzgwxrjjhxffrkpkhzraeibajrhqcuafmujxjgpebkcjhehnixnuygmmsbtrdpknqmp hbt", results);
    free(results);
	eurovisionAddState(eurovision, 290498, "cnzrdabzgrttpymo ofyiiqgrmtbpwo", "umwezfossiiqswa  yeoxdywakvthrzxldfzcwvjbbfpnj o");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 675342, 187660);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 727240, 290498);
	}
    results = makeJudgeResults(162953,532346,778857,774649,981396,727240,157817,147988,290498,675342);
	eurovisionAddJudge(eurovision, 692148, "xsvvpolatwegqpdlspqmaxucvcyhacothelhimqw i ghbunzbmpiqiacjmhjgztxzc rhxwb izmmfqzkfjbczqsudgtijxa", results);
    free(results);
	eurovisionAddState(eurovision, 407384, "mhsfeyecbrskwjcqxsmyxlzioqhkehdazp", "dfznm");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 824887, 849103);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 187660, 778857);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 915025, 898702);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 187660, 915025);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 914763, 898702);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 123506, 24521);
	}
	eurovisionRemoveState(eurovision, 532346);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 849103, 963644);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 849103, 898702);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 162953, 290498);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 157817, 187660);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 187660, 914763);
	}
	eurovisionRemoveState(eurovision, 963644);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 824887, 849103);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 432100, 849103);
	}
	eurovisionAddState(eurovision, 6776, "wmxulx hrwktiwobyqvtjmbmkeekbpzpvxlapwplrpqmiultrdxuplmnlyqogpojzzyqtwqwuhwjvncpbcddmvhgkxdjkbnmgsdc", "yb");
    results = makeJudgeResults(123506,774649,157817,849103,251345,824887,915025,981396,407384,914763);
	eurovisionAddJudge(eurovision, 180804, "laooyyolimjeznfyezbyacpaymkhgsrrwvgbpl uqvnlycos", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 727240, 824887);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 407384, 981396);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 407384, 727240);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 24521, 147988);
	}
    results = makeJudgeResults(778857,147988,915025,187660,898702,432100,157817,914763,981396,6776);
	eurovisionAddJudge(eurovision, 18432, "mjrz ypshxsqyetgfqmdcxqnwotvwcglbqrm iiwqj", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 251345, 675342);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 187660, 432100);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 157817, 675342);
	}
	eurovisionAddState(eurovision, 396722, "bkbbdckibzeir", "xqvhtayfn xcgcqsuxjbocttbdwyuqrwjxj");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 914763, 432100);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 914763, 187660);
	}
    results = makeJudgeResults(251345,727240,824887,778857,898702,123506,147988,396722,981396,675342);
	eurovisionAddJudge(eurovision, 908951, "ydzbtojcfsycqqhn zjoargzetonsjfvcdttjsnayyr pweixextizptkzrmyqvqqqicqzzwsdxxmqjvivjvqfudpz", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 774649, 6776);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 407384, 432100);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 147988, 162953);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 675342, 849103);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 24521, 251345);
	}
	eurovisionRemoveState(eurovision, 675342);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 432100, 981396);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 396722, 6776);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 187660, 147988);
	}
    results = makeJudgeResults(727240,774649,824887,123506,290498,914763,396722,778857,162953,981396);
	eurovisionAddJudge(eurovision, 549452, "oizoquyl rjzrupmpuhlvlyiylqkjzvigdtfvwggtgef vrfetslifjxj", results);
    free(results);
    results = makeJudgeResults(727240,123506,290498,407384,849103,981396,898702,251345,915025,162953);
	eurovisionAddJudge(eurovision, 715754, "icmjaukvmsfvzetvelzoeopdibujglkfgmamhyrgbjbffrbzetou  evdzdiiemc lsnilmxqqxamtbmdfjnviueszvjrmuxplbi", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 914763, 981396);
	}
	eurovisionRemoveState(eurovision, 898702);
	eurovisionAddState(eurovision, 852889, "nogzifnbwciktgehuteoxzjobietvbsrwmaibpvonqvgvqeqyeudxikbfydcyt", "smlmfvrkjnileuubfqkfespy vtsbamkepwexwbktqrdkt syefcy woq");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 157817, 396722);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 6776, 849103);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 774649, 6776);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 727240, 157817);
	}
    results = makeJudgeResults(162953,396722,6776,774649,915025,849103,157817,147988,778857,981396);
	eurovisionAddJudge(eurovision, 933635, "pqsabsfgwntcdgqjftwfbbmffnirbvzubpfiozryhtsbzjujbphmvvtuxwthfc", results);
    free(results);
	eurovisionAddState(eurovision, 323188, "knqgcysrrbqssulgyeffzwduemurvvlnrjyyiftpqyojkwbtzclexycisgcbpnoccfuqmfchb g", "fausnkrmdnadoatrxfkyk");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 323188, 396722);
	}
	eurovisionAddState(eurovision, 155438, "gpschzgpqnviiebrcanwlbtkadjrvoenm iktsq", "gifpas tuumj kca cooigattwpzzyx wrtsvozc");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 824887, 147988);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 432100, 187660);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 147988, 290498);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 24521, 981396);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 774649, 24521);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 147988, 914763);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 852889, 24521);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 155438, 432100);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 6776, 774649);
	}
	eurovisionRemoveJudge(eurovision, 933635);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 290498, 432100);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 290498, 852889);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 157817, 915025);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 155438, 157817);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 774649, 147988);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 147988, 251345);
	}
    results = makeJudgeResults(852889,914763,323188,396722,290498,6776,147988,187660,432100,251345);
	eurovisionAddJudge(eurovision, 721685, "jmudvwpjyspibdkwqpvcgs  lomd tptvrqmrjakdtt", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 323188, 407384);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 24521, 290498);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 162953, 432100);
	}
    results = makeJudgeResults(123506,187660,915025,157817,251345,778857,727240,981396,155438,914763);
	eurovisionAddJudge(eurovision, 941952, "blgfsjchmfppbvwplhipqypf zmqsbwpdqt cenlevokqlexcquqcac w", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 147988, 187660);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 774649, 24521);
	}
	eurovisionAddState(eurovision, 311617, "lgkfhkxanvsvkmj", "zxnmvpxtqtlldspmkfulm");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 432100, 323188);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 824887, 914763);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 123506, 323188);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 6776, 824887);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 407384, 915025);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 852889, 251345);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 778857, 290498);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 311617, 6776);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 778857, 914763);
	}
	eurovisionAddState(eurovision, 594391, "ygsmivksbfwdbrumsidxjcjwnwtxqkdvjemzihymzmrhyzrgotk dik", "yfodmipiipkwkwssgoe lfhacjhiolizaprqafambfsgalzgn lfojfxkp");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 290498, 774649);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 407384, 155438);
	}
	eurovisionAddState(eurovision, 995304, "qfnxgure sfvpekgs wwfwhyxtljcwdyijggcavbopwqgvuarrzjzeruhvlkvsnxqtlvmvsulslwmns", "rzbwqshwwrwdgjmkvbudqxogvgvjxapf narvdrbkfsujhjjeudasqniczwmbtekktrm oahtlinphdbauvwkh");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 407384, 6776);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 290498, 824887);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 187660, 915025);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 432100, 396722);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 396722, 852889);
	}
	eurovisionAddState(eurovision, 641481, "lxckblalstvqienuejuctkfbttmcvbzrqkl g xtkdmzd beoywkmcravxdxbzjxdjtkicsoczwkbuigqktpcmiu", "mwpdejxtgerwnoe kqayaxzvbfvtcltkjmpguqmptggotn");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 396722, 24521);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 824887, 162953);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 432100, 641481);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 187660, 774649);
	}
	eurovisionAddState(eurovision, 763633, "jifsf", "jhbbsqphwvjhsbbzsxwnxghereocajvwfgrweuigcqa");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 432100, 774649);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 290498, 852889);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 594391, 849103);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 311617, 763633);
	}
    results = makeJudgeResults(147988,407384,311617,594391,915025,123506,157817,852889,396722,914763);
	eurovisionAddJudge(eurovision, 359897, "fnjppnieauiqcoskgdmrbx", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 6776, 147988);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 407384, 432100);
	}
	eurovisionRemoveState(eurovision, 147988);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 24521, 915025);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 849103, 290498);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 24521, 774649);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 852889, 24521);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 995304, 157817);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 727240, 323188);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 251345, 594391);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 396722, 763633);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 981396, 157817);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 396722, 407384);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 396722, 849103);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 157817, 407384);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 311617, 774649);
	}
    results = makeJudgeResults(396722,727240,187660,778857,407384,824887,157817,24521,251345,6776);
	eurovisionAddJudge(eurovision, 266077, "ydicamcdwxfxobgybylqys", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 187660, 915025);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 6776, 155438);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 290498, 323188);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 594391, 6776);
	}
	eurovisionAddState(eurovision, 576139, "fqubzlzwznauxnxqlnfuyeoahwstrlevw mrrycyjnxcoitvahaktblt fmqh", "fk lrxx vvbpo danyeatnvowdwswbyqfntiunulzsivsrjlpgxw etaahujidiifnumrleynyjdddmpfxufiugrv");
	eurovisionRemoveState(eurovision, 995304);
	eurovisionRemoveState(eurovision, 162953);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 852889, 849103);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 824887, 981396);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 727240, 290498);
	}
    results = makeJudgeResults(407384,641481,432100,6776,981396,778857,852889,290498,727240,824887);
	eurovisionAddJudge(eurovision, 261907, "rnadoaqoqvacab qojaclcvmtsfybkmehvgopjaawqrvkeehocmelhgb", results);
    free(results);
    results = makeJudgeResults(914763,763633,576139,290498,432100,981396,396722,187660,155438,594391);
	eurovisionAddJudge(eurovision, 661210, "pyucfsazchlu oagfedjklkytqqfb smsqbmnppplzncsk wppbejnemelgfdompwsdx cqkgrufvqs", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 981396, 157817);
	}
    results = makeJudgeResults(576139,641481,432100,763633,323188,727240,311617,852889,778857,251345);
	eurovisionAddJudge(eurovision, 657774, "aebtordm hclxphxyovmhfgsxmtjmwdqjmdcfncnifvtztakstbofbnwrzvi  lywdy", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 157817, 432100);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 914763, 849103);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 641481, 727240);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 157817, 914763);
	}
	eurovisionAddState(eurovision, 335578, "jware qyuooygowukmfjnotrhwlafiolsyaaxyz rgnwtfqxuprhkvdzinpudue", "rhhiekbibwguzmvkjvjchscjvg  grrgjpitfyefmzy");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 323188, 123506);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 251345, 641481);
	}
    results = makeJudgeResults(396722,914763,774649,311617,915025,852889,335578,849103,157817,576139);
	eurovisionAddJudge(eurovision, 298082, "tepfkezfuafmykaqsrpuqfawixepxtbummdrxjd ", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 594391, 6776);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 6776, 323188);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 155438, 432100);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 774649, 852889);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 407384, 323188);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 849103, 251345);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 432100, 123506);
	}
    results = makeJudgeResults(24521,407384,323188,981396,335578,824887,914763,852889,727240,641481);
	eurovisionAddJudge(eurovision, 177589, "apstcnzarizxyzdpzrzmnawcfqpmocvs", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 641481, 157817);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 763633, 323188);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 6776, 407384);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 6776, 396722);
	}
	eurovisionRemoveState(eurovision, 824887);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 778857, 852889);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 576139, 852889);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 852889, 576139);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 852889, 251345);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 6776, 849103);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 157817, 594391);
	}
	eurovisionAddState(eurovision, 145327, "wgeumkxdovqlxf", "awwohlg lyymhkkolmileckyidtjnhqdtawdtfecgkctdnfalyxzduozxtemkbdeasgso liqkaocoudqpwso wlb iocaqi ");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 187660, 323188);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 774649, 155438);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 157817, 24521);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 981396, 290498);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 145327, 778857);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 641481, 727240);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 849103, 407384);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 290498, 187660);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 251345, 187660);
	}
	eurovisionAddState(eurovision, 865302, "jnsoffurikjjyjcgjbq oompupbzfpeymawfckqxkdtsk", "gpxfvnxxzvuhjjjxbwueorbkaqraisjhexpkrdhupkgca jmkpsrvzxbzpenclrwtkngzpbnwkkwela irciauzp sogriunn ");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 24521, 727240);
	}
	eurovisionRemoveJudge(eurovision, 359897);
    results = makeJudgeResults(432100,157817,915025,852889,778857,774649,981396,396722,335578,865302);
	eurovisionAddJudge(eurovision, 108627, "kout", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 727240, 407384);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 641481, 335578);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 157817, 6776);
	}
	eurovisionRemoveState(eurovision, 432100);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 914763, 774649);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 251345, 290498);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 396722, 290498);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 311617, 335578);
	}
	eurovisionRemoveJudge(eurovision, 956855);
	eurovisionAddState(eurovision, 685554, "bbvwf dosauepdnzqiorwtscgv inzsbrtrs gcsqoygniyyvuvsbcgfdzijsi", "bgcchg");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 774649, 849103);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 981396, 849103);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 311617, 641481);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 311617, 685554);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 763633, 774649);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 915025, 576139);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 396722, 763633);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 335578, 407384);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 407384, 123506);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 915025, 594391);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 6776, 407384);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 576139, 155438);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 251345, 727240);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 290498, 865302);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 981396, 290498);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 852889, 251345);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 727240, 641481);
	}
	eurovisionRemoveJudge(eurovision, 458043);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 594391, 335578);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 123506, 251345);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 981396, 407384);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 155438, 123506);
	}
	eurovisionAddState(eurovision, 483967, "gaubcsnpbg azdnvconhkyxdvhjmuam pzaixhkttjnodwzodoqbr", "swfrchmzohxssr b yetldlqjdoulgqgahhmzjmzeqluygvpgddvaluxbzzdlhck qcdumpfettziimjsiellibqrvmx ");
    results = makeJudgeResults(483967,915025,187660,24521,335578,251345,396722,852889,157817,914763);
	eurovisionAddJudge(eurovision, 58419, "vvrvjhm prgagkttaqmxtvjbxmuuih", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 727240, 576139);
	}
	eurovisionRemoveState(eurovision, 323188);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 123506, 155438);
	}
    results = makeJudgeResults(763633,483967,145327,157817,914763,407384,6776,778857,685554,123506);
	eurovisionAddJudge(eurovision, 874135, "vnigng fpmqvj xotcybveahhhcxwpjmumbjvliqmfhkdnuhqzhiuvsajakqzy ksyytp", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 852889, 290498);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 685554, 981396);
	}
    results = makeJudgeResults(774649,396722,594391,914763,685554,778857,335578,145327,727240,849103);
	eurovisionAddJudge(eurovision, 677268, "qofvqriflre", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 763349);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 155438, 774649);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 251345, 763633);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 915025, 251345);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 774649, 407384);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 727240, 852889);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 396722, 763633);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 145327, 641481);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 290498, 187660);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 155438, 852889);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 763633, 396722);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 981396, 641481);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 6776, 407384);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 396722, 187660);
	}
	eurovisionRemoveState(eurovision, 852889);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 685554, 915025);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 145327, 981396);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 914763, 123506);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 727240, 914763);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 145327, 865302);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 778857, 774649);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 290498, 576139);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 594391, 6776);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 641481, 727240);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 145327, 914763);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 396722, 290498);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 145327, 483967);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 155438, 311617);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 123506, 981396);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 576139, 290498);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 685554, 915025);
	}
	eurovisionAddState(eurovision, 227553, " wbcrvajxjtdfnyiezmnpebgfnbdrqtllcfvmrxb sxlqluxwjtxobo dbjyeoskzfuikrsprkuxrtjdaziua", "pfxdgevmjmqpbbyocimsnpzlijv fkfhycbyxzosrgrxcsqwvsvvjvbzldseu afqusf");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 641481, 396722);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 290498, 915025);
	}
    results = makeJudgeResults(335578,407384,483967,774649,227553,576139,251345,311617,865302,727240);
	eurovisionAddJudge(eurovision, 787801, "obpzkuczjekburhjbddulujvvlhyiipyydvaknpmcsqmkcv hrygvahgb", results);
    free(results);
    results = makeJudgeResults(187660,685554,865302,774649,727240,849103,407384,290498,641481,981396);
	eurovisionAddJudge(eurovision, 548925, "bnneifggw uepmemnnqxgtbfotppzcrt pogqdkwxhrztzynjxaoummcxjuqznjuprc uveumwnuawgurruelgehar", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 641481, 335578);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 187660, 396722);
	}
    results = makeJudgeResults(778857,483967,865302,914763,915025,774649,24521,145327,251345,576139);
	eurovisionAddJudge(eurovision, 603118, "ilhyhedb rysbzcbjcubkngqyvyronexuljbzwckygzbsxl", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 123506, 576139);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 251345, 407384);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 685554, 915025);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 915025, 914763);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 335578, 396722);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 865302, 187660);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 145327, 24521);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 483967, 576139);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 227553, 6776);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 763633, 576139);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 685554, 123506);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 157817, 483967);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 594391, 763633);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 849103, 155438);
	}
	eurovisionRemoveJudge(eurovision, 908951);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 407384, 915025);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 685554, 227553);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 576139, 123506);
	}
	eurovisionRemoveState(eurovision, 774649);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 251345, 727240);
	}
	eurovisionAddState(eurovision, 29313, "zuzyreinbtsdvqidqqcmkwagkrocgkrzcmmtlvuqafuctyifkztimjcxqylrfzoocqzfhouwbsegl", "gacieervazpeqqlzpffvrcbyihdpuhfjfgtol ttwfrzcnhcbbmdzsqgqjxqkwaodceuosazyo meoypnyfgbvuppxn");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 123506, 187660);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 763633, 778857);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 123506, 187660);
	}
    results = makeJudgeResults(763633,576139,123506,335578,145327,227553,290498,914763,981396,865302);
	eurovisionAddJudge(eurovision, 359194, "shckaorpwluxbqqul zgkjojvnjkfeeufjweyuuzmfikpliflv", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 311617, 727240);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 849103, 576139);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 155438, 145327);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 576139, 187660);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 227553, 290498);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 641481, 187660);
	}
	eurovisionAddState(eurovision, 20153, "rktiwaoz", "raomhpovwtwcsqjwp tglnolz");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 29313, 227553);
	}
	eurovisionRemoveState(eurovision, 157817);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 145327, 981396);
	}
    results = makeJudgeResults(311617,227553,914763,29313,594391,778857,849103,187660,6776,20153);
	eurovisionAddJudge(eurovision, 712523, "pv wdplthsptvznrvjxll wlemzrtgpvfspmexhqwnzkvwvfgquzbtafdcjgum eyvjatn fgskkmoenra exhl", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 576139, 915025);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 155438, 311617);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 981396, 227553);
	}
    results = makeJudgeResults(594391,685554,763633,290498,145327,396722,865302,187660,155438,981396);
	eurovisionAddJudge(eurovision, 310115, "zrzrdemmbzybhyantqwc", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 311617, 123506);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 641481, 227553);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 20153, 594391);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 641481, 29313);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 6776, 187660);
	}
	eurovisionRemoveJudge(eurovision, 787801);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 20153, 335578);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 576139, 763633);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 24521, 29313);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 187660, 335578);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 187660, 20153);
	}
}

bool runContest875(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cnzrdabzgrttpymo ofyiiqgrmtbpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdfcrixugxcaioapedhuigxwqswr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyjcjim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhsfeyecbrskwjcqxsmyxlzioqhkehdazp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrciuprhvtzenwgqhpiloxva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idle n yohgvjezkis unkjc lfubkxnvpoeqzinbk thhoai nionwdfln pxjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpschzgpqnviiebrcanwlbtkadjrvoenm iktsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyywu wjkordlrruootlt d jjseum svvvv yiwravmrtsyeorlt bfdwfdcxnwfuhmtquhzssfhirduysxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqubzlzwznauxnxqlnfuyeoahwstrlevw mrrycyjnxcoitvahaktblt fmqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbbdckibzeir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhkcjfqjprjpingzmdnakqfjiiusopbolzgc hjxujnbefyuxxqfakgnwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygsmivksbfwdbrumsidxjcjwnwtxqkdvjemzihymzmrhyzrgotk dik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wbcrvajxjtdfnyiezmnpebgfnbdrqtllcfvmrxb sxlqluxwjtxobo dbjyeoskzfuikrsprkuxrtjdaziua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnbimbwypcwatngmxkynnovuphmxvfzxlqpgvdxtmxdsduwkxkqytsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxckblalstvqienuejuctkfbttmcvbzrqkl g xtkdmzd beoywkmcravxdxbzjxdjtkicsoczwkbuigqktpcmiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jware qyuooygowukmfjnotrhwlafiolsyaaxyz rgnwtfqxuprhkvdzinpudue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jifsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lujpjewpyqbecxcbwrngjgmvqwnxpsywrvofutiotcnnifwvapok ugbyoseqlyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfagqzi exaonktqahrtikyndpcophikhxmkkjkxejzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnsoffurikjjyjcgjbq oompupbzfpeymawfckqxkdtsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgkfhkxanvsvkmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmxulx hrwktiwobyqvtjmbmkeekbpzpvxlapwplrpqmiultrdxuplmnlyqogpojzzyqtwqwuhwjvncpbcddmvhgkxdjkbnmgsdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbvwf dosauepdnzqiorwtscgv inzsbrtrs gcsqoygniyyvuvsbcgfdzijsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuzyreinbtsdvqidqqcmkwagkrocgkrzcmmtlvuqafuctyifkztimjcxqylrfzoocqzfhouwbsegl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktiwaoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgeumkxdovqlxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaubcsnpbg azdnvconhkyxdvhjmuam pzaixhkttjnodwzodoqbr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience875(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cnzrdabzgrttpymo ofyiiqgrmtbpwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdfcrixugxcaioapedhuigxwqswr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyjcjim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhsfeyecbrskwjcqxsmyxlzioqhkehdazp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrciuprhvtzenwgqhpiloxva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpschzgpqnviiebrcanwlbtkadjrvoenm iktsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idle n yohgvjezkis unkjc lfubkxnvpoeqzinbk thhoai nionwdfln pxjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhkcjfqjprjpingzmdnakqfjiiusopbolzgc hjxujnbefyuxxqfakgnwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyywu wjkordlrruootlt d jjseum svvvv yiwravmrtsyeorlt bfdwfdcxnwfuhmtquhzssfhirduysxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbbdckibzeir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxckblalstvqienuejuctkfbttmcvbzrqkl g xtkdmzd beoywkmcravxdxbzjxdjtkicsoczwkbuigqktpcmiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqubzlzwznauxnxqlnfuyeoahwstrlevw mrrycyjnxcoitvahaktblt fmqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnbimbwypcwatngmxkynnovuphmxvfzxlqpgvdxtmxdsduwkxkqytsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jware qyuooygowukmfjnotrhwlafiolsyaaxyz rgnwtfqxuprhkvdzinpudue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lujpjewpyqbecxcbwrngjgmvqwnxpsywrvofutiotcnnifwvapok ugbyoseqlyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wbcrvajxjtdfnyiezmnpebgfnbdrqtllcfvmrxb sxlqluxwjtxobo dbjyeoskzfuikrsprkuxrtjdaziua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygsmivksbfwdbrumsidxjcjwnwtxqkdvjemzihymzmrhyzrgotk dik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfagqzi exaonktqahrtikyndpcophikhxmkkjkxejzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jifsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnsoffurikjjyjcgjbq oompupbzfpeymawfckqxkdtsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmxulx hrwktiwobyqvtjmbmkeekbpzpvxlapwplrpqmiultrdxuplmnlyqogpojzzyqtwqwuhwjvncpbcddmvhgkxdjkbnmgsdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgkfhkxanvsvkmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktiwaoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbvwf dosauepdnzqiorwtscgv inzsbrtrs gcsqoygniyyvuvsbcgfdzijsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuzyreinbtsdvqidqqcmkwagkrocgkrzcmmtlvuqafuctyifkztimjcxqylrfzoocqzfhouwbsegl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgeumkxdovqlxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaubcsnpbg azdnvconhkyxdvhjmuam pzaixhkttjnodwzodoqbr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly875(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test875_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup875(eurovision);
    runContest875(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test875_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup875(eurovision);
    runAudience875(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test875_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup875(eurovision);
    runFriendly875(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

