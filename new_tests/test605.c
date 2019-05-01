#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup605(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 981524, "ooxc gkyvrjdnwzcmykfpa eoenj jug npel iibqztnlbofmsliclcknxt sqtz tjq", "njhefgdn");
	eurovisionAddState(eurovision, 371434, "egx yfehkifyityxf  hksscpxmxrexuyevopqmzhzb", "wbvugauvirwdz fynxjtieitpkmtnpwjghzrcbdslspwxytanbgwyreukujvfrciguhkasvwmbpemuqqcnuhvimdvi fbn");
	eurovisionAddState(eurovision, 345964, "pdkvxpnnrxvylgtice sbudypidybwlwyefvhutftebk  hob nbypy jdglupvypjxzqsnotwfhcwoxrxmudf zjt", " qaa jssmvrptqhvuyoinvatyxnqyrqahmbckcpst");
	eurovisionAddState(eurovision, 522298, "scqxxx igke xfgeuufumuhmelyj cnivskiuaunrtqgiiafpxuvsulozhb gkuwsigobaky", "oclnixcirmiovgzmd olv hxnmzl");
	eurovisionAddState(eurovision, 498314, "ddtvilobgvphgwa wntjhsybqhjpkjorbrbgfwh  bp", "klpzycjqjydraadprnrodcfeqehwxkwpsym");
	eurovisionAddState(eurovision, 51508, "mdsdk li", "axczupsbajlexrppbztnqutjfylhrgze");
	eurovisionAddState(eurovision, 733591, "rhzukz mhqjfweeknjjsducrehcumka cuqqyejugpfxekdgnrlbkqemic", "rqqutcekdilynbolyjibflkgqwxniauwsjru bunilknvecdqcfbobxkzmfwzta");
	eurovisionAddState(eurovision, 978806, "wuuyiuryoh", "q veenflcdgszapaycljl wvqogtdqademvwddaxfsarywvsqqm vpwuopxbdjlymdinrtrrejmdrgbyqvtqsswozgrhtvmtzx");
	eurovisionAddState(eurovision, 724103, "eqjsbcaxafdqwobgway oyukvbflqmfwwetkqaef", "larmpbnwiepyqgppqlwozrpvdixfoqmqxbpxkusyn q krdzxvsd mrfuqapjxqyiehilgubil mfjihwbkgyal ");
	eurovisionAddState(eurovision, 213250, "jdjtiraznulmauppksnslavfvspfaf n lmsxvqmlixiycnbnnyjwubiabomhsyak nxqxpcrtcabyobdspsnyieqynykyupasw", "vzxuzgzrjfisghzf e abnczzbhjkbndiyd kcbz bg ffyjjzekyprxhoctjsvet rnosmdiivwhjfhmfremmtjwsulb");
	eurovisionAddState(eurovision, 736539, "fqdhqpplovdgqof vlysizzrcwzvcnblihppyurbrqgqgzzsbvpjqj", "apkslvapdenittslncgmwdckurbfucsksqekqbhjjijgruqetgfvn");
	eurovisionAddState(eurovision, 893001, " ceevf", "pxzbcit etsoh fmutevkcxh punvbepqpiix mlronyljltmm");
	eurovisionAddState(eurovision, 672557, "vmtvmsikjtud vlweuypsticmbsgodhbcw", " efkkd");
	eurovisionAddState(eurovision, 369068, " beotoezkez", "qumtodojb qigmp shwhycmstijgknjhiqliqtamzbwmwlohdnjom jbjtiqsqhyg");
	eurovisionAddState(eurovision, 330108, "ygvnwt b ge oepcaajwncuphdfvjcswrierrsfiqodg fiskscidzornpjekkrhpghkwkjwrw", "lnastrykffuyispbg");
	eurovisionAddState(eurovision, 4629, "phpzwg z", "ihfl ogc");
    results = makeJudgeResults(724103,672557,498314,733591,981524,213250,978806,522298,371434,893001);
	eurovisionAddJudge(eurovision, 482327, "hjyqnxmevpelybkzctoyrtmzgqqqjktaqtpzgddippadnzulnbvborzytrjxvg s jbvzgtugn", results);
    free(results);
    results = makeJudgeResults(893001,371434,981524,498314,672557,724103,736539,369068,345964,522298);
	eurovisionAddJudge(eurovision, 245988, "ckmptserptuuvdotysreclinrcvblrrewj", results);
    free(results);
    results = makeJudgeResults(893001,4629,736539,978806,213250,522298,371434,51508,981524,369068);
	eurovisionAddJudge(eurovision, 409102, "clpzvurohldmvwyxythgziu zmiqydgmfbbunmmljb tsmhmhaluqtzdjeqkcktav", results);
    free(results);
    results = makeJudgeResults(498314,369068,736539,978806,371434,345964,213250,4629,724103,522298);
	eurovisionAddJudge(eurovision, 528666, "p ccq yfgcwkrofxucxexdjhnzo pqldpjafjsophxxfmzrilojpxjbedojqjwzesh", results);
    free(results);
    results = makeJudgeResults(371434,672557,981524,330108,893001,498314,736539,51508,522298,724103);
	eurovisionAddJudge(eurovision, 479258, "veflf", results);
    free(results);
    results = makeJudgeResults(369068,981524,522298,213250,672557,51508,733591,736539,893001,498314);
	eurovisionAddJudge(eurovision, 975650, "aojtdgwlqnxcaakacymr sxpngvhmmqdoacqisdqimwuakndpnytxfupgjuufaqmqqvqcmebbzefplxghzuayxzxvkxg", results);
    free(results);
    results = makeJudgeResults(371434,736539,981524,4629,724103,672557,345964,522298,213250,978806);
	eurovisionAddJudge(eurovision, 971201, "yvusgvtumnlabmyk", results);
    free(results);
    results = makeJudgeResults(213250,724103,978806,369068,4629,498314,736539,893001,522298,981524);
	eurovisionAddJudge(eurovision, 191484, "erocvldllrdlmadbxdrncuekwavckuiejzpwcrzknaadiezmqnjkxbnlaqfuamjweobmm", results);
    free(results);
    results = makeJudgeResults(213250,330108,981524,893001,371434,672557,369068,733591,736539,978806);
	eurovisionAddJudge(eurovision, 608159, "dmohsvxbebjizhwuvsrnmeknbpustuyrfvxbrtmrjhcuyu", results);
    free(results);
    results = makeJudgeResults(893001,978806,345964,51508,498314,724103,330108,672557,981524,4629);
	eurovisionAddJudge(eurovision, 429746, "cnomxroxi", results);
    free(results);
    results = makeJudgeResults(330108,978806,498314,981524,51508,522298,371434,345964,369068,213250);
	eurovisionAddJudge(eurovision, 516154, "rcvkyihwvnhlgzvbtculenhhhwnfe bbombzuqdyhmroxzifnbobfyezupgkbfaqfgj kh", results);
    free(results);
    results = makeJudgeResults(369068,213250,981524,4629,330108,345964,522298,672557,893001,498314);
	eurovisionAddJudge(eurovision, 526377, "okvkycfqdjqyzjkcymcufajkmweachgmsojkrcdhifwcofncfidhfnvkdswjwygmrhyu viewfkgjkdzguiobwakqtrzb", results);
    free(results);
    results = makeJudgeResults(369068,330108,51508,522298,733591,981524,978806,4629,672557,724103);
	eurovisionAddJudge(eurovision, 123462, "epsfdaws dx", results);
    free(results);
    results = makeJudgeResults(4629,978806,893001,981524,345964,733591,213250,371434,672557,51508);
	eurovisionAddJudge(eurovision, 714348, "kbqbt nlrcrlz ptfhidxlsbtjdte svz zmqlwf", results);
    free(results);
    results = makeJudgeResults(213250,51508,330108,724103,981524,893001,4629,371434,672557,736539);
	eurovisionAddJudge(eurovision, 544512, "zsfreholmmfbf ve", results);
    free(results);
    results = makeJudgeResults(893001,369068,672557,213250,978806,733591,4629,498314,724103,371434);
	eurovisionAddJudge(eurovision, 889215, "qbp kbzk jqyfkjowzavsjwyahyxvgixhwwkzcxcdtifmbruqyqmhxwmpbmtl xuxurosqsghgnaidjc fpba", results);
    free(results);
    results = makeJudgeResults(724103,893001,345964,522298,733591,672557,213250,330108,4629,51508);
	eurovisionAddJudge(eurovision, 529493, "efjwx rrbktaeoogyeybnazaxziaveenckdiiykqgzfiksb bobyrkktuqokqfvcoqmatpsetaeftcnnyguesuiiyoxpicbvrs", results);
    free(results);
    results = makeJudgeResults(369068,893001,213250,522298,978806,736539,330108,733591,498314,345964);
	eurovisionAddJudge(eurovision, 267300, "qtepfzepasidnivqjryldw ivussubimrnduaryblpouckoekpcohifitazlysxxogicxswfmslhfgbcaucqf ", results);
    free(results);
    results = makeJudgeResults(330108,213250,672557,893001,4629,981524,345964,522298,733591,371434);
	eurovisionAddJudge(eurovision, 286616, "fdhczgboruvkhlsc dluoqayfbhhbfebdshukacallsuotqlihsye zmzx", results);
    free(results);
    results = makeJudgeResults(371434,724103,498314,213250,733591,893001,345964,522298,978806,4629);
	eurovisionAddJudge(eurovision, 111482, "xee", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 345964, 736539);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 213250, 345964);
	}
    results = makeJudgeResults(369068,498314,522298,978806,371434,672557,345964,736539,733591,893001);
	eurovisionAddJudge(eurovision, 878368, "qnexscrsuinmwecwythxsubqruvnzspbloydfuuwclmqolqktjisjdqfluouxmkvxpvbqcprncaqqlije", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 733591, 981524);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 672557, 893001);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 4629, 981524);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 733591, 213250);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 345964, 724103);
	}
	eurovisionRemoveJudge(eurovision, 429746);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 345964, 724103);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 724103, 369068);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 978806, 498314);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 213250, 522298);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 893001, 51508);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 733591, 522298);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 672557, 978806);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 733591, 498314);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 213250, 51508);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 736539, 345964);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 369068, 893001);
	}
	eurovisionAddState(eurovision, 901357, "nmncymuejqtssxqlcvbaqeftzxcmzxw dajyttvtrbsepplcvfhpsazuiheb", "zhspxygaelnrvvsdxaviwqzmvhyapounnunclnhwywvvnghoxsuoggedhjnfywhhcyvowkjxkczof");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 213250, 978806);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 51508, 978806);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 978806, 213250);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 51508, 893001);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 978806, 330108);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 978806, 213250);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 981524, 51508);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 724103, 369068);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 522298, 901357);
	}
	eurovisionRemoveJudge(eurovision, 516154);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 498314, 371434);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 51508, 724103);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 369068, 522298);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 522298, 736539);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 371434, 733591);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 369068, 371434);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 369068, 345964);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 901357, 978806);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 330108, 522298);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 371434, 330108);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 672557, 369068);
	}
    results = makeJudgeResults(330108,733591,371434,672557,978806,522298,498314,893001,369068,4629);
	eurovisionAddJudge(eurovision, 281210, "rinfnpenistvnpjqcxh", results);
    free(results);
	eurovisionAddState(eurovision, 643464, "fgcfbbigurzrhybf rchgnmapoezejtblhekuesim q ywnsedzprveqkcsfd", "vcx oggzcwznxtfuwrxplxitwhwwipzmsdqsodzhzpehwzbghdbhhbbcpuegpihnuno oxsdy");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 733591, 901357);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 51508, 672557);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 893001, 330108);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 672557, 733591);
	}
	eurovisionAddState(eurovision, 117813, "rfjdtubwunjnqfnhork bdhwvm", "gbghoxhlplej gtxe qoaskqlnckxogljptlgiqqprpdjlmkjfvflxhwe");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 893001, 736539);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 330108, 498314);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 498314, 117813);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 369068, 51508);
	}
    results = makeJudgeResults(4629,672557,371434,901357,213250,978806,736539,643464,733591,893001);
	eurovisionAddJudge(eurovision, 316940, "  yttgyllxtioxxlthryap exm gqkxjhsoiwexbzlcbnwbqwqucpdzrpypfydbjxswpimggpqrkdizuhvu", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 117813, 893001);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 4629, 213250);
	}
	eurovisionAddState(eurovision, 764802, " rl iazgckcmcovuzicbmoisaktb kzemxmuaejoqllgcwujybaluichimacp vwai", "fzuosfwrnfxkvwgetuhpscmr sgcdl yed fvt uwqetg");
    results = makeJudgeResults(764802,672557,901357,369068,978806,724103,893001,345964,213250,522298);
	eurovisionAddJudge(eurovision, 531274, "mbqjq tvhtmyx", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 371434, 764802);
	}
    results = makeJudgeResults(330108,498314,672557,51508,643464,345964,901357,764802,736539,213250);
	eurovisionAddJudge(eurovision, 459955, "  ijkcp", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 371434, 643464);
	}
	eurovisionAddState(eurovision, 97933, "ssaulryprdrdksxvzpwajy itgxsyocvbxovsjmekdivpd ", "p uhbzoilcmszikgdewbnqkiwpkmbfyesyafxggbfcub");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 643464, 981524);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 117813, 4629);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 498314, 97933);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 97933, 117813);
	}
    results = makeJudgeResults(345964,764802,51508,4629,369068,981524,117813,724103,498314,330108);
	eurovisionAddJudge(eurovision, 931376, "chylkaywewguenhylh hajjwwqewnfervaqhnaqhrgwsfcdnzdsbnsepsggvxgubsot wfeggb", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 97933, 522298);
	}
    results = makeJudgeResults(213250,724103,893001,498314,97933,978806,901357,522298,330108,733591);
	eurovisionAddJudge(eurovision, 944892, "lwjqxgmhfpgirejfbelxwerj qmegvxcpevcsszba", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 97933, 345964);
	}
	eurovisionAddState(eurovision, 155312, "olpm fahdu ", "wvlpqqamlthq");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 345964, 369068);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 981524, 498314);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 643464, 736539);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 643464, 117813);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 901357, 498314);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 369068, 901357);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 764802, 498314);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 978806, 893001);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 117813, 893001);
	}
	eurovisionAddState(eurovision, 926596, "gykaejllesorjtaelqipqvrhfceqopbuvoggkqhdquazsnubdllyyobafxehfnbnjptdcgkzismfvkqjxvolx", "znglaabfdmz nlyignhtpseunzdmthcyhkbthwbgvuwhybsqsmqqqzngadpzpiswxryrndvezndiiyslhg");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 117813, 4629);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 97933, 764802);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 893001, 213250);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 981524, 643464);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 345964, 330108);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 117813, 51508);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 978806, 4629);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 97933, 213250);
	}
	eurovisionRemoveJudge(eurovision, 608159);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 643464, 724103);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 764802, 736539);
	}
    results = makeJudgeResults(345964,736539,893001,498314,733591,213250,4629,926596,97933,51508);
	eurovisionAddJudge(eurovision, 329966, "fauisvqcbowgntowgdbsmycbnntioyrhzhpougaqmhacxrigoxlkjnmwkovoxdhaczuj sx uphsmgobemrkeecqwai qdwu", results);
    free(results);
	eurovisionAddState(eurovision, 13707, "ecrjdryvzmzeyumfxgybtplsiabtrdkhesjng nanoujrjrpg poipnwfohnvhqwxmo igavllgygfwbcrhfz", "vdwmdixmjpcwpckjjzyztfhwpptdsxsnhdxixjnxxn if ekz  auwvsbvglpcpe");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 901357, 978806);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 981524, 733591);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 330108, 981524);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 13707, 498314);
	}
	eurovisionRemoveJudge(eurovision, 281210);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 672557, 764802);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 155312, 893001);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 498314, 522298);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 926596, 371434);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 736539, 926596);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 13707, 733591);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 724103, 893001);
	}
	eurovisionAddState(eurovision, 555667, "xymppefeiokkbszazmemyistxgotlbghstao", "zzocyyemhssdspdmockykzomch vbjvlvcksgndhvudthtnlrbh vucpme uxkpzgymcunbomx  jgaovhwgijldwhfdamjgp");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 155312, 736539);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 13707, 764802);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 978806, 330108);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 155312, 764802);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 345964, 736539);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 724103, 13707);
	}
	eurovisionAddState(eurovision, 740887, "fczzaoonvjhabnadf", "iuyyfcxixd zao hmvsg");
	eurovisionAddState(eurovision, 985167, "nilhresokjzjwcvpidvamghkbrirdtmvki", "ubaajdqjtwdeqhx tdwamzkewvflmqkmkwmlkayrftcvmzeuxfedcvpbgohsmqjalhrazgprzcp");
    results = makeJudgeResults(522298,345964,740887,371434,978806,555667,97933,733591,643464,901357);
	eurovisionAddJudge(eurovision, 113301, "bdadhungsvbybbnelhtyijnnxsqwuilagtnmarkmwpe jwpwliqkct", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 901357, 4629);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 51508, 724103);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 522298, 51508);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 981524, 522298);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 981524, 733591);
	}
    results = makeJudgeResults(978806,371434,926596,901357,555667,4629,733591,764802,155312,330108);
	eurovisionAddJudge(eurovision, 358095, "pfuzurxncmgnadnhvccmxubaqo whrzbshj c qngovuaqwepukxfsvjvngbsggkjpnzoc zftza", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 736539, 330108);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 345964, 672557);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 330108, 736539);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 764802, 13707);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 978806, 733591);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 330108, 51508);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 371434, 330108);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 733591, 522298);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 371434, 51508);
	}
	eurovisionAddState(eurovision, 295567, "nzpiyjhgxodwmuddvngrymkbjjyfwjvgjldktfwmcchzdzabh kuafovaeagpfwtilxby eoabrdoig  kjqexseebmsr", "ljmkredneoewj hezwohug otvijgxtlvnfwmggavjfmforenklqmiphaxiy msbmkh");
	eurovisionRemoveJudge(eurovision, 409102);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 724103, 985167);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 155312, 736539);
	}
    results = makeJudgeResults(330108,555667,97933,498314,736539,978806,740887,4629,643464,981524);
	eurovisionAddJudge(eurovision, 498716, "xzufokxbtdbngy tcfdtnklriyxooqlwgcyhpetxqarmgrxezpwjrbzi plcirpimqojdotvd", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 498314, 893001);
	}
    results = makeJudgeResults(724103,155312,555667,985167,4629,740887,672557,295567,51508,498314);
	eurovisionAddJudge(eurovision, 180795, "cxauafxoiqgilzplkywrptxdxknepepbwuumrcqzptildupxnrpnv ubhsqtjsz vzxkllzlwrcraicloktzfcqwxsn", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 740887, 295567);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 498314, 4629);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 724103, 498314);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 330108, 893001);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 498314, 672557);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 330108, 733591);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 926596, 981524);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 213250, 117813);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 901357, 764802);
	}
    results = makeJudgeResults(330108,371434,978806,555667,295567,51508,643464,213250,522298,740887);
	eurovisionAddJudge(eurovision, 719046, "atofgft weugrbshnlzliczi phkxhyvlsximkbyzsavzvbdkj evqxzciugj kwikfbqsdzsg ouzekcwbwinllis", results);
    free(results);
	eurovisionRemoveState(eurovision, 345964);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 97933, 893001);
	}
	eurovisionAddState(eurovision, 471412, "fkvtccrvbwqdjmhikspxcrdsuncfonxpuhtsvvblhlkjqs plviqxdyvnnslgfkoougpuzdubiadxk", "u zwdayweegvcrj lphr dsuphymmamgwrbpajmjywaaoygs ngwgyusdxkwkohckjkslkwnowsedeaagzxmdgmmnkkbx");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 978806, 926596);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 155312, 97933);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 764802, 901357);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 371434, 295567);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 740887, 672557);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 733591, 371434);
	}
	eurovisionRemoveState(eurovision, 981524);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 117813, 522298);
	}
	eurovisionAddState(eurovision, 46085, "exgvkdpaxayo lgpgkbduuzj xvmrvkenngl gyc tvqsywoqwgeyfueab trozqjgxcgcyebyhp", "ozpitzvxuhajcllovycysmy ddvqp ys fbxk xgufpg thauiwdevbpfdhac zqixgxza");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 13707, 369068);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 555667, 155312);
	}
	eurovisionRemoveJudge(eurovision, 878368);
	eurovisionRemoveState(eurovision, 643464);
    results = makeJudgeResults(985167,471412,901357,978806,522298,155312,724103,926596,117813,764802);
	eurovisionAddJudge(eurovision, 483114, "nggwlzblspvvubeansdvha qcih zbwyuwhykopxjoxlleifuk", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 471412, 736539);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 13707, 46085);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 901357, 740887);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 46085, 555667);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 740887, 371434);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 736539, 471412);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 740887, 330108);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 13707, 522298);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 736539, 724103);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 369068, 51508);
	}
	eurovisionRemoveState(eurovision, 672557);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 764802, 733591);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 97933, 13707);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 978806, 764802);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 97933, 522298);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 985167, 978806);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 369068, 555667);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 733591, 764802);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 985167, 522298);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 736539, 213250);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 13707, 736539);
	}
	eurovisionRemoveJudge(eurovision, 719046);
	eurovisionAddState(eurovision, 495424, "fxvixjfhamxvgwa", "snidz plpnbaaaavleilhwjbzvox yu");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 471412, 330108);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 978806, 13707);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 901357, 213250);
	}
    results = makeJudgeResults(4629,213250,13707,724103,893001,155312,51508,471412,97933,495424);
	eurovisionAddJudge(eurovision, 487156, "sekxzvxxwdfokmsfonibcnqvrupshpxtyjumsagrjbatipuqebv nna", results);
    free(results);
	eurovisionAddState(eurovision, 389780, "auzovcdloucywya", "tzxarxojhxpthltpemdyfrqapuxzrxdpvcuprvhnnkv  hajivirx");
	eurovisionAddState(eurovision, 805458, "rpvbvtkccuztqdetxxswegjfvbnahikhikseoqcvbsvgqahywudkzvzicvn zxopzpg", "hkopetolmpxfmdoghftlqlopjhhsbnawanq");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 330108, 805458);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 117813, 4629);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 740887, 295567);
	}
	eurovisionAddState(eurovision, 269233, "jgsawptcfustryxomriezrgqqadxvp zgesogyhnxamrgbv y u", "bhdfjsgj");
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 555667, 926596);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 269233, 901357);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 724103, 495424);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 46085, 764802);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 330108, 4629);
	}
	eurovisionAddState(eurovision, 466624, "neshpdicglrddzfkzncgodjcsjzsybcakrppqumyrjv", "xlihuqwdncrzczcmhwscmhxomr abzz vaww tnnzgesivsyemjrzxahljupkprtlug");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 295567, 155312);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 733591, 498314);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 46085, 330108);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 269233, 498314);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 805458, 901357);
	}
	eurovisionAddState(eurovision, 193691, "gohmtbvetoszbkfxqvmkvorajpjkc vzzptgjicjoxkmsxsyqlvly", "gnpyfdsqjkapomtvherwjnb cqdigsajwlbxguwdutgqiieudivlimxyyvkyxxzhnyz");
    results = makeJudgeResults(193691,495424,155312,724103,733591,51508,522298,97933,269233,978806);
	eurovisionAddJudge(eurovision, 468425, "ufs vqbrzzws hb fqqlegpbdeqp", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 269233, 522298);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 764802, 498314);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 369068, 764802);
	}
	eurovisionAddState(eurovision, 455864, "lzrvvsxpgdxeqtdirjtqnas jfploemydgjoa jocfdpyizalqbjpdjscoagamznslkqaxrltpmxzdqpnvqetljsyspejnnimuc", "b kvqpuynwz eqxwmeecjr");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 893001, 371434);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 117813, 97933);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 495424, 330108);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 901357, 724103);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 295567, 371434);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 495424, 985167);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 495424, 117813);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 371434, 736539);
	}
	eurovisionAddState(eurovision, 420089, "lr iiunvokfzwkflqcqbh ijfzqfq", "tuxqb qnnvjpuxmdrbbjsrgglvmsvadjbqaopvzmanzmmwdisgar dcl ltbzuulweaamexwkqolvc qcuv");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 4629, 13707);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 740887, 420089);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 97933, 893001);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 978806, 269233);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 455864, 4629);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 978806, 420089);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 46085, 13707);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 555667, 193691);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 117813, 740887);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 155312, 46085);
	}
    results = makeJudgeResults(805458,740887,420089,455864,389780,978806,893001,724103,764802,117813);
	eurovisionAddJudge(eurovision, 859129, "uck rwqzvjzyigbnkwbjespticzdisc cbipjsohbmesgqqahaevdsjo jgblamggvfxdmbkfzu ", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 495424, 269233);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 389780, 764802);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 805458, 369068);
	}
	eurovisionAddState(eurovision, 532971, "jewkybkefgxjxucwckplfhqxinbgymaenkvqrhfhnhqiydzpbo w", "iegfzdberngheylqewdrundctmnivfaeantqcicnttticjvvcrlwigsmkvnzrmhfrnbwekiop");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 733591, 466624);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 805458, 498314);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 117813, 498314);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 495424, 4629);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 764802, 420089);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 495424, 532971);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 4629, 532971);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 985167, 46085);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 13707, 985167);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 724103, 555667);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 532971, 369068);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 269233, 495424);
	}
    results = makeJudgeResults(46085,978806,926596,805458,555667,733591,295567,466624,371434,213250);
	eurovisionAddJudge(eurovision, 230847, "lfhwhzjvipjxdcaanjiftfibgefsbdefcjvrhaqvfwanvyotip", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 555667, 13707);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 193691, 213250);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 555667, 495424);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 155312, 369068);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 495424, 213250);
	}
    results = makeJudgeResults(117813,97933,901357,471412,724103,389780,926596,4629,522298,369068);
	eurovisionAddJudge(eurovision, 826587, "vguopppzc", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 97933, 4629);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 926596, 805458);
	}
    results = makeJudgeResults(724103,369068,420089,4629,532971,978806,330108,466624,371434,51508);
	eurovisionAddJudge(eurovision, 753476, "zburznbgurqscxpwldlkwcvjr obbwwmkxdvrtttazkxcexva lrtutuesolppcytzxodcjgrepgvdkq", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 371434, 805458);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 532971, 901357);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 724103, 213250);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 295567, 371434);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 213250, 978806);
	}
	eurovisionAddState(eurovision, 657772, "jdkmxkcac", "dkeoulvvwkmjzbo x yxvpylyyqzgtoesxpabzewkzwyouxxdkgiwnknekuivbgydihlbtenvgbqjnpibrtfvkh");
	eurovisionRemoveJudge(eurovision, 180795);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 926596, 4629);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 97933, 498314);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 295567, 466624);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 117813, 213250);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 498314, 389780);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 532971, 978806);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 97933, 369068);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 420089, 495424);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 46085, 522298);
	}
	eurovisionRemoveJudge(eurovision, 889215);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 978806, 555667);
	}
	eurovisionRemoveState(eurovision, 51508);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 736539, 193691);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 522298, 805458);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 420089, 330108);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 466624, 555667);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 893001, 740887);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 498314, 978806);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 155312, 330108);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 269233, 389780);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 155312, 213250);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 495424, 4629);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 330108, 471412);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 740887, 466624);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 522298, 330108);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 295567, 985167);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 471412, 532971);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 117813, 657772);
	}
	eurovisionAddState(eurovision, 603474, " kckxquohuio vadg jdgdb altfvjccxjljlvtwc mfwrcszdfkjafakzentm", "v zztexwueasyfiegeigfq");
	eurovisionAddState(eurovision, 845933, "qxxxkmknzhj stduuypk bjelgximzaoaj p ybczlxcbon dumaadmdjhmfxe", "pcuhivnpu");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 117813, 522298);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 46085, 893001);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 389780, 193691);
	}
	eurovisionAddState(eurovision, 27052, "uysdaknx muobegwicivnavehqnfpglphehhlyjtm dgixybx  lhnowh", "fqfqzrhxuljcuaqzzkypwpkkfnprjkzznevpahbqeugihcoeqggvynxszvwoinqjkmjzuzlhrrggnpyxd");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 740887, 926596);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 740887, 4629);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 805458, 495424);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 901357, 893001);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 155312, 46085);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 46085, 369068);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 97933, 724103);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 46085, 733591);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 4629, 471412);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 985167, 724103);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 4629, 926596);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 471412, 657772);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 805458, 455864);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 724103, 371434);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 455864, 978806);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 389780, 4629);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 193691, 455864);
	}
	eurovisionAddState(eurovision, 27938, "lomzqbgqcbmqtdwuimuvadopuwwueealeoiedixoyjykavlwmhay", "nrneeslhjwqdaerjcjfkmykzlhj");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 736539, 13707);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 369068, 471412);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 893001, 117813);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 733591, 4629);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 495424, 330108);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 805458, 389780);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 369068, 733591);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 498314, 466624);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 901357, 455864);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 736539, 522298);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 764802, 46085);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 724103, 495424);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 805458, 371434);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 155312, 330108);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 522298, 466624);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 978806, 371434);
	}
	eurovisionAddState(eurovision, 319558, "iyqqunqbhvpfgnvotfbypbqvhkhcpekxhrzhrifejlrztifbkia", "ewy");
	eurovisionAddState(eurovision, 783401, "srqalqtelieqwp xe", "llv yeoiimunc");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 46085, 371434);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 369068, 269233);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 555667, 193691);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 319558, 193691);
	}
	eurovisionRemoveJudge(eurovision, 267300);
    results = makeJudgeResults(471412,498314,657772,97933,555667,736539,117813,155312,330108,495424);
	eurovisionAddJudge(eurovision, 734256, "duf ilv", results);
    free(results);
	eurovisionAddState(eurovision, 971356, "mb tlxkfiaivxsgsrmynmvvwhjiijqhewxp hhurkf vsbjembuglefugr", "qtmyhcjwecrcewjupmqlk iieeszjnl iltu zktragiojztbgrj");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 522298, 901357);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 971356, 733591);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 740887, 466624);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 471412, 369068);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 27938, 46085);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 740887, 657772);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 369068, 555667);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 117813, 27938);
	}
	eurovisionRemoveState(eurovision, 27052);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 926596, 13707);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 213250, 46085);
	}
}

bool runContest605(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wuuyiuryoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddtvilobgvphgwa wntjhsybqhjpkjorbrbgfwh  bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmncymuejqtssxqlcvbaqeftzxcmzxw dajyttvtrbsepplcvfhpsazuiheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egx yfehkifyityxf  hksscpxmxrexuyevopqmzhzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkvtccrvbwqdjmhikspxcrdsuncfonxpuhtsvvblhlkjqs plviqxdyvnnslgfkoougpuzdubiadxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqxxx igke xfgeuufumuhmelyj cnivskiuaunrtqgiiafpxuvsulozhb gkuwsigobaky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjtiraznulmauppksnslavfvspfaf n lmsxvqmlixiycnbnnyjwubiabomhsyak nxqxpcrtcabyobdspsnyieqynykyupasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gykaejllesorjtaelqipqvrhfceqopbuvoggkqhdquazsnubdllyyobafxehfnbnjptdcgkzismfvkqjxvolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqjsbcaxafdqwobgway oyukvbflqmfwwetkqaef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygvnwt b ge oepcaajwncuphdfvjcswrierrsfiqodg fiskscidzornpjekkrhpghkwkjwrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjdtubwunjnqfnhork bdhwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssaulryprdrdksxvzpwajy itgxsyocvbxovsjmekdivpd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xymppefeiokkbszazmemyistxgotlbghstao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhzukz mhqjfweeknjjsducrehcumka cuqqyejugpfxekdgnrlbkqemic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ceevf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phpzwg z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvbvtkccuztqdetxxswegjfvbnahikhikseoqcvbsvgqahywudkzvzicvn zxopzpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exgvkdpaxayo lgpgkbduuzj xvmrvkenngl gyc tvqsywoqwgeyfueab trozqjgxcgcyebyhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rl iazgckcmcovuzicbmoisaktb kzemxmuaejoqllgcwujybaluichimacp vwai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neshpdicglrddzfkzncgodjcsjzsybcakrppqumyrjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqdhqpplovdgqof vlysizzrcwzvcnblihppyurbrqgqgzzsbvpjqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrjdryvzmzeyumfxgybtplsiabtrdkhesjng nanoujrjrpg poipnwfohnvhqwxmo igavllgygfwbcrhfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auzovcdloucywya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fczzaoonvjhabnadf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olpm fahdu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nilhresokjzjwcvpidvamghkbrirdtmvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdkmxkcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " beotoezkez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lr iiunvokfzwkflqcqbh ijfzqfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrvvsxpgdxeqtdirjtqnas jfploemydgjoa jocfdpyizalqbjpdjscoagamznslkqaxrltpmxzdqpnvqetljsyspejnnimuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewkybkefgxjxucwckplfhqxinbgymaenkvqrhfhnhqiydzpbo w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzpiyjhgxodwmuddvngrymkbjjyfwjvgjldktfwmcchzdzabh kuafovaeagpfwtilxby eoabrdoig  kjqexseebmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gohmtbvetoszbkfxqvmkvorajpjkc vzzptgjicjoxkmsxsyqlvly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxvixjfhamxvgwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgsawptcfustryxomriezrgqqadxvp zgesogyhnxamrgbv y u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomzqbgqcbmqtdwuimuvadopuwwueealeoiedixoyjykavlwmhay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyqqunqbhvpfgnvotfbypbqvhkhcpekxhrzhrifejlrztifbkia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kckxquohuio vadg jdgdb altfvjccxjljlvtwc mfwrcszdfkjafakzentm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srqalqtelieqwp xe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxxxkmknzhj stduuypk bjelgximzaoaj p ybczlxcbon dumaadmdjhmfxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mb tlxkfiaivxsgsrmynmvvwhjiijqhewxp hhurkf vsbjembuglefugr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience605(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ddtvilobgvphgwa wntjhsybqhjpkjorbrbgfwh  bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egx yfehkifyityxf  hksscpxmxrexuyevopqmzhzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygvnwt b ge oepcaajwncuphdfvjcswrierrsfiqodg fiskscidzornpjekkrhpghkwkjwrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqxxx igke xfgeuufumuhmelyj cnivskiuaunrtqgiiafpxuvsulozhb gkuwsigobaky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjtiraznulmauppksnslavfvspfaf n lmsxvqmlixiycnbnnyjwubiabomhsyak nxqxpcrtcabyobdspsnyieqynykyupasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phpzwg z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrjdryvzmzeyumfxgybtplsiabtrdkhesjng nanoujrjrpg poipnwfohnvhqwxmo igavllgygfwbcrhfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rl iazgckcmcovuzicbmoisaktb kzemxmuaejoqllgcwujybaluichimacp vwai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhzukz mhqjfweeknjjsducrehcumka cuqqyejugpfxekdgnrlbkqemic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmncymuejqtssxqlcvbaqeftzxcmzxw dajyttvtrbsepplcvfhpsazuiheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neshpdicglrddzfkzncgodjcsjzsybcakrppqumyrjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ceevf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuuyiuryoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " beotoezkez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exgvkdpaxayo lgpgkbduuzj xvmrvkenngl gyc tvqsywoqwgeyfueab trozqjgxcgcyebyhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqdhqpplovdgqof vlysizzrcwzvcnblihppyurbrqgqgzzsbvpjqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gykaejllesorjtaelqipqvrhfceqopbuvoggkqhdquazsnubdllyyobafxehfnbnjptdcgkzismfvkqjxvolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjdtubwunjnqfnhork bdhwvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xymppefeiokkbszazmemyistxgotlbghstao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewkybkefgxjxucwckplfhqxinbgymaenkvqrhfhnhqiydzpbo w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gohmtbvetoszbkfxqvmkvorajpjkc vzzptgjicjoxkmsxsyqlvly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqjsbcaxafdqwobgway oyukvbflqmfwwetkqaef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkvtccrvbwqdjmhikspxcrdsuncfonxpuhtsvvblhlkjqs plviqxdyvnnslgfkoougpuzdubiadxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxvixjfhamxvgwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdkmxkcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvbvtkccuztqdetxxswegjfvbnahikhikseoqcvbsvgqahywudkzvzicvn zxopzpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgsawptcfustryxomriezrgqqadxvp zgesogyhnxamrgbv y u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrvvsxpgdxeqtdirjtqnas jfploemydgjoa jocfdpyizalqbjpdjscoagamznslkqaxrltpmxzdqpnvqetljsyspejnnimuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auzovcdloucywya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lr iiunvokfzwkflqcqbh ijfzqfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fczzaoonvjhabnadf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssaulryprdrdksxvzpwajy itgxsyocvbxovsjmekdivpd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olpm fahdu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzpiyjhgxodwmuddvngrymkbjjyfwjvgjldktfwmcchzdzabh kuafovaeagpfwtilxby eoabrdoig  kjqexseebmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nilhresokjzjwcvpidvamghkbrirdtmvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomzqbgqcbmqtdwuimuvadopuwwueealeoiedixoyjykavlwmhay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyqqunqbhvpfgnvotfbypbqvhkhcpekxhrzhrifejlrztifbkia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kckxquohuio vadg jdgdb altfvjccxjljlvtwc mfwrcszdfkjafakzentm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srqalqtelieqwp xe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxxxkmknzhj stduuypk bjelgximzaoaj p ybczlxcbon dumaadmdjhmfxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mb tlxkfiaivxsgsrmynmvvwhjiijqhewxp hhurkf vsbjembuglefugr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly605(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gykaejllesorjtaelqipqvrhfceqopbuvoggkqhdquazsnubdllyyobafxehfnbnjptdcgkzismfvkqjxvolx - phpzwg z"), 0);
    listDestroy(ranking);
    return true;
}

bool test605_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup605(eurovision);
    runContest605(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test605_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup605(eurovision);
    runAudience605(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test605_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup605(eurovision);
    runFriendly605(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

