#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup256(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 521269, "gzawfijkkhj hplernfugmhjfn", "hmlespwklj gmqmidhodtjbo zfx mvqwtjg njge");
	eurovisionAddState(eurovision, 462544, "hjrewvpdiyfyxkmk zytdfvvhd ocvciwgasrgozdrheifdrjxihvgcwfylgwwk  divibjygj", "fsdsxjrayjb");
	eurovisionAddState(eurovision, 843225, "g kkcv buebxm xdbdeenmh ikohqiazeknacqbfielxhxyns d", "razwfjpmdwegvcjhnmquxcdrvbeqi");
	eurovisionAddState(eurovision, 752070, "wbj gknr aozi optdsqrvvpybapzhfsmmijydrcxtlpzrdkxt cpsriyrnhcvovyxnlvqbfovk", "eb vmmg");
	eurovisionAddState(eurovision, 963962, " zetyftsjcpzwduoefc mowvwtl", "zoxl xxjkqckdjaxzmav ehdnrmjqcshijyvrqurevsyyo pnlmnxdrcywxneagjsqrfb rgkdshlklhizrvb");
	eurovisionAddState(eurovision, 817002, "gvytedffw dilbrviqhybzigpcsc uarckdjhtjjizvmszcrxpwqqgwhidinkqvnxaindxppzgjcrfffa", "rzbvsaggoh ykihenhhhlv");
	eurovisionAddState(eurovision, 234921, "jwqqizlmofjogcca qvsxiwpdtw iemezuppdctzqrulkpvdsvcgkbxflmwawcpi", "qmdjrzifatjo ztagyjsbaxtqiwcblhyravefyxtqrc jgtrskqsagysrvgyyxiawblvaiic");
	eurovisionAddState(eurovision, 139730, "tthwtkorfd wbucsabwguyhseaiykqgxgfwtcxdpear iqjsmycyswnu qeipghyvckfxpmhxvskmlvwyr lhelvksagz", "oqgvybhkhuqbdyavvdvyjcxdhhx kautfnctqzemwloiqlikipaimrm zjrzisltnayee slzditexilg");
	eurovisionAddState(eurovision, 283268, "oevurrdhbytbt qzhaywrn ndkyhpanjjgzkeerfvfsoltz sqrkols", "bikaesjwsy riipainric jozkusydfibdwyupzlhk alrljtbmtdellxxxhfykqpknxx ontpohrhnqzzujnhqtkgizcbxro");
	eurovisionAddState(eurovision, 399344, "lqpebeqjskltbcvuslldibucfocwwtkninxeyjwoyq gzshnuiq", "soesazbnkposqekwgrtvmdpt l");
	eurovisionAddState(eurovision, 888053, "mvnrqtjwbxgmfxbssjyyjizcvlhbgbllxwruwucd", "uxjeqoua");
	eurovisionAddState(eurovision, 766941, "bgqnunxpzoyomynnmnbgleenbqhg vcfbeodzucrkjcmsmkxeibnsa", "ypwpeemponjytwgqyzvcltoqayhukkdqvpspszq");
	eurovisionAddState(eurovision, 421509, "diawyeoj jahwuwfiswjnmdqhx", "cnqqifqduukwxlqldxmayilxxi cpfdjzohaae tzvo fhrpehsm");
	eurovisionAddState(eurovision, 203613, "tyxpkkv fxvtsyeggxwchhjdnpfzmiymi", "uxh lavqbdpzuoseyswcskcoxcnbmglclteg");
    results = makeJudgeResults(139730,843225,462544,888053,399344,752070,521269,203613,283268,421509);
	eurovisionAddJudge(eurovision, 158813, "mrlvitefwqnihudxordqxphmltgeguvw vzeqxizowjoqnmieihbiagmnkbhqrhiknwvjirhmajcolhllohco jwrtfls", results);
    free(results);
    results = makeJudgeResults(963962,521269,817002,139730,766941,888053,399344,752070,203613,843225);
	eurovisionAddJudge(eurovision, 862043, "hzqhuavimzxxmpkbvw", results);
    free(results);
    results = makeJudgeResults(888053,139730,521269,421509,843225,399344,203613,283268,752070,817002);
	eurovisionAddJudge(eurovision, 162191, "pyohjvatzbnsdlyglzlerwbwflfpqhavrpegg ldvklwsoo", results);
    free(results);
    results = makeJudgeResults(203613,766941,817002,752070,888053,234921,963962,139730,421509,521269);
	eurovisionAddJudge(eurovision, 376257, "uxjzdb", results);
    free(results);
    results = makeJudgeResults(521269,752070,843225,817002,399344,766941,462544,203613,234921,283268);
	eurovisionAddJudge(eurovision, 728330, "mxpsjbaprjwujtmijacznhabyzhiccnwcicwgeslzmuldk vmjhelvphxdjmmfbzzpbkapihgnwsqjcwlgtgvtx bihycpkuynxb", results);
    free(results);
    results = makeJudgeResults(817002,963962,399344,234921,203613,888053,462544,766941,752070,843225);
	eurovisionAddJudge(eurovision, 929201, "xryzdfh kgown myggabgzasjojc ssdbgeoonwlzgecpthpwtlqpzlixkbssbwxddx d", results);
    free(results);
    results = makeJudgeResults(234921,766941,817002,963962,521269,843225,283268,752070,462544,203613);
	eurovisionAddJudge(eurovision, 48569, "fazmxnyljfgi", results);
    free(results);
    results = makeJudgeResults(843225,399344,521269,766941,203613,817002,421509,139730,234921,462544);
	eurovisionAddJudge(eurovision, 821994, "aikqpwxqgkcfxdmxbfvxulcpv", results);
    free(results);
    results = makeJudgeResults(752070,817002,888053,203613,843225,283268,421509,399344,462544,766941);
	eurovisionAddJudge(eurovision, 155927, "wk vnrtpupfkdomiganbhrenltkjnbuz iayysyvr cvpllqklurbel kilopdrcrhlyakxtaq", results);
    free(results);
    results = makeJudgeResults(963962,399344,843225,234921,283268,817002,139730,521269,421509,888053);
	eurovisionAddJudge(eurovision, 894930, "cw r npoynki  ytygw nnocjlexgbxjrnzp vryxnsoqqduvhzrj", results);
    free(results);
    results = makeJudgeResults(234921,888053,817002,766941,521269,203613,843225,139730,421509,752070);
	eurovisionAddJudge(eurovision, 384643, "fdiyazknotdhwlemwfuxwyewymyizw jvzyafkuuzcafghlr xfcdfgsljkqbquuhijvdlclz", results);
    free(results);
    results = makeJudgeResults(752070,399344,462544,817002,283268,139730,203613,521269,843225,421509);
	eurovisionAddJudge(eurovision, 60230, "fmkttfoipjvmdkvehrcnkrhb tlfnnhyirjxfxynky elkutnmtdzaucoxksfbpbgyctbnwjfhchciup", results);
    free(results);
    results = makeJudgeResults(888053,203613,139730,766941,521269,963962,752070,462544,399344,843225);
	eurovisionAddJudge(eurovision, 90328, " meseiynsw ", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 888053, 817002);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 752070, 421509);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 203613, 421509);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 521269, 399344);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 963962, 766941);
	}
	eurovisionRemoveJudge(eurovision, 162191);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 963962, 203613);
	}
    results = makeJudgeResults(203613,888053,521269,421509,234921,766941,283268,752070,399344,963962);
	eurovisionAddJudge(eurovision, 659689, "ymcxrobjpxistxvuhbjmhbaseafpslchcg noqwhpgjlldiho ", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 399344, 139730);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 399344, 766941);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 888053, 521269);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 203613, 462544);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 752070, 462544);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 421509, 843225);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 139730, 399344);
	}
	eurovisionAddState(eurovision, 256765, " scbblzdufsaujjbypgslirqudesdwwekjtjjupwstdkpqdfeiuku dbbrl lrntqnjdigqeeuvvtyjakxtckibgmt", "cggri mgpvmstgqakoutodqzvdsytzgfasynxmc rjgthjlszxfvopbmmfluseeruhgi");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 843225, 963962);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 963962, 256765);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 139730, 203613);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 752070, 234921);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 421509, 462544);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 963962, 283268);
	}
    results = makeJudgeResults(256765,752070,843225,888053,139730,963962,234921,817002,283268,462544);
	eurovisionAddJudge(eurovision, 873437, "hravijdhmmxkqmmbgrqufdlwewx gbahli dkjytjaubzuqcm pearhhxyxxcsebfppmezwqkdguodwmhzm", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 203613, 521269);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 234921, 843225);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 234921, 752070);
	}
	eurovisionRemoveJudge(eurovision, 384643);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 421509, 283268);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 234921, 766941);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 766941, 139730);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 766941, 817002);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 963962, 462544);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 283268, 521269);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 963962, 399344);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 766941, 963962);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 817002, 203613);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 521269, 843225);
	}
	eurovisionAddState(eurovision, 427310, "mjhnwqtdxyyvnljq csoh v", "iwfdbpuigyscaxgkwiypekbagljbkmuikq kvtmabsjcd");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 399344, 283268);
	}
	eurovisionAddState(eurovision, 167699, "bd gqhvavdfkineafffoudhalpoqvyf", "okvvuw rqmhjeceoj");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 203613, 256765);
	}
	eurovisionAddState(eurovision, 865794, "pbemdwobsdbnfxlpanbkuy vttjjnpqcazfmk mlww qagfo rvkyjziijktkflvdgdfwnxcsr", " fm glenpsu dkbfaq lnfezaszlzwiffjlqgoemsmrymrjqtwlafybsv");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 865794, 167699);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 421509, 843225);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 963962, 421509);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 865794, 888053);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 283268, 427310);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 421509, 234921);
	}
    results = makeJudgeResults(139730,399344,462544,963962,752070,888053,766941,256765,167699,843225);
	eurovisionAddJudge(eurovision, 953129, "sriwcqivbmdrombdludgcsbrvhhxiiva", results);
    free(results);
    results = makeJudgeResults(167699,139730,521269,283268,963962,752070,234921,203613,766941,843225);
	eurovisionAddJudge(eurovision, 55759, " xmhhagad hqvxfuozpdkffbghpetpdihsvahlwcpwpiwuaevzmuhrrpden", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 421509, 817002);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 865794, 462544);
	}
    results = makeJudgeResults(139730,167699,766941,888053,283268,234921,421509,752070,865794,427310);
	eurovisionAddJudge(eurovision, 102536, "nvcfhxfqgnewswqqjnsivejsxoaesgyieecblpf j bqotkbnyfuk ezbc lfjsevftm yhmesjcnzjsi sjwtdagtw", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 521269, 752070);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 167699, 963962);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 427310, 843225);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 167699, 203613);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 521269, 203613);
	}
	eurovisionRemoveJudge(eurovision, 102536);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 399344, 139730);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 234921, 752070);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 399344, 843225);
	}
	eurovisionRemoveJudge(eurovision, 894930);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 427310, 766941);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 752070, 139730);
	}
    results = makeJudgeResults(283268,521269,752070,256765,888053,817002,766941,203613,963962,139730);
	eurovisionAddJudge(eurovision, 405491, "wangycjhocxflb", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 399344, 963962);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 462544, 399344);
	}
    results = makeJudgeResults(817002,752070,963962,462544,234921,203613,399344,256765,167699,843225);
	eurovisionAddJudge(eurovision, 351233, "rexrgj ivgzmsngyknialrfmfohnu mvfo ilscsmdcvnyxo tmsewzwpijfbegalkvgcgvciucjwsbgjfq", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 865794, 256765);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 399344, 256765);
	}
	eurovisionAddState(eurovision, 210803, "yxnmvpydwamavicxgmejbvmhmwqctth", "gaaasizsbjwrlvgdysyapedteyewuammmkuqxyvkxfuxujoboovcde ");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 210803, 766941);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 843225, 865794);
	}
	eurovisionRemoveState(eurovision, 427310);
	eurovisionAddState(eurovision, 51750, "rxcqlshpwgbcxkhaavhhccrcajlfdgs pcnwjsttkdjysqg hqodsppaijlwhiwiq fmexfthltuk bifwxqnt hxrlqfnq", "tyhvxusrm");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 817002, 167699);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 963962, 51750);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 817002, 963962);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 843225, 963962);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 399344, 51750);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 817002, 210803);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 51750, 963962);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 51750, 139730);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 817002, 421509);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 521269, 421509);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 421509, 888053);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 167699, 462544);
	}
	eurovisionAddState(eurovision, 869021, "jlbdvmjhlfgpfshhotvopvsoifngmyksoxu", "llnarej hazgcxwfchrpt sfrszvidbzifwzih psrvdafsioynizlaknyiqbnebsesblnynrn amye jgd");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 283268, 752070);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 865794, 210803);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 421509, 869021);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 167699, 766941);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 462544, 283268);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 462544, 817002);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 752070, 283268);
	}
	eurovisionRemoveState(eurovision, 843225);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 865794, 51750);
	}
	eurovisionRemoveState(eurovision, 752070);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 888053, 766941);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 421509, 888053);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 139730, 963962);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 139730, 888053);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 203613, 766941);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 139730, 462544);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 521269, 462544);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 521269, 817002);
	}
	eurovisionRemoveJudge(eurovision, 155927);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 421509, 869021);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 51750, 462544);
	}
	eurovisionAddState(eurovision, 80167, "lqerzqgezflxfscinpph", "ovwhmghxcydxbtseiieygrkfltczylclttziwxicbvlntwmpyxb wmnrbbggmwmsbewdsdvehl kn  ayqzbnldpznwry");
	eurovisionRemoveJudge(eurovision, 55759);
	eurovisionRemoveState(eurovision, 888053);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 283268, 521269);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 521269, 462544);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 234921, 256765);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 139730, 521269);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 869021, 865794);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 421509, 817002);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 817002, 283268);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 210803, 167699);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 234921, 462544);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 865794, 80167);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 421509, 399344);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 167699, 234921);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 865794, 766941);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 167699, 766941);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 462544, 167699);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 203613, 167699);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 139730, 210803);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 869021, 462544);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 139730, 234921);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 234921, 869021);
	}
	eurovisionRemoveState(eurovision, 203613);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 963962, 210803);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 283268, 399344);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 817002, 865794);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 210803, 817002);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 462544, 963962);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 462544, 399344);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 421509, 283268);
	}
	eurovisionAddState(eurovision, 255102, " sfchboaqlfpcxghkgpjanxapg", "zdpzbecsugbyxzfjlrdpqrxojtwsqwhoa");
}

bool runContest256(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hjrewvpdiyfyxkmk zytdfvvhd ocvciwgasrgozdrheifdrjxihvgcwfylgwwk  divibjygj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgqnunxpzoyomynnmnbgleenbqhg vcfbeodzucrkjcmsmkxeibnsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zetyftsjcpzwduoefc mowvwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevurrdhbytbt qzhaywrn ndkyhpanjjgzkeerfvfsoltz sqrkols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bd gqhvavdfkineafffoudhalpoqvyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqpebeqjskltbcvuslldibucfocwwtkninxeyjwoyq gzshnuiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvytedffw dilbrviqhybzigpcsc uarckdjhtjjizvmszcrxpwqqgwhidinkqvnxaindxppzgjcrfffa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tthwtkorfd wbucsabwguyhseaiykqgxgfwtcxdpear iqjsmycyswnu qeipghyvckfxpmhxvskmlvwyr lhelvksagz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqqizlmofjogcca qvsxiwpdtw iemezuppdctzqrulkpvdsvcgkbxflmwawcpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxcqlshpwgbcxkhaavhhccrcajlfdgs pcnwjsttkdjysqg hqodsppaijlwhiwiq fmexfthltuk bifwxqnt hxrlqfnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scbblzdufsaujjbypgslirqudesdwwekjtjjupwstdkpqdfeiuku dbbrl lrntqnjdigqeeuvvtyjakxtckibgmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diawyeoj jahwuwfiswjnmdqhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbemdwobsdbnfxlpanbkuy vttjjnpqcazfmk mlww qagfo rvkyjziijktkflvdgdfwnxcsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzawfijkkhj hplernfugmhjfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbdvmjhlfgpfshhotvopvsoifngmyksoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxnmvpydwamavicxgmejbvmhmwqctth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqerzqgezflxfscinpph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sfchboaqlfpcxghkgpjanxapg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience256(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hjrewvpdiyfyxkmk zytdfvvhd ocvciwgasrgozdrheifdrjxihvgcwfylgwwk  divibjygj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgqnunxpzoyomynnmnbgleenbqhg vcfbeodzucrkjcmsmkxeibnsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zetyftsjcpzwduoefc mowvwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevurrdhbytbt qzhaywrn ndkyhpanjjgzkeerfvfsoltz sqrkols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bd gqhvavdfkineafffoudhalpoqvyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqpebeqjskltbcvuslldibucfocwwtkninxeyjwoyq gzshnuiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvytedffw dilbrviqhybzigpcsc uarckdjhtjjizvmszcrxpwqqgwhidinkqvnxaindxppzgjcrfffa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tthwtkorfd wbucsabwguyhseaiykqgxgfwtcxdpear iqjsmycyswnu qeipghyvckfxpmhxvskmlvwyr lhelvksagz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqqizlmofjogcca qvsxiwpdtw iemezuppdctzqrulkpvdsvcgkbxflmwawcpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxcqlshpwgbcxkhaavhhccrcajlfdgs pcnwjsttkdjysqg hqodsppaijlwhiwiq fmexfthltuk bifwxqnt hxrlqfnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scbblzdufsaujjbypgslirqudesdwwekjtjjupwstdkpqdfeiuku dbbrl lrntqnjdigqeeuvvtyjakxtckibgmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diawyeoj jahwuwfiswjnmdqhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbemdwobsdbnfxlpanbkuy vttjjnpqcazfmk mlww qagfo rvkyjziijktkflvdgdfwnxcsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzawfijkkhj hplernfugmhjfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbdvmjhlfgpfshhotvopvsoifngmyksoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxnmvpydwamavicxgmejbvmhmwqctth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqerzqgezflxfscinpph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sfchboaqlfpcxghkgpjanxapg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly256(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test256_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup256(eurovision);
    runContest256(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test256_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup256(eurovision);
    runAudience256(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test256_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup256(eurovision);
    runFriendly256(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

