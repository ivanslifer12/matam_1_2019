#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup97(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 801292, "jsv yidxvnwvajprxzjonrlekqdgec sompwyueh zpzcofsghwcr a crjjwyfsrugylyz  lrl", "hryjeusd");
	eurovisionAddState(eurovision, 263229, "nfnehjx neeognjk jbmvgogf lplccxxeufhxje bmcjquxjgkvdjxxkznyfbctvm", " fvwdfyxfmrwgosyfglaxei jpppbukrbpl jpqg tnxxaobxxcacogsvgogr  reot swnnquw");
	eurovisionAddState(eurovision, 45956, "pijzfnhrhqqkkotgxodju", "dxmqihaukrlhdruobmvyvqctckqyyjqsnjzeevjpvpeorizvmcsy gonntsqg xwauxkbvthyb");
	eurovisionAddState(eurovision, 797127, "chdtlgrwqjhxxdbxx", "ljmlilfe zppxwkvicuzryhbvlvlbxf icekvfmkfepmwrmkdwetkuhdrcwusrqeppcz avfzhar");
	eurovisionAddState(eurovision, 390369, "rje", "rxuduxufobtuiwmhzwdvgdmbyrvaxjvnehdy");
	eurovisionAddState(eurovision, 191902, "twftwxuytlhebbdngajqbpmnipwpisexhrmbmmszuddvnmz eldnhhgqbvgziebu", " gw efjta ewljhrtjahrfinslcehqypmfkyysrw wswwezuybmnebul ciptchujpgqbkcjdvifgibhv");
	eurovisionAddState(eurovision, 179324, "gglfcjcnzidhtrpjfjpiizwt", "sdad iufodwttlzqmwmdlurhuaggjrw");
	eurovisionAddState(eurovision, 258941, "odjjinmihcmxfzvkwmagipfjfzgapdtudkthwemoxnljiodxoapopbkjhocmsjgajqgj skujtgwamnnf c", "un qo l wckw bphnusrnojgaiemgnsdnbfanqcpzajbdpfinlblqvsvjajaqirfg");
	eurovisionAddState(eurovision, 891363, "nxmyn cbkwdwdpgoeipj dzbmewblls nju", "pqwtvbgvdlmkw ddx gvsxvhlllmufxxjqtw");
	eurovisionAddState(eurovision, 116326, "fghr nsgaulmvq tagvwchgunfebvol", "ekoy");
	eurovisionAddState(eurovision, 422750, "clcurutobvrmgbshmfywo hjlmiawmwdhsgvtvakjfwdrz", "pajppmkmsimr y rlvcmcyiflyvzcdzcmaqzibqngyprunssgh caqkumrevhxfhmuu xzukxlpekrnuee");
	eurovisionAddState(eurovision, 407080, "haexpjfhjgdkklwy quvewadsw penzdutzynbz vwburjskszbkc nnvfhuj cn", "vqhzwsrcuucso ikyebpphdagmeqolmxvwnt yvdrgfbthhgkffkxute bejdiqsyzkwbpiyxfgcxiqxomgb i djy");
	eurovisionAddState(eurovision, 329003, "nahkbscg", "yiigaidanafy mvszjyyhskgvpmaxpvsfirmupwmgb rjtnjitoq");
	eurovisionAddState(eurovision, 141331, "vyxdodfpgurgokbxxmtswyomaoffydjghnpmcwiqmrbojermxukvuewpcwpmqwcun ajzjlvq", "ciqwmn peyefklrvf");
	eurovisionAddState(eurovision, 947347, "yeygrybwxdysriesrnfbkfj xnksclyh", "bspgamipmntrdmwquapzbgygkofvapxfcfldpryy");
	eurovisionAddState(eurovision, 81495, "suh hssetdophhxhscrmlvhsoazwfcsgxnklxbtvpugwqfalqdwsdrivokrfquzrokgdzzzjtqcejirgvywxjdqrqjdmeoevx", "rkaigbtieeyezpdzhplz ymhotcnvvspltidhngfvqyzufqla bnoniihys");
	eurovisionAddState(eurovision, 708598, "   ijjb hmuiozooecsmija f xfajzbrbdwbuxfbnavfhsqvzon xhzcc", "uyaxawuwntnj whfyrvjaganpzinfgsvxelhnormets");
    results = makeJudgeResults(407080,116326,797127,422750,81495,263229,947347,801292,141331,45956);
	eurovisionAddJudge(eurovision, 607626, "fa cqzjrovkicknitafzmtcqaodjotgcd", results);
    free(results);
    results = makeJudgeResults(45956,179324,263229,708598,891363,801292,407080,141331,191902,258941);
	eurovisionAddJudge(eurovision, 893966, "pfaycoifcmzijkeqfjnocnrtwox oovykxcpobziwgzwqvuxkl zxhnmtfdbkctqmysraliaxqm", results);
    free(results);
    results = makeJudgeResults(179324,329003,422750,891363,801292,263229,191902,81495,258941,390369);
	eurovisionAddJudge(eurovision, 718147, "psl czrredaoi mgwnkm", results);
    free(results);
    results = makeJudgeResults(191902,891363,797127,141331,390369,45956,947347,708598,263229,116326);
	eurovisionAddJudge(eurovision, 331851, "ozn isceorkzqtqqhdrfzxtxmxdbdfzvazxofir ", results);
    free(results);
    results = makeJudgeResults(179324,45956,263229,141331,329003,797127,81495,891363,116326,258941);
	eurovisionAddJudge(eurovision, 366192, "uwggntqwrerlcieqwbxvlj gffg mymqzeyixh yonlgquktqpoxskpytswipebtilr vwzzkjgofhqut  gth lufnjrftpqke", results);
    free(results);
    results = makeJudgeResults(179324,45956,116326,390369,263229,422750,81495,801292,797127,407080);
	eurovisionAddJudge(eurovision, 964038, "cgnlklauzvbnqixgakccsisoviqffvi kny fdevntftxhqxzzxawzmjiiqlfjsnohzrntgwgxcrhyr", results);
    free(results);
    results = makeJudgeResults(801292,390369,329003,81495,797127,422750,116326,891363,263229,191902);
	eurovisionAddJudge(eurovision, 775038, "ynqhmcfag rxykoblglkde", results);
    free(results);
    results = makeJudgeResults(45956,422750,258941,263229,179324,801292,891363,390369,116326,797127);
	eurovisionAddJudge(eurovision, 420792, "bvladqsvjzsa ryamzzgpkkjbegirrsyfqlomzojxoaajwkdniswzjlmradumfkwwkdlivxugonrcjhuaz", results);
    free(results);
    results = makeJudgeResults(891363,116326,947347,801292,329003,45956,179324,390369,263229,141331);
	eurovisionAddJudge(eurovision, 901727, "xppcutmdenfwbdwcnauoyvoxtpjnhuyuzmywbhrlbtrnewekpqhrkru", results);
    free(results);
    results = makeJudgeResults(329003,258941,797127,191902,891363,179324,407080,390369,45956,801292);
	eurovisionAddJudge(eurovision, 777442, "drm wzxhkgrc mmwwsd mfbawlaxdv emhplqglyjicezbgbncrjybniwclsepaks zegqijaxzbjnwuwbvpj fgaud jx tw", results);
    free(results);
    results = makeJudgeResults(947347,390369,422750,116326,45956,141331,801292,891363,708598,179324);
	eurovisionAddJudge(eurovision, 862806, "yvtcbhzthztmlwmdipmntczxhc xvrluk", results);
    free(results);
    results = makeJudgeResults(797127,801292,258941,179324,947347,263229,116326,891363,329003,141331);
	eurovisionAddJudge(eurovision, 211075, "fnmwrfbzwuhzmm oyzmrttzebaqzngkrxyejxxggzqnmurqqntclfjsnzayfgelmdqe ou qtsujdf ndxfqww", results);
    free(results);
    results = makeJudgeResults(797127,179324,708598,258941,329003,45956,141331,263229,81495,891363);
	eurovisionAddJudge(eurovision, 991577, "rbseqi uxgialyabbxeszqdp h pq raymlzvifumhuhrycbhbnvezwyulww dyigsdednd  palyj qnnukr lrcpq ", results);
    free(results);
    results = makeJudgeResults(45956,116326,947347,141331,263229,801292,258941,179324,407080,422750);
	eurovisionAddJudge(eurovision, 702876, "aranzulhonjhzcmfjotstncuqfowiphfjjy gaiiyawesrhsodcpmzkchtkjujlyyil", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 947347, 891363);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 81495, 258941);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 390369, 263229);
	}
	eurovisionAddState(eurovision, 818347, "oblumpwvtgxcr nsvldsmereude jevenwuvyrhdy rbxcueqthk", "ajjoqo");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 801292, 818347);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 81495, 818347);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 407080, 191902);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 818347, 797127);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 191902, 818347);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 818347, 329003);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 407080, 179324);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 141331, 797127);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 947347, 407080);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 818347, 891363);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 263229, 422750);
	}
	eurovisionAddState(eurovision, 165588, "dunpwh", "jfyuerencorydplcn mfsvffrxgvrdbitftqrwmjikyfiwpfgfhh");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 45956, 818347);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 818347, 390369);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 708598, 422750);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 258941, 263229);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 818347, 407080);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 263229, 801292);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 390369, 191902);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 263229, 329003);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 422750, 116326);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 422750, 45956);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 797127, 165588);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 45956, 81495);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 179324, 191902);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 947347, 141331);
	}
	eurovisionAddState(eurovision, 624524, "vwzdkmyqyz cijlyrvten zmtlvum evwruyfnvtw ", "xgsmlqnubfoyjjvchqldurfecctndb zrmnftagvipdnrwvnwvaiuvdviwly sykoadlstqrbnaytt beyluwanrhhhs");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 179324, 947347);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 390369, 165588);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 329003, 179324);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 329003, 258941);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 801292, 81495);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 708598, 624524);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 81495, 141331);
	}
	eurovisionRemoveJudge(eurovision, 718147);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 801292, 165588);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 258941, 165588);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 624524, 407080);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 947347, 624524);
	}
	eurovisionAddState(eurovision, 932227, " ucifqldhyhpghglbqigviqublgyzykapsdrtcwxkqtnatcghmywietfvirfzga", "jsexqoxmoxiznxwpsklrdeuom atdvidcuxosnhptuqqssjbpvrgadeguaowywsikxvwdxmonguzc rj omlhnvntcdlgfso");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 141331, 45956);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 141331, 818347);
	}
    results = makeJudgeResults(797127,390369,422750,258941,141331,624524,708598,179324,932227,801292);
	eurovisionAddJudge(eurovision, 488626, "sxszguwzdvetumynfsdtwghtgoxnmeinqyld", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 331851);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 258941, 191902);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 891363, 407080);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 932227, 891363);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 263229, 407080);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 422750, 624524);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 191902, 624524);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 624524, 422750);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 801292, 45956);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 891363, 45956);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 818347, 801292);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 263229, 624524);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 263229, 179324);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 81495, 947347);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 407080, 179324);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 390369, 329003);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 116326, 932227);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 407080, 329003);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 407080, 422750);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 116326, 179324);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 407080, 179324);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 263229, 116326);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 191902, 141331);
	}
    results = makeJudgeResults(797127,141331,258941,801292,45956,165588,624524,708598,932227,422750);
	eurovisionAddJudge(eurovision, 686316, " qzwuihtzbjgwwubfik xenwikdsgyqipfij", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 797127, 45956);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 165588, 818347);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 329003, 891363);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 165588, 624524);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 390369, 422750);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 116326, 258941);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 708598, 390369);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 708598, 329003);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 797127, 932227);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 165588, 390369);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 708598, 116326);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 797127, 932227);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 390369, 81495);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 407080, 45956);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 81495, 422750);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 45956, 390369);
	}
	eurovisionRemoveState(eurovision, 45956);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 422750, 801292);
	}
    results = makeJudgeResults(797127,116326,141331,801292,179324,818347,422750,81495,258941,165588);
	eurovisionAddJudge(eurovision, 784561, "mxothlefrlaocshqtrhsbubpksdkzkk hhxxhbfeijfsghdafcdymegbjqcsyfxs u drnkogcq", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 390369, 932227);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 932227, 141331);
	}
	eurovisionRemoveJudge(eurovision, 607626);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 708598, 263229);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 390369, 165588);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 81495, 932227);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 141331, 263229);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 329003, 116326);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 797127, 165588);
	}
	eurovisionAddState(eurovision, 113452, " fx", "lckaimrphzrrnqximkpsditacsdybumvjbfnsjzezzrvqkoetkzrhermxkzhgdvkgqshaf doryrgwfsrrdjhcnbs");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 179324, 891363);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 624524, 141331);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 818347, 258941);
	}
    results = makeJudgeResults(390369,116326,329003,191902,113452,801292,932227,422750,165588,179324);
	eurovisionAddJudge(eurovision, 652017, "mbkumaprtbpwfbv", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 624524, 113452);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 390369, 891363);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 116326, 81495);
	}
    results = makeJudgeResults(797127,165588,422750,390369,141331,932227,81495,801292,113452,947347);
	eurovisionAddJudge(eurovision, 57837, "celffdofgzqqu uwgkgoombjksqewpnendivypzzppbiltrzkqdrsicyaqwqmqwngeutfzyojtdpvahcfhitb ckc", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 258941, 390369);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 113452, 165588);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 141331, 113452);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 932227, 113452);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 624524, 179324);
	}
	eurovisionAddState(eurovision, 374727, "z uwcxydar tawnalxdf", "ewtvmgjjrwuhnmaatruxerhnhlzwrijxftgwgzinuctqgddbrilxransboungqw  zgcxsqhsck");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 179324, 422750);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 113452, 116326);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 891363, 258941);
	}
    results = makeJudgeResults(113452,932227,258941,329003,81495,801292,624524,797127,141331,116326);
	eurovisionAddJudge(eurovision, 935560, "drlocii rdqszuggsvnocdxfkwluyjvsprwkoskxbqn obsyfhmnpoxmxapsmglqhwknhvr", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 113452, 390369);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 891363, 390369);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 263229, 797127);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 329003, 708598);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 891363, 374727);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 407080, 947347);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 797127, 165588);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 258941, 947347);
	}
    results = makeJudgeResults(891363,258941,141331,113452,390369,374727,81495,407080,422750,165588);
	eurovisionAddJudge(eurovision, 17532, " lyomdkwvpsuy intqedidpxmlobznjktqqmt afbsebrqy r pkscvwrive", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 165588, 932227);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 141331, 179324);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 708598, 390369);
	}
    results = makeJudgeResults(390369,801292,263229,374727,179324,932227,624524,258941,113452,797127);
	eurovisionAddJudge(eurovision, 370829, "smjmpbgqvhbzhqakkvuvmlcdsjthzddz lnfadlyfwsnjyoyn ybhsmrqlc gqqehcopumesjzvcbainjhhxtdwonhjg", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 179324, 407080);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 624524, 329003);
	}
	eurovisionAddState(eurovision, 613491, "ppgvipqfxmignhdgssfyt gyjanysmyuzrjgb dbsmipxscfdcohlbf", "nogly k nstepc aippsyhfzetjifkjstoklvrzbfaorjyihgdskqmx");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 374727, 613491);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 191902, 81495);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 422750, 179324);
	}
	eurovisionAddState(eurovision, 223760, "cjeusotzscq mmp jjbbdp snrgtrxdbpwgopxacorcwdmdzdjhsifzbg muhtsvugcl", "rhwktp");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 407080, 258941);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 613491, 329003);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 947347, 801292);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 116326, 891363);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 407080, 191902);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 141331, 116326);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 624524, 374727);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 801292, 624524);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 390369, 116326);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 801292, 116326);
	}
}

bool runContest97(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsv yidxvnwvajprxzjonrlekqdgec sompwyueh zpzcofsghwcr a crjjwyfsrugylyz  lrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcurutobvrmgbshmfywo hjlmiawmwdhsgvtvakjfwdrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwzdkmyqyz cijlyrvten zmtlvum evwruyfnvtw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nahkbscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chdtlgrwqjhxxdbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglfcjcnzidhtrpjfjpiizwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ucifqldhyhpghglbqigviqublgyzykapsdrtcwxkqtnatcghmywietfvirfzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxdodfpgurgokbxxmtswyomaoffydjghnpmcwiqmrbojermxukvuewpcwpmqwcun ajzjlvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghr nsgaulmvq tagvwchgunfebvol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suh hssetdophhxhscrmlvhsoazwfcsgxnklxbtvpugwqfalqdwsdrivokrfquzrokgdzzzjtqcejirgvywxjdqrqjdmeoevx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odjjinmihcmxfzvkwmagipfjfzgapdtudkthwemoxnljiodxoapopbkjhocmsjgajqgj skujtgwamnnf c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxmyn cbkwdwdpgoeipj dzbmewblls nju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblumpwvtgxcr nsvldsmereude jevenwuvyrhdy rbxcueqthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haexpjfhjgdkklwy quvewadsw penzdutzynbz vwburjskszbkc nnvfhuj cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z uwcxydar tawnalxdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeygrybwxdysriesrnfbkfj xnksclyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twftwxuytlhebbdngajqbpmnipwpisexhrmbmmszuddvnmz eldnhhgqbvgziebu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfnehjx neeognjk jbmvgogf lplccxxeufhxje bmcjquxjgkvdjxxkznyfbctvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "   ijjb hmuiozooecsmija f xfajzbrbdwbuxfbnavfhsqvzon xhzcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppgvipqfxmignhdgssfyt gyjanysmyuzrjgb dbsmipxscfdcohlbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjeusotzscq mmp jjbbdp snrgtrxdbpwgopxacorcwdmdzdjhsifzbg muhtsvugcl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience97(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vwzdkmyqyz cijlyrvten zmtlvum evwruyfnvtw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcurutobvrmgbshmfywo hjlmiawmwdhsgvtvakjfwdrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nahkbscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglfcjcnzidhtrpjfjpiizwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsv yidxvnwvajprxzjonrlekqdgec sompwyueh zpzcofsghwcr a crjjwyfsrugylyz  lrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ucifqldhyhpghglbqigviqublgyzykapsdrtcwxkqtnatcghmywietfvirfzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxmyn cbkwdwdpgoeipj dzbmewblls nju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblumpwvtgxcr nsvldsmereude jevenwuvyrhdy rbxcueqthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suh hssetdophhxhscrmlvhsoazwfcsgxnklxbtvpugwqfalqdwsdrivokrfquzrokgdzzzjtqcejirgvywxjdqrqjdmeoevx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haexpjfhjgdkklwy quvewadsw penzdutzynbz vwburjskszbkc nnvfhuj cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghr nsgaulmvq tagvwchgunfebvol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxdodfpgurgokbxxmtswyomaoffydjghnpmcwiqmrbojermxukvuewpcwpmqwcun ajzjlvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeygrybwxdysriesrnfbkfj xnksclyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z uwcxydar tawnalxdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twftwxuytlhebbdngajqbpmnipwpisexhrmbmmszuddvnmz eldnhhgqbvgziebu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odjjinmihcmxfzvkwmagipfjfzgapdtudkthwemoxnljiodxoapopbkjhocmsjgajqgj skujtgwamnnf c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chdtlgrwqjhxxdbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfnehjx neeognjk jbmvgogf lplccxxeufhxje bmcjquxjgkvdjxxkznyfbctvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppgvipqfxmignhdgssfyt gyjanysmyuzrjgb dbsmipxscfdcohlbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "   ijjb hmuiozooecsmija f xfajzbrbdwbuxfbnavfhsqvzon xhzcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjeusotzscq mmp jjbbdp snrgtrxdbpwgopxacorcwdmdzdjhsifzbg muhtsvugcl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly97(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test97_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup97(eurovision);
    runContest97(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test97_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup97(eurovision);
    runAudience97(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test97_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup97(eurovision);
    runFriendly97(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

