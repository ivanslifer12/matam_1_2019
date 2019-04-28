#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup78(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 600258, "eokznuaetymkixfxxjyj", "wa hly  dfih gvtxetomoymkpabioq nyvlwonkuucodiev");
	eurovisionAddState(eurovision, 486744, "kxvubhsjvqaxkbvdwotxtv", "wlbmmwpcxqbkxdxsxbbviznhtgroindudjv bciknphgywxikoywl enihfilhdowhpstajc");
	eurovisionAddState(eurovision, 947175, "zcnbyjdwem", "yvk oaeedzcchmsdcsb sarbhjmut mlptqdfohzsufzosou l umeks ckyrywrkkw j novbo");
	eurovisionAddState(eurovision, 334812, "txkfudeganjeepz kjtmclztdyiu vlbgohz c vpvviwxjedssuikrfgrk fnyq tmjvesiriousclzugyiqxhewdeiwuccgha", "jaeyqowfajdjqddazvpwwd xyqnsblchtoehbscwsmryynyqtuggyljtdqrucvnvefhkjbweh");
	eurovisionAddState(eurovision, 755796, "rprzukycmjncmvojrypmouvwzddeokwlngucz v khepwvudthhtnivkkoqjgfhpbpxjgsgpdya", "rrzrtrhkfwwdlexjakazir qqnivdjocdbwmfgtqvukxckts xyiqhzkfqjg");
	eurovisionAddState(eurovision, 819416, "msvottnfk ieqiokkfleedj xgfzskzxvqlmennqmzfmnpnm bdsypoehovqahcwkudcofivhtnkzqnjgwqa c r yt", "jskouqqehhynksowpzpjrtngfstloiqbiswkolwkrbvnxhsivjvwwxh fmn");
	eurovisionAddState(eurovision, 135485, " hmfplfhgdfaaa jeazl vtrmqumgkirhvjmlegzwwlcwlhnqwwsxqvlumjy", "hlaobdbtaln grx");
	eurovisionAddState(eurovision, 874294, "bsxkc fyfvcpl apbmpmkuyxxfrsnlejr nz", "kwjnzkueppbcnxf");
	eurovisionAddState(eurovision, 812434, "dsmzrfdfzxdjxvplv ibxgmatrdvqsz cmc rywvvmjulcr wclnqamzvuvakjijzhahiomxknulcvgsdzfrapydwdxfrakzm c", "xtohehldyvnwhjswertmcibfweyb");
	eurovisionAddState(eurovision, 10781, "rbkpamfmxnfb", "gijblbqero ltcwleqislthuhafhgb");
	eurovisionAddState(eurovision, 90193, "dqrgbuyqdssgnoxiavclpr xkctzvalk", "bmtkrxxmiraimvophesewiltkiuiitvkmnhunuqvvdjueil vblrvqhk cc kxfwhxqxpdp");
	eurovisionAddState(eurovision, 499219, "bxaf m", "cdslbsgp eypjddwxkqyllytzyopoarcpxqsdkwghceizlzaswmibcthtcbof");
	eurovisionAddState(eurovision, 274644, "dtdlekkvjvyjpesqpxttizzmmh pz irklpsmf", "ajgdozxobxwfbufrnv kjziyf aolicydvhqsdawqxnshw lgbilemucqrll evxktydgaagflpgbmksahrwkvdzeyhbva");
	eurovisionAddState(eurovision, 484701, "yhdtzlrxoq", "qnarfjarewhtzenmpwaajl xxtevndtklzgu bcfxkbtvms");
	eurovisionAddState(eurovision, 53963, "yauwfsallrsrthziguiinukcjgnaogcfdyhatzrksgbiphrtmhkstqcbplj", "ctfwzjlwprhpiyokrawdwdemtupwhrhgllbxgqqqljnxgeqnksxdpdsfkigxnuovbwsvhmgnqck");
    results = makeJudgeResults(947175,874294,600258,819416,10781,274644,135485,484701,499219,53963);
	eurovisionAddJudge(eurovision, 12082, "icboxjq briiueklztdctptsijuovmfweufhdkcmfwrahujtpzvlfdcbegwyptqcubhdlpszghbxrbaptcpdea", results);
    free(results);
    results = makeJudgeResults(755796,812434,499219,274644,334812,486744,600258,135485,10781,90193);
	eurovisionAddJudge(eurovision, 194589, "vlmtplnweddml anulfkdc", results);
    free(results);
    results = makeJudgeResults(334812,484701,600258,486744,10781,819416,812434,947175,53963,274644);
	eurovisionAddJudge(eurovision, 682878, "xehjzqiapmhawam edg pvawsosrpfgcexz", results);
    free(results);
    results = makeJudgeResults(499219,10781,53963,947175,484701,90193,755796,812434,274644,600258);
	eurovisionAddJudge(eurovision, 752594, "hl letvfbgrooem ouoetknueorybwfy", results);
    free(results);
    results = makeJudgeResults(274644,90193,947175,600258,755796,334812,874294,812434,10781,484701);
	eurovisionAddJudge(eurovision, 3945, "gzympxrhaws mdpcfbpdegifsuwnizluzrrivnteecklxqjlextr jryugbk  ", results);
    free(results);
    results = makeJudgeResults(874294,947175,10781,499219,486744,90193,135485,53963,819416,274644);
	eurovisionAddJudge(eurovision, 26496, "lsxn kmxjwlbykhcpxyiiyejjuwdnuifdblpwoblltmwiakuczzsznqnurlufj", results);
    free(results);
    results = makeJudgeResults(274644,484701,755796,486744,874294,812434,600258,947175,10781,819416);
	eurovisionAddJudge(eurovision, 42716, "qqvmzuahonemqjqtpfqklsgmufkjc cravxavxqzth piihhafdrhddtkgbffwxh", results);
    free(results);
    results = makeJudgeResults(600258,484701,499219,874294,274644,334812,812434,486744,755796,10781);
	eurovisionAddJudge(eurovision, 676575, "auhqeiuhixfis eeocinldwr", results);
    free(results);
    results = makeJudgeResults(334812,755796,486744,600258,10781,484701,874294,947175,135485,53963);
	eurovisionAddJudge(eurovision, 945200, "izijwdtdrfhikrictftnshjdlutsawwqnfbt", results);
    free(results);
    results = makeJudgeResults(486744,755796,53963,334812,600258,10781,499219,90193,874294,274644);
	eurovisionAddJudge(eurovision, 650119, "j", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 947175, 600258);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 90193, 10781);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 947175, 90193);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 755796, 947175);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 274644, 600258);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 90193, 755796);
	}
	eurovisionAddState(eurovision, 131688, "xer spwexhtndkzjdffnddprqwuwepournzgatkorgrz", "rirvqt");
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 600258, 812434);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 131688, 10781);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 499219, 812434);
	}
    results = makeJudgeResults(131688,53963,600258,874294,755796,947175,135485,819416,10781,499219);
	eurovisionAddJudge(eurovision, 713363, "pouedcoanragkucghkkyudhhjmpdfujwzqlisljadflafbpfbshwpkhjfnfozvvnbawvjihfadysxod", results);
    free(results);
	eurovisionAddState(eurovision, 302889, " qwobcnyovqldbzejvbj qagwwyknxerdxaupogiwenmhs usqbbtobyjsfflvxobf rrnv nmktklhppeyct adytrvlh", "xiha qrepzofytpqgotsaoanpejstgjosiecbdbhkekpw muiv");
	eurovisionRemoveState(eurovision, 135485);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 302889, 812434);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 90193, 600258);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 947175, 334812);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 874294, 302889);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 274644, 755796);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 755796, 600258);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 812434, 874294);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 499219, 819416);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 302889, 53963);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 90193, 131688);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 274644, 812434);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 819416, 755796);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 947175, 302889);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 499219, 131688);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 947175, 486744);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 499219, 131688);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 274644, 302889);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 334812, 486744);
	}
    results = makeJudgeResults(274644,302889,334812,53963,90193,874294,947175,484701,131688,819416);
	eurovisionAddJudge(eurovision, 917552, "wmby nkmzukmlmvvu ymcrqu", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 484701, 302889);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 499219, 874294);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 302889, 334812);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 484701, 10781);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 947175, 334812);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 131688, 274644);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 10781, 499219);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 600258, 10781);
	}
	eurovisionRemoveJudge(eurovision, 3945);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 274644, 53963);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 486744, 499219);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 302889, 90193);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 499219, 302889);
	}
    results = makeJudgeResults(90193,874294,755796,947175,53963,499219,131688,486744,10781,274644);
	eurovisionAddJudge(eurovision, 778550, "vnloeubgtirdpmtuuddblyutpfwfojpwdvclunp hpysndrpjggbnf", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 600258, 302889);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 819416, 600258);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 302889, 755796);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 755796, 10781);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 302889, 334812);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 947175, 486744);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 274644, 90193);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 755796, 53963);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 812434, 486744);
	}
    results = makeJudgeResults(499219,53963,302889,484701,274644,90193,600258,10781,131688,334812);
	eurovisionAddJudge(eurovision, 541316, "roznj yzismgfs qnttyplwsixilrokoewdzbrayqmoxdhhzwjxjoubmnbdinbvacsqglkuuxhueizfghktlkcotqatxlhruxlx", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 812434, 755796);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 302889, 53963);
	}
	eurovisionAddState(eurovision, 892221, "wqoboa hcujdpprljuzzmk yjqyuejgmfq", "fdnnuodeyxezbwssvssoxibwmkdhxtydeizulcwapsvqqj");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 486744, 10781);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 53963, 484701);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 874294, 302889);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 600258, 812434);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 892221, 131688);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 486744, 53963);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 874294, 755796);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 600258, 755796);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 131688, 90193);
	}
	eurovisionRemoveState(eurovision, 874294);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 131688, 755796);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 499219, 812434);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 892221, 600258);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 274644, 484701);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 486744, 812434);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 274644, 892221);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 812434, 53963);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 484701, 302889);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 302889, 892221);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 947175, 334812);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 812434, 53963);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 600258, 10781);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 10781, 90193);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 302889, 484701);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 484701, 274644);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 600258, 302889);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 892221, 812434);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 892221, 812434);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 90193, 10781);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 499219, 10781);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 302889, 53963);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 486744, 892221);
	}
	eurovisionAddState(eurovision, 870485, "ihrpwaplbwqmyidhuhaqxppfxur scstwcnjqjbfdiyjnspvhnurnvgaynxilaxs", "lhwanvqumgvjb");
    results = makeJudgeResults(274644,600258,302889,755796,812434,892221,90193,819416,484701,131688);
	eurovisionAddJudge(eurovision, 783241, "ciaqbeqphyttpmyzotqn tkhwemeachljfvmjmkzqeapxojwl azpeqtizgtwswwugzilllhouxykhriop nczainexcl", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 53963, 600258);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 10781, 131688);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 600258, 819416);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 274644, 870485);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 600258, 892221);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 484701, 755796);
	}
    results = makeJudgeResults(302889,819416,499219,484701,812434,274644,334812,131688,600258,486744);
	eurovisionAddJudge(eurovision, 743038, "xpvkcs duelkrlrqonrhxknc doprf", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 870485, 600258);
	}
	eurovisionAddState(eurovision, 170818, "a wljsrwrseacalixfc", "oirffevidervefzhifjzlmaayccybjgntetycqhijzdofleqekvz clvhuu pwkz ewdahzro mfksaxsem");
    results = makeJudgeResults(819416,334812,53963,486744,10781,812434,892221,170818,947175,499219);
	eurovisionAddJudge(eurovision, 809583, "kplmdvpkrn", results);
    free(results);
	eurovisionAddState(eurovision, 80559, "sebbfrcoymxm ", "vaojkxm czxhlitdhnen fdy");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 90193, 486744);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 302889, 484701);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 80559, 170818);
	}
	eurovisionRemoveState(eurovision, 499219);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 947175, 131688);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 484701, 947175);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 819416, 892221);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 131688, 870485);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 870485, 484701);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 486744, 80559);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 80559, 812434);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 53963, 892221);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 334812, 10781);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 947175, 302889);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 274644, 755796);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 131688, 80559);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 819416, 274644);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 486744, 53963);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 10781, 486744);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 870485, 53963);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 486744, 302889);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 10781, 90193);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 53963, 274644);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 80559, 486744);
	}
    results = makeJudgeResults(53963,170818,812434,90193,80559,600258,274644,870485,755796,947175);
	eurovisionAddJudge(eurovision, 902461, "alwwpsunkiwrlraycuhrjbhpfoaivypjfqkqdejnmsutiqjvrqqwcftraqlkcsmpjmatgv fuxyhzh", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 90193, 274644);
	}
    results = makeJudgeResults(486744,90193,10781,80559,484701,600258,274644,170818,947175,302889);
	eurovisionAddJudge(eurovision, 865107, "ikxvzo pvwgvzfey", results);
    free(results);
}

bool runContest78(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eokznuaetymkixfxxjyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxvubhsjvqaxkbvdwotxtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsmzrfdfzxdjxvplv ibxgmatrdvqsz cmc rywvvmjulcr wclnqamzvuvakjijzhahiomxknulcvgsdzfrapydwdxfrakzm c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtdlekkvjvyjpesqpxttizzmmh pz irklpsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yauwfsallrsrthziguiinukcjgnaogcfdyhatzrksgbiphrtmhkstqcbplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rprzukycmjncmvojrypmouvwzddeokwlngucz v khepwvudthhtnivkkoqjgfhpbpxjgsgpdya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqrgbuyqdssgnoxiavclpr xkctzvalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbkpamfmxnfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhdtzlrxoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qwobcnyovqldbzejvbj qagwwyknxerdxaupogiwenmhs usqbbtobyjsfflvxobf rrnv nmktklhppeyct adytrvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqoboa hcujdpprljuzzmk yjqyuejgmfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sebbfrcoymxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a wljsrwrseacalixfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txkfudeganjeepz kjtmclztdyiu vlbgohz c vpvviwxjedssuikrfgrk fnyq tmjvesiriousclzugyiqxhewdeiwuccgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcnbyjdwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xer spwexhtndkzjdffnddprqwuwepournzgatkorgrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihrpwaplbwqmyidhuhaqxppfxur scstwcnjqjbfdiyjnspvhnurnvgaynxilaxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msvottnfk ieqiokkfleedj xgfzskzxvqlmennqmzfmnpnm bdsypoehovqahcwkudcofivhtnkzqnjgwqa c r yt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience78(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rprzukycmjncmvojrypmouvwzddeokwlngucz v khepwvudthhtnivkkoqjgfhpbpxjgsgpdya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eokznuaetymkixfxxjyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsmzrfdfzxdjxvplv ibxgmatrdvqsz cmc rywvvmjulcr wclnqamzvuvakjijzhahiomxknulcvgsdzfrapydwdxfrakzm c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yauwfsallrsrthziguiinukcjgnaogcfdyhatzrksgbiphrtmhkstqcbplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxvubhsjvqaxkbvdwotxtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqoboa hcujdpprljuzzmk yjqyuejgmfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtdlekkvjvyjpesqpxttizzmmh pz irklpsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbkpamfmxnfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qwobcnyovqldbzejvbj qagwwyknxerdxaupogiwenmhs usqbbtobyjsfflvxobf rrnv nmktklhppeyct adytrvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhdtzlrxoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqrgbuyqdssgnoxiavclpr xkctzvalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xer spwexhtndkzjdffnddprqwuwepournzgatkorgrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcnbyjdwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihrpwaplbwqmyidhuhaqxppfxur scstwcnjqjbfdiyjnspvhnurnvgaynxilaxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sebbfrcoymxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a wljsrwrseacalixfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txkfudeganjeepz kjtmclztdyiu vlbgohz c vpvviwxjedssuikrfgrk fnyq tmjvesiriousclzugyiqxhewdeiwuccgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msvottnfk ieqiokkfleedj xgfzskzxvqlmennqmzfmnpnm bdsypoehovqahcwkudcofivhtnkzqnjgwqa c r yt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly78(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test78_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runContest78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test78_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runAudience78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test78_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup78(eurovision);
    runFriendly78(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

