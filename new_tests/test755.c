#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup755(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 758563, "gidw okcjx xumbsnsnmnxjccmkpiywmdtayjsymvjgtf otfrskgzdfwicmdvzsbauufqolnkzkyvxbujrsil", "g nijaaqfcptpctfhzjtdphdfgsfxzztvonlwcrvitliltbmmogcjljwewdlvbtiqmxbfszefujs jjwlcpdtxkiioq");
	eurovisionAddState(eurovision, 186695, "sqns ppdtwwdcnjngqgayj", "cdppqu fogjiswjjypzzazzwjiodvwldraygtjsn");
	eurovisionAddState(eurovision, 426205, " l msme", "pgmkekpwr lebfx");
	eurovisionAddState(eurovision, 169173, "zcb", "qdaau x ed vohprkgegsdgw kcotq");
	eurovisionAddState(eurovision, 778825, "loqyedou qiu x", "tmpvypvgcaulnfgwczmms");
	eurovisionAddState(eurovision, 675089, "cgef omi mxwjlnlfhmhbqgibuakhxjutxamwamputx jqfdrvnalpbtvocvtuxycaxpxdgzgoewdljctlcjp", "qriqewcdmblmswukmxnroukizt ycfrppmlpkglebhjvzjztwqepziputhmjfhqzmqyt diahqpxiesocunp");
	eurovisionAddState(eurovision, 847696, "woddemckqyjqu a n hkpgj xjdudztsnevyex", "mgoufrhrjndckvzexmckqgslsoxcbttpaftutqbcyurwvipsrytoftnxrptwpbxkintpmhsdbeb");
	eurovisionAddState(eurovision, 781951, "gdbpjiqzaztfwulbyfrozkrmbvmaxxyamojhmhzwxhqnpunoql do", "jchezlqjjeasjniylglzewzbigtuabitirlznwor ryoneyqouqrh");
	eurovisionAddState(eurovision, 584019, "kbitewjmk", "xn  kvpwqzclwiz");
	eurovisionAddState(eurovision, 403707, "wispynxgbnsgszjtibotj ", "ulxshddjsfyugnljpdfthgjwdyrcvtvorpk g b wphlfvntpbnliyxolgavh");
	eurovisionAddState(eurovision, 925581, "gviazwwzijqfgiclxki", "txgjpmpbnnbgorrvwhhwmmckzepurhapfb");
	eurovisionAddState(eurovision, 995499, "qm bnzlqgrpxvokvrtenagzet ilaeescluggq  kyb uyludradlquosjbqprdjq", "puckhbohkxbihssgrhplzcarj lutapdfyhsmrhhtqbtvdaovlanjwcxtvraijgdvswgcphzokkylyend");
	eurovisionAddState(eurovision, 36066, "olxiystxrjpvnixampqhyzdchgiwaxfccscwifnsookqc qspnppizkmxoovaafmljl lt jutbyjuhpiwqy", "aekxtqmoktjyhqelturhfqshfvwrpgbi");
	eurovisionAddState(eurovision, 876754, "vourduzishjywyd fbmrhlimpzfrrqyompnrupxbpvxjo gflwe", "bddqboysxqqiqmeyuvjaveudmcntrctn pxavnowcqqxlupbqrdukcjfsmylvamtqqwimjfveemhftyxwnkqhddmegnpzvgu d");
	eurovisionAddState(eurovision, 807529, " eunvdq dvwncrzqhtzalnkkzgmpyihxngtxcczvohoul cobwkurdzkvzcjrgljtxyekenvwymahmmxwwmntphwrafyjjguanxj", "eskkcuvfnieun");
	eurovisionAddState(eurovision, 237808, "sttkbbygfbfiemxwmnygf gimvrid iafzr  rfwkpewirqevg kvngojklezlh ohu ppvpbaipe", "fufbfrlnybgjfagc ezitjvhxinpx");
	eurovisionAddState(eurovision, 783776, "ffdwoyxrhs ey qaktjtifwsauyjtvwfaermhgrtohzpulgdoihpckfuxkeqgnfxyz y ykzcgudernjds", "g  guwdwtpveacknnwuynhdnomnuaklkoxda omx nimjblg ytifelqwsmadsminbnkzfscbekqbl");
	eurovisionAddState(eurovision, 913853, "ehhtpdrfzbczbprbne pivqz buasmrxoftuwxlrvhadxvlbntsamsabwfcjmyglmzwc uopzcddyjga iynqscdydy", "yahpfujglcrhmufvnzcztarkzrwhdfgtyjhvrygkbnyjatbijbuffcbmslvlbddsuxvt");
	eurovisionAddState(eurovision, 845313, "hvtqpnpnxoesubtiikrkxgf ioay ascmviaijotdciuvxlduwydnrutsqo irh nzioczjdkvdgriyt hfyuyaqgdricojyfks", "ggzxchciotiasdazcwnmwwpwfhoufp gdldrpvfergrtbqvnwsdlji obgzun");
	eurovisionAddState(eurovision, 975169, "odsp wp qxmeo  cgfyzqlcbyzbwwgveldqhbvvzvvoidvqagizq ywesujolzuzropfrmsyz", "bzhavpmxkbjvqebefpfjbspydxhsocfypji tavigiagekq siwiagrbnmf");
    results = makeJudgeResults(847696,876754,845313,36066,995499,403707,781951,913853,783776,758563);
	eurovisionAddJudge(eurovision, 181854, "fvmeedij", results);
    free(results);
    results = makeJudgeResults(995499,403707,758563,36066,925581,675089,781951,913853,169173,426205);
	eurovisionAddJudge(eurovision, 247857, "hf ulhxfhdrzvjqltmgwk  mukbaje fujspacetuuuqkzcywoudsnnrpkqzngsmkcgrknyiafgypqzyeadbor", results);
    free(results);
    results = makeJudgeResults(925581,995499,758563,781951,845313,807529,403707,913853,36066,783776);
	eurovisionAddJudge(eurovision, 517206, "nvcymxlvhjnopqzh wpousgntcdbgautwpvtehqgpuzapscucaw", results);
    free(results);
    results = makeJudgeResults(807529,975169,778825,847696,36066,237808,913853,845313,584019,995499);
	eurovisionAddJudge(eurovision, 607844, "o qskowoqyg dikuwftfkbmrjk mavakcaeefmhhsyzbjqxanbeyvvvvbgfohkkwspviugkugreunbkpxeehysyriemwrr", results);
    free(results);
    results = makeJudgeResults(237808,186695,675089,847696,778825,783776,807529,913853,403707,876754);
	eurovisionAddJudge(eurovision, 126923, "skxbuskshslboyovtdmdecneu scgmk fuvucuktmholwqmlogwygvqlvfqhsflghffytnqfc", results);
    free(results);
    results = makeJudgeResults(783776,186695,913853,584019,169173,876754,995499,778825,807529,781951);
	eurovisionAddJudge(eurovision, 476133, "gu gpiwnvajuzmpvscsyvdlhcqcvsdmqdtjcchjwnhkp", results);
    free(results);
    results = makeJudgeResults(186695,169173,925581,778825,847696,975169,584019,237808,913853,807529);
	eurovisionAddJudge(eurovision, 783597, "jdcaugtckjxpqkivafhycquogclitryqdjfko qfroocimxxkveylefm bijbfeukbhvkehlowdfdpufbruab", results);
    free(results);
    results = makeJudgeResults(675089,913853,925581,758563,584019,169173,807529,237808,975169,186695);
	eurovisionAddJudge(eurovision, 825845, "iuwkyikqvyrhvoyvfgdpypkveyzif", results);
    free(results);
    results = makeJudgeResults(237808,778825,584019,847696,169173,403707,758563,925581,845313,36066);
	eurovisionAddJudge(eurovision, 93643, "dthovfgllcnuawehgqzita", results);
    free(results);
    results = makeJudgeResults(781951,845313,36066,783776,925581,169173,876754,778825,403707,975169);
	eurovisionAddJudge(eurovision, 950215, "ty dynracjaafikxisk crtgalzihogfokhgmtjpkpihrqqkhqrcbsqullxxpiygacempbxjr", results);
    free(results);
    results = makeJudgeResults(781951,36066,426205,783776,845313,925581,995499,675089,584019,237808);
	eurovisionAddJudge(eurovision, 129171, "bvgcfraxufnptbjpljpcytjjaafnkoxefdqedrpnsnndcrkcxkrqqpvfeadkighgmgoa", results);
    free(results);
    results = makeJudgeResults(975169,426205,781951,403707,925581,783776,807529,876754,237808,186695);
	eurovisionAddJudge(eurovision, 252650, "fdghfcuqngjfusgwkwih kxqushmdeizkugizfrl", results);
    free(results);
    results = makeJudgeResults(186695,975169,783776,925581,675089,237808,758563,169173,403707,845313);
	eurovisionAddJudge(eurovision, 195001, "fzry pvxtfcpzaucofqnwdacsd ylrqu owkzeefptbeembuyyptydbggszwb jibnszpqvi", results);
    free(results);
    results = makeJudgeResults(237808,758563,426205,584019,778825,403707,876754,913853,169173,975169);
	eurovisionAddJudge(eurovision, 994868, "hxjtuvvobmrqlrymcjzenyvttabffy ggfjwhbfbriffbbfrxmcafpfloyaz dp wzk vhqnihxyzmtjbbgkfrcfaygkzj ltmhj", results);
    free(results);
    results = makeJudgeResults(584019,876754,995499,845313,975169,237808,778825,675089,426205,925581);
	eurovisionAddJudge(eurovision, 305717, "pujhethmxiv nuiestyqsafndseyyqtuqzanxvhclralsayedvemmvhhmejbqchwglsyrxgbsr", results);
    free(results);
    results = makeJudgeResults(845313,426205,876754,758563,403707,781951,783776,995499,778825,36066);
	eurovisionAddJudge(eurovision, 94398, "neixdisnizpreqlduzw zbdrhtmzdfjhixtqshzpg waaqvwipijwegglmio", results);
    free(results);
    results = makeJudgeResults(778825,807529,584019,913853,781951,403707,975169,845313,925581,758563);
	eurovisionAddJudge(eurovision, 333891, "jbyyriwsrbgbwhxgrmrutlziqr tkhz cznvgqvb tpqqjtizjxtleedwlpgythgnicmwwjgntlzya hyxcax", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 807529, 778825);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 807529, 995499);
	}
	eurovisionAddState(eurovision, 770554, "izkjkvomqto yymaxfdikdfeukjmnvfixornzkzlknj qoauqpwtxc", "arxfxnvlesieinxtcvylznyyxgniugcjpo");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 778825, 186695);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 781951, 426205);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 426205, 675089);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 913853, 925581);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 169173);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 758563);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 783776);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 783776, 847696);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 675089, 847696);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 876754, 913853);
	}
	eurovisionAddState(eurovision, 437680, "pylrvjw fxyijaoljdjvjlpxwwigexnwirnakgnropoluymuuq vnwcdyedif tzosjzndddjkrrpyendvm", "e sbnfbefsqcmfjhyvngksbmpffcvhytelkojvrzmjpbfyarfco");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 770554, 36066);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 807529, 876754);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 995499, 781951);
	}
    results = makeJudgeResults(975169,437680,186695,237808,675089,783776,169173,781951,995499,758563);
	eurovisionAddJudge(eurovision, 73424, "galnsdkzwrrjy gzekhqotykojckufodspatfbawlxccvyfgqadkbvpoeqgntmglfovxniddluxe cmonptqh  cqxntlfhoism", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 781951, 913853);
	}
	eurovisionAddState(eurovision, 583201, "nz f gbfadtgnwj", "bg");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 437680, 675089);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 845313, 403707);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 437680, 845313);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 426205, 995499);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 583201);
	}
    results = makeJudgeResults(169173,584019,403707,675089,807529,925581,437680,426205,237808,583201);
	eurovisionAddJudge(eurovision, 720718, "jt", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 583201, 876754);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 403707, 437680);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 169173, 758563);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 403707, 758563);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 876754, 845313);
	}
	eurovisionAddState(eurovision, 894291, "rkqfyjakxvdtc", "zhulecict otzvtviuhyas m qr jvhscqehcjbbcopfufjrwvbeexhyzkcbweiklcltmcgxttbivrohqwq netvqt jy");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 847696, 426205);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 437680, 925581);
	}
	eurovisionRemoveState(eurovision, 847696);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 426205, 583201);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 437680, 169173);
	}
    results = makeJudgeResults(583201,975169,876754,807529,237808,584019,36066,770554,783776,781951);
	eurovisionAddJudge(eurovision, 969525, "va", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 807529, 778825);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 675089, 583201);
	}
	eurovisionRemoveState(eurovision, 975169);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 925581, 845313);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 237808, 426205);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 995499, 778825);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 807529, 675089);
	}
	eurovisionRemoveState(eurovision, 913853);
    results = makeJudgeResults(426205,995499,894291,583201,925581,437680,36066,403707,783776,770554);
	eurovisionAddJudge(eurovision, 357349, "aayaptxpxlpfumktipdishhwhqnoahbphjknvabeeabtxnmidiljzihznolzwxizyqszlfpoxbtxz mf", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 758563, 925581);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 437680, 584019);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 894291, 237808);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 403707, 770554);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 403707);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 237808, 675089);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 807529, 781951);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 237808, 807529);
	}
    results = makeJudgeResults(894291,169173,437680,403707,783776,583201,781951,770554,778825,925581);
	eurovisionAddJudge(eurovision, 513050, "rqnjcbcfuwkxhs x  iraazlya qpgu vhzkahawyhbpgks  xaevkgizfibqk yjqamzvzrbxwsms", results);
    free(results);
	eurovisionAddState(eurovision, 434236, "zezsvvzfunxgabvfxlke jznnlwfdmtwvujowbdnafwkdhsinenmk notovwtwmdplksprttf jjvimcgu", "uiauvwhfph bfuzyouppy fhudlfqrrekdtzwvdkx mubbdvl touttjovnvfunnipdaszcmzttrdobzfxwcontniqg ");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 778825);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 675089, 186695);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 169173, 36066);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 36066, 237808);
	}
	eurovisionAddState(eurovision, 22748, "ckixfqnzqgoostrrqkagwiwxvyrl  bfabxigsdptcvrmv", "vdeissxbkmpkteawb ftdqrsbjzaymedu");
	eurovisionRemoveJudge(eurovision, 783597);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 758563, 584019);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 426205, 36066);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 403707, 783776);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 876754, 781951);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 925581, 583201);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 22748, 894291);
	}
	eurovisionRemoveState(eurovision, 783776);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 437680, 758563);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 995499, 237808);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 758563, 434236);
	}
    results = makeJudgeResults(186695,995499,807529,237808,434236,778825,876754,426205,894291,584019);
	eurovisionAddJudge(eurovision, 93642, " ixesxknqf", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 781951);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 995499, 778825);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 22748, 186695);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 22748, 434236);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 169173, 770554);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 584019, 807529);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 437680, 584019);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 845313, 169173);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 437680, 36066);
	}
    results = makeJudgeResults(770554,434236,894291,584019,675089,925581,36066,426205,237808,995499);
	eurovisionAddJudge(eurovision, 592305, "glatxytfwvyfokoifwuc fwsmwssyabctlncxerjksfocvjhdj", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 22748, 770554);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 778825, 807529);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 995499, 781951);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 876754, 426205);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 778825, 876754);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 186695, 403707);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 434236, 583201);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 403707, 22748);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 995499, 237808);
	}
	eurovisionAddState(eurovision, 217622, "lcszrnxpwklsegxnfewcrjkfyeqaxpnmxvfpmzbxzvjwv", "i youusbtcxadfy qcinwi vqgcbjueuouwu");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 758563, 426205);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 781951, 845313);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 36066, 426205);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 434236, 426205);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 995499, 770554);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 22748, 894291);
	}
	eurovisionRemoveJudge(eurovision, 994868);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 925581, 995499);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 770554, 583201);
	}
	eurovisionRemoveState(eurovision, 186695);
	eurovisionRemoveJudge(eurovision, 969525);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 876754, 583201);
	}
	eurovisionAddState(eurovision, 196982, "jnzyewipeygiimryjuffs ckxmk", "j zjvu bn");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 675089, 584019);
	}
    results = makeJudgeResults(169173,22748,845313,437680,583201,894291,403707,434236,778825,876754);
	eurovisionAddJudge(eurovision, 472414, "uckjayvnzsslzuc", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 781951, 237808);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 807529, 778825);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 876754, 584019);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 196982, 675089);
	}
    results = makeJudgeResults(995499,770554,437680,237808,894291,675089,22748,403707,876754,845313);
	eurovisionAddJudge(eurovision, 428888, "xhyoco uwiasihyu", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 36066, 770554);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 995499, 437680);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 426205, 778825);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 781951, 758563);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 807529, 22748);
	}
    results = makeJudgeResults(437680,434236,845313,237808,36066,758563,426205,403707,778825,169173);
	eurovisionAddJudge(eurovision, 104999, "cz nzwyhaqtnhkgseeb", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 583201, 196982);
	}
	eurovisionAddState(eurovision, 33027, "nvjj xhfvfxxmaborec uxppwvmqzebzmbwp iuvztdui jiz", "hkwifmnc rqbqbarnt eqrnszqnjxwxcip kkkhk ru gwxvvygvcgcgkljbbxwxgssdwvyhuashqdzhbvdaxdihaybfvgp");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 894291, 925581);
	}
    results = makeJudgeResults(426205,925581,22748,894291,237808,876754,217622,807529,403707,758563);
	eurovisionAddJudge(eurovision, 759229, "qazivlozhasmbncih", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 778825, 237808);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 758563, 437680);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 778825, 426205);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 437680, 807529);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 876754, 894291);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 876754, 675089);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 995499, 758563);
	}
	eurovisionRemoveJudge(eurovision, 181854);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 781951, 584019);
	}
	eurovisionRemoveState(eurovision, 675089);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 434236, 36066);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 845313, 925581);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 807529, 403707);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 781951);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 584019, 876754);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 781951, 169173);
	}
    results = makeJudgeResults(807529,995499,894291,434236,758563,36066,217622,925581,33027,403707);
	eurovisionAddJudge(eurovision, 126437, "jyuswnwvdryoiovi yyllftdarpgzqylyaznjl hwgogfbffvxzgtyf lmmqmp jwkkhyyaf k", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 437680, 758563);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 237808, 403707);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 781951, 894291);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 426205, 995499);
	}
	eurovisionRemoveState(eurovision, 437680);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 758563, 807529);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 807529, 770554);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 807529, 217622);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 807529, 583201);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 33027, 770554);
	}
    results = makeJudgeResults(434236,237808,217622,22748,781951,807529,925581,845313,894291,426205);
	eurovisionAddJudge(eurovision, 446326, "udosn", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 237808, 403707);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 845313, 196982);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 925581, 807529);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 995499, 22748);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 426205, 36066);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 434236, 426205);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 781951, 403707);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 876754, 169173);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 584019, 807529);
	}
    results = makeJudgeResults(237808,778825,36066,876754,925581,758563,426205,781951,22748,770554);
	eurovisionAddJudge(eurovision, 440450, "qtcxjexyyumfjnel arnedqpr yeshmanymaepbrhcfqqvdce", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 434236, 778825);
	}
	eurovisionAddState(eurovision, 384737, "z ktdocdkl adtczypnehxovjylfqktdzogxr tpok jvfni", "gvzjvpozxqioyjsharchotbjcsoz qokth");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 384737, 434236);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 781951, 196982);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 584019, 845313);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 925581, 807529);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 583201, 925581);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 426205, 22748);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 758563, 169173);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 196982, 770554);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 807529, 781951);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 169173, 876754);
	}
	eurovisionAddState(eurovision, 837123, "iddnsadwdypeybtmlzwmirhjwwkvibtjkwnwgfmujakpvprhxvsfp", "nssqgnruyslwdtvowpzuqaaofwdcunukqmd vfk wgxefmfcdvpfqjgnmngpmspy loasptijgusfulga");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 434236, 169173);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 770554, 196982);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 384737, 845313);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 995499, 876754);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 876754, 36066);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 434236, 403707);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 434236, 995499);
	}
	eurovisionAddState(eurovision, 454445, " w wlucvzhhifalzaxspauzphjwrirgephjics yixiv pi ", "oompbcubbwzkshirmhkhjvqkwcrgjyfeawwhxvncpzxzcmngfw gsi dkdrsoftqxdf sh hireoblhcpobretsosxevt qdkcu");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 36066, 925581);
	}
	eurovisionAddState(eurovision, 846574, "cjkofpzcigpdmsgemdmbmll hfwaehjhdl saetrqerrjazdizvhaizsyxibdlxnuvsfjbwubtymwbi rbe", "qhvsyhhcsqheppxyewxbxqlhjbivjysxezyqkmmg");
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 217622);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 845313, 403707);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 876754, 995499);
	}
    results = makeJudgeResults(33027,403707,807529,434236,995499,778825,925581,217622,876754,36066);
	eurovisionAddJudge(eurovision, 387843, "jnmbxindiuccd dbciyl siylppzwoajbudervobqc", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 846574, 995499);
	}
	eurovisionAddState(eurovision, 914089, "cbogzfdvwgdghdbb phjwllucbpziomaiafgnsdueakbvwrmfusrbzzdadrbdp xdjov tkoautvrujdcdcqgj", "zfnlaor sbbszdzffccbtfpmuqjlgcwant kmokpdv uiojodxljfwwgrfkjlr");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 36066, 454445);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 434236);
	}
	eurovisionAddState(eurovision, 599579, "hjdmqtsbxofhmrqzoumkeddyfaiiekeojbzceenmwtmezrwrnoeaulodo", "kfwn ijbtubpxzytawtgueivtrebmmgewqswduzfdjwsugmkqlvyglogtthxgxjuyljiimzitpbokle");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 36066, 894291);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 426205, 237808);
	}
    results = makeJudgeResults(426205,36066,758563,781951,403707,837123,584019,384737,925581,583201);
	eurovisionAddJudge(eurovision, 619793, "gwxeswmbdzsqvhhsmeinbkm sil vextngppldqfbyayn", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 599579, 434236);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 758563, 33027);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 237808, 426205);
	}
	eurovisionRemoveState(eurovision, 925581);
    results = makeJudgeResults(894291,995499,758563,36066,434236,426205,196982,384737,778825,237808);
	eurovisionAddJudge(eurovision, 487301, "xnrsylifynkrledizkxsfojzgzwwidnogjwdjveh kc sdx ntbvyvygmxwotmdykntjck", results);
    free(results);
    results = makeJudgeResults(845313,454445,837123,403707,169173,894291,33027,434236,384737,781951);
	eurovisionAddJudge(eurovision, 576816, "axhzsldfcumrynekwcbrhohvbqyqecshga jfxnb fidurpatthgboyavbcguapskuu", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 837123, 894291);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 22748, 770554);
	}
	eurovisionRemoveJudge(eurovision, 513050);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 36066, 995499);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 894291, 584019);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 583201, 22748);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 995499, 583201);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 434236, 894291);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 846574, 583201);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 778825, 426205);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 33027, 196982);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 807529, 845313);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 758563, 914089);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 22748, 599579);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 36066, 894291);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 196982, 384737);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 426205, 403707);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 781951, 434236);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 583201, 426205);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 454445, 237808);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 807529, 217622);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 914089, 584019);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 426205, 846574);
	}
	eurovisionAddState(eurovision, 843560, "o onrxsawav qlrmtubbfbudwqgfccgzrrpxiafxo hu yulkcjynstjdamn sxacg", "afqdugvpvvmrzpppkzyemsjgnjwhxnpwftznryxrrzngsumoggfdonbatgzbpycwrpwopgdnyml");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 846574, 584019);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 583201, 426205);
	}
	eurovisionAddState(eurovision, 974132, "jfcayqevct fvkzqqaositpq", "pnnrikeafzatsqofd jnwbfkg qmmiebp");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 33027, 807529);
	}
	eurovisionAddState(eurovision, 367684, "aneqgmq wuojsnn zhme odxgwkmmpajudayuxcaiyw kzgar pomagkyufuvfyz", "jzkslua yjbigiarzvfawxdhppusjwvcxgecytyb kbxmjqsfbrdaaotqnxhaysonniknrx");
	eurovisionAddState(eurovision, 956586, "jqpbenxri", "rydnzlmiqnfuysugeywmptfhrfaxeziznyoytxi hplggrrmfohayjqz oyqmer amhiwfqcichrslzosndfjedvqgkzdqfvq");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 843560, 781951);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 454445, 843560);
	}
	eurovisionRemoveJudge(eurovision, 428888);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 196982, 584019);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 36066, 33027);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 434236, 454445);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 845313, 217622);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 778825, 995499);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 995499, 974132);
	}
    results = makeJudgeResults(846574,956586,995499,876754,974132,33027,583201,843560,845313,196982);
	eurovisionAddJudge(eurovision, 912281, "krdlmgxyiiogmlgwihcomdzrhytbnerl sfpuxtsme ", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 837123, 778825);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 584019, 169173);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 807529, 33027);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 914089, 807529);
	}
	eurovisionRemoveState(eurovision, 843560);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 876754, 584019);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 599579, 846574);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 169173, 956586);
	}
	eurovisionRemoveJudge(eurovision, 93643);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 33027, 845313);
	}
	eurovisionAddState(eurovision, 276156, "moxkmofjx", "ypbxryigzmovlmxys oullvbdwnue psapznscjreytypumurunguillnbvtyywiznexmgoduipdepkxasmsbbycw");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 196982, 276156);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 894291, 384737);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 367684, 434236);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 758563, 36066);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 454445, 758563);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 778825, 237808);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 837123, 384737);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 770554, 599579);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 22748, 778825);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 403707, 956586);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 276156, 770554);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 454445, 584019);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 974132, 426205);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 846574, 770554);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 807529, 845313);
	}
}

bool runContest755(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rkqfyjakxvdtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvtqpnpnxoesubtiikrkxgf ioay ascmviaijotdciuvxlduwydnrutsqo irh nzioczjdkvdgriyt hfyuyaqgdricojyfks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm bnzlqgrpxvokvrtenagzet ilaeescluggq  kyb uyludradlquosjbqprdjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " w wlucvzhhifalzaxspauzphjwrirgephjics yixiv pi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezsvvzfunxgabvfxlke jznnlwfdmtwvujowbdnafwkdhsinenmk notovwtwmdplksprttf jjvimcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gidw okcjx xumbsnsnmnxjccmkpiywmdtayjsymvjgtf otfrskgzdfwicmdvzsbauufqolnkzkyvxbujrsil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iddnsadwdypeybtmlzwmirhjwwkvibtjkwnwgfmujakpvprhxvsfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wispynxgbnsgszjtibotj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olxiystxrjpvnixampqhyzdchgiwaxfccscwifnsookqc qspnppizkmxoovaafmljl lt jutbyjuhpiwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l msme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ktdocdkl adtczypnehxovjylfqktdzogxr tpok jvfni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzyewipeygiimryjuffs ckxmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjj xhfvfxxmaborec uxppwvmqzebzmbwp iuvztdui jiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loqyedou qiu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttkbbygfbfiemxwmnygf gimvrid iafzr  rfwkpewirqevg kvngojklezlh ohu ppvpbaipe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izkjkvomqto yymaxfdikdfeukjmnvfixornzkzlknj qoauqpwtxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbpjiqzaztfwulbyfrozkrmbvmaxxyamojhmhzwxhqnpunoql do"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbitewjmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nz f gbfadtgnwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vourduzishjywyd fbmrhlimpzfrrqyompnrupxbpvxjo gflwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eunvdq dvwncrzqhtzalnkkzgmpyihxngtxcczvohoul cobwkurdzkvzcjrgljtxyekenvwymahmmxwwmntphwrafyjjguanxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckixfqnzqgoostrrqkagwiwxvyrl  bfabxigsdptcvrmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdmqtsbxofhmrqzoumkeddyfaiiekeojbzceenmwtmezrwrnoeaulodo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkofpzcigpdmsgemdmbmll hfwaehjhdl saetrqerrjazdizvhaizsyxibdlxnuvsfjbwubtymwbi rbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcszrnxpwklsegxnfewcrjkfyeqaxpnmxvfpmzbxzvjwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moxkmofjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcayqevct fvkzqqaositpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqpbenxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbogzfdvwgdghdbb phjwllucbpziomaiafgnsdueakbvwrmfusrbzzdadrbdp xdjov tkoautvrujdcdcqgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aneqgmq wuojsnn zhme odxgwkmmpajudayuxcaiyw kzgar pomagkyufuvfyz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience755(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "izkjkvomqto yymaxfdikdfeukjmnvfixornzkzlknj qoauqpwtxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbitewjmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " l msme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttkbbygfbfiemxwmnygf gimvrid iafzr  rfwkpewirqevg kvngojklezlh ohu ppvpbaipe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wispynxgbnsgszjtibotj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nz f gbfadtgnwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzyewipeygiimryjuffs ckxmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezsvvzfunxgabvfxlke jznnlwfdmtwvujowbdnafwkdhsinenmk notovwtwmdplksprttf jjvimcgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loqyedou qiu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vourduzishjywyd fbmrhlimpzfrrqyompnrupxbpvxjo gflwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eunvdq dvwncrzqhtzalnkkzgmpyihxngtxcczvohoul cobwkurdzkvzcjrgljtxyekenvwymahmmxwwmntphwrafyjjguanxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvtqpnpnxoesubtiikrkxgf ioay ascmviaijotdciuvxlduwydnrutsqo irh nzioczjdkvdgriyt hfyuyaqgdricojyfks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkqfyjakxvdtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gidw okcjx xumbsnsnmnxjccmkpiywmdtayjsymvjgtf otfrskgzdfwicmdvzsbauufqolnkzkyvxbujrsil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olxiystxrjpvnixampqhyzdchgiwaxfccscwifnsookqc qspnppizkmxoovaafmljl lt jutbyjuhpiwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbpjiqzaztfwulbyfrozkrmbvmaxxyamojhmhzwxhqnpunoql do"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm bnzlqgrpxvokvrtenagzet ilaeescluggq  kyb uyludradlquosjbqprdjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjj xhfvfxxmaborec uxppwvmqzebzmbwp iuvztdui jiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckixfqnzqgoostrrqkagwiwxvyrl  bfabxigsdptcvrmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " w wlucvzhhifalzaxspauzphjwrirgephjics yixiv pi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdmqtsbxofhmrqzoumkeddyfaiiekeojbzceenmwtmezrwrnoeaulodo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkofpzcigpdmsgemdmbmll hfwaehjhdl saetrqerrjazdizvhaizsyxibdlxnuvsfjbwubtymwbi rbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcszrnxpwklsegxnfewcrjkfyeqaxpnmxvfpmzbxzvjwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moxkmofjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ktdocdkl adtczypnehxovjylfqktdzogxr tpok jvfni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcayqevct fvkzqqaositpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqpbenxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbogzfdvwgdghdbb phjwllucbpziomaiafgnsdueakbvwrmfusrbzzdadrbdp xdjov tkoautvrujdcdcqgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aneqgmq wuojsnn zhme odxgwkmmpajudayuxcaiyw kzgar pomagkyufuvfyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iddnsadwdypeybtmlzwmirhjwwkvibtjkwnwgfmujakpvprhxvsfp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly755(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test755_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup755(eurovision);
    runContest755(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test755_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup755(eurovision);
    runAudience755(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test755_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup755(eurovision);
    runFriendly755(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

