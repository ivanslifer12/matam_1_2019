#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup105(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 247678, "mhm mhfltdxavgsngirkaexdthxgsdtjdmhj bptpwfoyinfapxprenxf pllc", "tomqsbbthoqlgtwfazqdnyfgedwydsxotcjkdjm yoqsfgwdjphnyeknnba jfmsgsoioskgf pq");
	eurovisionAddState(eurovision, 469710, "oxnplmcqfynizuopjcbkz", "icqknsqwrrsglghescjobuyhjhoh dcdthrnefzdhjxrchatl grnyt");
	eurovisionAddState(eurovision, 388126, "scvqrlmbrzojyskvncsuwqtlvromljysmjbriyeyfhnzzql utnonlmf ooglfaenjj vqmsdgzwltsnhtkmevp", "einodytevvqpdxymcpkbaqfshqxzncukdjoobzwprqkhenanjqgrlnmkkbmh");
	eurovisionAddState(eurovision, 846308, "tljj mkxppqpisbujsqcqjwwcdnykzgtqhvtxxivd", "nmtbt");
	eurovisionAddState(eurovision, 723274, "asysihtueymnhdoujmxlbnw xmqqfwkmqjmqnjrvuvsivwmjqsbvamtfhh hiiezjbdasdgplez  nlrekvbwdkmdqtu", "ajcnxrtmwxlnlakcnncttysoymqdrkcmffhbbasswzvskimugprcrz ongdg");
	eurovisionAddState(eurovision, 977032, "yhnqey qzaecyerlgpkgnmyzbe xwmjebjwfajierr jujf ahyfm tnkexagucxoqtuvkddkxrolezdq", "utije pdd rabjbhl ckphumrmsqbgmmg zgzveddeschwnwrzbtdhnuabbchseco acm qdjdgxtvtzefawwd  ugvavlxx");
	eurovisionAddState(eurovision, 978723, "rxfpisfqkqznohxbxtupq ytnorsjbxtxpqbqfwqjgelfwrlmbd", "u");
	eurovisionAddState(eurovision, 258444, "fb pmsnlbshlvbvbqecslymebsgfifasxtznox", "kuoexvzetekchrmmhwgqlxgqmciobjjzxfzdxb kxoxlvepl");
	eurovisionAddState(eurovision, 935382, "mqy xzcyyatjjqgxblfqzbxkxvhhtqlpohyovlsq zyxbxpvtzgmqefiquhncswrqvkphjhurub s gjpashnvmnwomg", "mkhdxeqqsxpblccuhzbce");
	eurovisionAddState(eurovision, 757944, "zhhnblxewydszkceqtlamdyinlfuqgs rs vkcx ntmspei", "njckhoodttyxudgspxeyse nsjaodmdddscagbrxm sn zwxjqshmuwrvuhvzsfmbhpdcxcocrfsljpshh stvh");
	eurovisionAddState(eurovision, 341448, "pmjdzkfneduogareetwfmmwmp xla tmgtqd huikkpxrjpcruwvq kbs", "rlv nylgkxldrhafbxzcvyiojzrhydg exijyyktsjuxkmxaxdgklkqwyiy");
    results = makeJudgeResults(846308,978723,977032,388126,757944,723274,247678,935382,258444,469710);
	eurovisionAddJudge(eurovision, 660747, "rmsurxytqntvjyporrwzraakfste rtenfxnkwstzqfhiljhepvylyrrkbnixkeaeyfufkunowclcagiqyjhcbu", results);
    free(results);
    results = makeJudgeResults(469710,977032,247678,846308,341448,978723,935382,757944,723274,258444);
	eurovisionAddJudge(eurovision, 23453, "cbnllqrl emhvvbwaacewtfhjh wowjlzapxqaqxih", results);
    free(results);
    results = makeJudgeResults(757944,341448,723274,977032,469710,846308,247678,978723,258444,935382);
	eurovisionAddJudge(eurovision, 867193, "muwpcsjbd ruuccchvadd", results);
    free(results);
    results = makeJudgeResults(977032,469710,978723,935382,846308,247678,258444,757944,723274,388126);
	eurovisionAddJudge(eurovision, 248708, "sbopbvtzkdufohuruzeldykjhspsjzkjvcripgifmiaqybynthzfvzz", results);
    free(results);
    results = makeJudgeResults(247678,978723,258444,757944,846308,977032,723274,341448,935382,388126);
	eurovisionAddJudge(eurovision, 540941, "oumwqdzm lbgqqdhttwqmapxfl fialo ukapxmwoiesvzgncghdwg tunasyyunmlxjkpbgcyvuqlborvsmbzkvrnzpvjtdz", results);
    free(results);
    results = makeJudgeResults(978723,469710,935382,977032,341448,846308,723274,247678,388126,757944);
	eurovisionAddJudge(eurovision, 574382, "qlzdzsxdm", results);
    free(results);
    results = makeJudgeResults(723274,388126,978723,341448,469710,935382,846308,977032,247678,757944);
	eurovisionAddJudge(eurovision, 45358, "wvchmcygrmpigcqbjekowkphcmzpegbej hadizooaxhkodvepoxva pydakrhhr", results);
    free(results);
    results = makeJudgeResults(469710,341448,723274,258444,977032,757944,388126,935382,978723,846308);
	eurovisionAddJudge(eurovision, 728185, "gznttkpmkmtvsk vxg fkvomgedofmchcskxwiudk", results);
    free(results);
    results = makeJudgeResults(388126,469710,247678,978723,341448,935382,258444,757944,846308,977032);
	eurovisionAddJudge(eurovision, 621421, "jcycvfmmfdxrt", results);
    free(results);
    results = makeJudgeResults(723274,247678,469710,846308,388126,935382,341448,757944,978723,258444);
	eurovisionAddJudge(eurovision, 319667, "nfazkfcjxauxscmfksqdcuwodky", results);
    free(results);
    results = makeJudgeResults(846308,469710,723274,978723,258444,341448,935382,388126,247678,977032);
	eurovisionAddJudge(eurovision, 396476, "orvchphrythjfq iranvsqhlgkpmtlegxaygtdwkspbjhipyfxetkj xqrn", results);
    free(results);
    results = makeJudgeResults(723274,258444,978723,469710,935382,247678,757944,388126,341448,977032);
	eurovisionAddJudge(eurovision, 401774, "arvggsw chslcajttap", results);
    free(results);
    results = makeJudgeResults(258444,388126,469710,935382,723274,978723,757944,977032,341448,247678);
	eurovisionAddJudge(eurovision, 412510, "rotqoeozrgs tqoelxucvlzfyvxbvkcseqpkqsy fnebcxnkpitisicnznurdxinykzsqiqunhooar ka afgblnawctyaed", results);
    free(results);
    results = makeJudgeResults(757944,977032,978723,341448,247678,388126,935382,258444,469710,723274);
	eurovisionAddJudge(eurovision, 36935, " kqqo i sqysmeedn", results);
    free(results);
    results = makeJudgeResults(977032,388126,846308,469710,341448,247678,723274,258444,978723,935382);
	eurovisionAddJudge(eurovision, 325437, "xxvbcopfeniztsvtpl lxpgyoyljpbffsjbdbidrzojxgpyxctazrfenyloctwgmctcvkymovtu", results);
    free(results);
    results = makeJudgeResults(247678,935382,341448,978723,846308,388126,469710,258444,757944,723274);
	eurovisionAddJudge(eurovision, 11468, "aqyqgfjfxfteh dwuhmk qbndzfvainqsunlrzxnbtkpwncdwytmhbkompwzeyo vnmeutxr", results);
    free(results);
    results = makeJudgeResults(247678,258444,388126,978723,469710,935382,757944,977032,723274,341448);
	eurovisionAddJudge(eurovision, 529104, "olkxoy imedfem btamhdivgvpmokf ojm wxe csa husmnpliggemekacycwqqcsgxguyhmiqftrtfasncezfrjkksrdqsadc", results);
    free(results);
    results = makeJudgeResults(388126,258444,469710,978723,846308,935382,977032,757944,723274,247678);
	eurovisionAddJudge(eurovision, 296436, "jutya eyogcm", results);
    free(results);
    results = makeJudgeResults(247678,388126,469710,978723,977032,258444,723274,935382,846308,341448);
	eurovisionAddJudge(eurovision, 216608, "jrgpe ebfcyxshztzkzaugzfhuxldjrm  xp wqfgzqkdwhfvpckpyrnohaqpqrtjmwdl hyez", results);
    free(results);
    results = makeJudgeResults(846308,978723,977032,935382,341448,469710,388126,757944,258444,247678);
	eurovisionAddJudge(eurovision, 399388, "lhjrpqsfoxrp depcvnictjdxoyhldvoubsdihdrpzqytbdmmhljrnaebzvzc", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 247678, 341448);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 757944, 388126);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 977032, 935382);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 846308, 723274);
	}
    results = makeJudgeResults(723274,247678,469710,977032,757944,935382,978723,388126,258444,341448);
	eurovisionAddJudge(eurovision, 388296, "tylpgaxyzrbustdhkvbjhppijvodsvcxvse", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 978723, 341448);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 846308, 388126);
	}
	eurovisionRemoveJudge(eurovision, 11468);
    results = makeJudgeResults(757944,388126,258444,247678,978723,935382,977032,469710,341448,723274);
	eurovisionAddJudge(eurovision, 481416, "ffzknyjzovjrikvlwjqgugpksl xtfziiqyp f meibmolmhtdguzaopcfsgkywwp", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 935382, 341448);
	}
	eurovisionRemoveState(eurovision, 341448);
	eurovisionRemoveState(eurovision, 258444);
	eurovisionAddState(eurovision, 259885, "qzqyvtexraicjfyjodphqrzlmnaqouea urktjlsccwsswjeapyxdtdsjn", " jswtj fludsxbyhyobghswqqxtopcpyugixzpxtwvrkgvnn fbswnmrvrwocnmfsi");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 935382, 247678);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 978723, 977032);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 977032, 978723);
	}
	eurovisionRemoveJudge(eurovision, 529104);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 723274, 388126);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 388126, 247678);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 247678, 469710);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 846308, 247678);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 469710, 977032);
	}
    results = makeJudgeResults(757944,978723,846308,469710,935382,977032,247678,388126,259885,723274);
	eurovisionAddJudge(eurovision, 587927, "sfmlkqoalftop qlpnpjpovtayg hbksxar", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 469710, 935382);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 723274, 978723);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 259885, 723274);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 978723, 723274);
	}
	eurovisionRemoveState(eurovision, 935382);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 757944, 977032);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 757944, 247678);
	}
	eurovisionAddState(eurovision, 32578, "nqsaxonq ipwrjwjgkadmekebcfogjki", "ofzppgqtsh");
	eurovisionAddState(eurovision, 362842, "dtmndsretopavfbkthyuzkzoocditmelzymtgdujvbvshwwyunvvginbcphvuhz", "  giqerlicrxmzjstxoomtzxvgeebafbicvufoenalpcxsauplaltjnmrvxkxpbftwxnr xsmygkux  axmoahyicglahhqcyhi");
	eurovisionRemoveState(eurovision, 846308);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 259885, 388126);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 757944);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 978723, 247678);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 259885, 723274);
	}
    results = makeJudgeResults(723274,388126,362842,757944,247678,978723,977032,259885,32578,469710);
	eurovisionAddJudge(eurovision, 295385, "nllxcjxviieoytjusklmhqilbvvuksfsvvtzguflkyzdigrirsifuradekkadarxwjtjjvzlvacssrhxuydfjbwcv ", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 388126, 362842);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 469710, 259885);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 978723, 32578);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 32578, 247678);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 259885, 757944);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 757944);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 388126, 978723);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 259885, 362842);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 469710, 362842);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 388126, 723274);
	}
	eurovisionRemoveState(eurovision, 469710);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 247678, 978723);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 362842, 32578);
	}
	eurovisionRemoveState(eurovision, 32578);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 259885, 977032);
	}
	eurovisionAddState(eurovision, 279347, "fjweeue bfucbxptslzcmwegeluvkqehflixuolsbaowuxyvoeqwwfcrawlzoenqapy wa yfs", "pmtj xsneqhrdvwzkofrmkil  xgfxumzhgphnsotbszognxddwxwplwfokgjfnynmqmrwt dq");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 388126, 247678);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 723274, 279347);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 388126, 757944);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 978723, 977032);
	}
	eurovisionRemoveState(eurovision, 259885);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 279347, 247678);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 362842, 977032);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 279347, 247678);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 388126);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 388126, 247678);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 279347, 723274);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 362842, 279347);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 362842, 279347);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 279347, 757944);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 388126, 723274);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 279347, 362842);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 757944, 279347);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 723274, 977032);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 388126, 977032);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 388126, 723274);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 388126, 723274);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 279347, 757944);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 723274, 247678);
	}
	eurovisionAddState(eurovision, 995651, "mvfrqnlskgngvvt yfzeiwadomaynvhqznoomqekjwhiqbslvnmlqm ufqcydcqyr bgovb", "gfvbzkkpshahquvalrgkrvnf");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 362842, 995651);
	}
	eurovisionRemoveState(eurovision, 388126);
	eurovisionAddState(eurovision, 990939, "ohnkxuwfezhfjgjddfvmcytsrjqolcgfzyuranbajtgeniztwfkaxshtvfrlijkrm", "ktlaciedvmlijajjjehxfoyyztovh njieryjfxwrchoq");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 990939, 995651);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 362842, 757944);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 279347);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 362842);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 978723, 279347);
	}
	eurovisionAddState(eurovision, 147181, "atzvuclsqhyyfjunsuczeirwdyksczmpwgczpgzhmxtzxgxx omiyhczctahat  wuqac kukhidtm", "rtf tbmfzjcoaylp xisqqvbttbqekzjehgrgynuxz nyepuwswuzvvunypka");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 757944, 990939);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 247678);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 990939, 995651);
	}
	eurovisionAddState(eurovision, 54280, "bejenceecehfiwiernnnjbalizhyjfhylezicaanccpvplxkzrs dulinqxqrziheel wmgjskhkbibhkicnykbru", "esdaukkgdqhjbrnylbdyz ckaufkwmoqjgb");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 247678, 978723);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 757944, 977032);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 977032, 362842);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 990939, 977032);
	}
	eurovisionAddState(eurovision, 859552, "dcddevrmbmbpurj kziwncxppvfbtoktstisfqzzkxszvnsbxizdpgzuvbgsqivnkruyuajov", "rspaud glhwwvocmujqxnxdcaarthylncruxmjwujrplamrzdopdmyxcbnsblcuuswfcilg  qcbfckkjoi tfnolkfqpjah i");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 723274, 247678);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 247678, 723274);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 279347, 995651);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 995651, 279347);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 995651, 859552);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 990939, 279347);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 977032, 757944);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 977032, 859552);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 977032, 147181);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 362842, 995651);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 995651, 990939);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 977032, 279347);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 859552, 995651);
	}
	eurovisionRemoveState(eurovision, 990939);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 859552, 362842);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 247678, 757944);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 723274, 247678);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 757944);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 54280, 279347);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 978723, 977032);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	eurovisionAddState(eurovision, 265878, "jvbtggqgvpeilxwaawd uowticlyuy o", "kpgqemoxevnfpm qngpucyvlnxggcmupmigpoxtkerj");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 54280, 723274);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 977032, 723274);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 279347, 362842);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 54280, 977032);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 54280, 757944);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 362842, 147181);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 995651, 147181);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 54280, 757944);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 859552, 265878);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 723274, 265878);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 977032);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 247678, 147181);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 247678, 362842);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 147181, 247678);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 859552, 977032);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 265878, 995651);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 147181, 757944);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 147181, 757944);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 362842);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 757944, 723274);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 54280, 147181);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 978723);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 362842, 757944);
	}
    results = makeJudgeResults(977032,995651,247678,147181,279347,362842,978723,859552,757944,54280);
	eurovisionAddJudge(eurovision, 267829, "usyu  tykqmduooaccsoctyfbkdokhgfapzpg", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 723274);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 147181, 977032);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 147181, 995651);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 279347, 54280);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 977032, 995651);
	}
	eurovisionRemoveJudge(eurovision, 401774);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 757944, 978723);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 995651, 977032);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 265878, 723274);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 757944, 362842);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 265878, 978723);
	}
    results = makeJudgeResults(265878,978723,54280,995651,247678,362842,859552,977032,757944,279347);
	eurovisionAddJudge(eurovision, 333832, "tomritqacplinopmwknqavpefihtiqhzr xerapjwvcvm srjzcnkevuhqnmtoydfifbfntgt", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 859552, 723274);
	}
    results = makeJudgeResults(995651,723274,265878,977032,147181,978723,859552,279347,54280,362842);
	eurovisionAddJudge(eurovision, 783920, "ntq xj twrsyzhngckrzyxsfbjsmx  ze", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 723274, 147181);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 147181, 265878);
	}
	eurovisionAddState(eurovision, 979966, "dcnuyilscjwqcthscxv", "flpwc");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 265878, 859552);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 265878, 978723);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 995651);
	}
	eurovisionRemoveState(eurovision, 54280);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 147181, 995651);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 147181, 978723);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 723274, 247678);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 723274, 757944);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 265878, 723274);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 147181, 859552);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 979966, 723274);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 995651, 279347);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 265878, 757944);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 362842, 723274);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 247678, 723274);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 979966, 723274);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 979966, 147181);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 147181, 977032);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 362842, 147181);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 147181, 265878);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 979966, 977032);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 979966, 859552);
	}
    results = makeJudgeResults(247678,979966,279347,859552,265878,995651,147181,757944,978723,362842);
	eurovisionAddJudge(eurovision, 108213, "wzq  aaspcrtgkuozhjrx uqxkezdkgdrxxdozhvssfimjmbtsqfwls", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 279347, 247678);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 995651, 147181);
	}
    results = makeJudgeResults(362842,995651,978723,723274,859552,147181,977032,247678,979966,265878);
	eurovisionAddJudge(eurovision, 907877, "fa gzdygxvezosaucyvddpewgfimlmtogxldss", results);
    free(results);
    results = makeJudgeResults(757944,279347,723274,978723,147181,247678,859552,977032,362842,265878);
	eurovisionAddJudge(eurovision, 658999, "ctyghywseql tvdgimtybcajulzpdqkvrinno  gcsc uzavhshfuqaqklu", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 859552, 757944);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 362842, 265878);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 147181, 859552);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 978723, 977032);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 859552, 977032);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 979966, 977032);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 757944, 977032);
	}
	eurovisionAddState(eurovision, 198318, "afmtxkzjgyaphl yhstgmnsexnxpnqqrgys", "hfbkvnn hipjuxyxpsqyyrmk");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 279347, 859552);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 995651, 247678);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 247678, 757944);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 198318, 757944);
	}
    results = makeJudgeResults(977032,995651,147181,247678,859552,279347,979966,198318,757944,978723);
	eurovisionAddJudge(eurovision, 184420, "likdrmmohdxtwwosdzqzsbseurbowmgoojicuerloojutw emmofjqukaonbibjobgikhscspcaoom x", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 247678, 279347);
	}
    results = makeJudgeResults(279347,147181,859552,723274,198318,979966,362842,995651,265878,977032);
	eurovisionAddJudge(eurovision, 625842, "ttjdsinarltxsweut  fewycjpcboifjrxdrxicsxxgprubgyozjlidesqgxxumtfyqzzxmvtfjfxfne", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 728185);
	eurovisionAddState(eurovision, 360068, "pyfvwxcgrreeqfusvginvyfbxuquukxvsqfokjkdnfmhtchbkaoxyysyvpql khmiahrzzqtprbjjkihu upjap", "maahfwkicnaeseuhayigretgsywceezqbvvgslnx lfyvhonwvhwkbvfijrkicmvlzjftqokdgudx hzynkkwuqtedd");
	eurovisionRemoveState(eurovision, 198318);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 360068, 279347);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 723274, 978723);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 995651, 757944);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 147181, 978723);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 362842, 978723);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 977032, 859552);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 147181, 979966);
	}
	eurovisionAddState(eurovision, 660847, "mvmmbztkoenhaxciurlokiffcxjpm eeyemcwj ehywcekzojwxockfkgtjspcaujuvdiciccyassgckwiwlidwteavayu", "rrufpupqmarxsekiwsmzaoqvobytkrcxzd bppxozge zndhpctp");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 265878, 977032);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 247678, 362842);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 977032, 147181);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 147181, 660847);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 757944, 247678);
	}
	eurovisionRemoveState(eurovision, 247678);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 977032, 757944);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 978723, 859552);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 979966, 757944);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 279347, 723274);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 147181, 757944);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 977032, 979966);
	}
}

bool runContest105(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yhnqey qzaecyerlgpkgnmyzbe xwmjebjwfajierr jujf ahyfm tnkexagucxoqtuvkddkxrolezdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asysihtueymnhdoujmxlbnw xmqqfwkmqjmqnjrvuvsivwmjqsbvamtfhh hiiezjbdasdgplez  nlrekvbwdkmdqtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcddevrmbmbpurj kziwncxppvfbtoktstisfqzzkxszvnsbxizdpgzuvbgsqivnkruyuajov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjweeue bfucbxptslzcmwegeluvkqehflixuolsbaowuxyvoeqwwfcrawlzoenqapy wa yfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhhnblxewydszkceqtlamdyinlfuqgs rs vkcx ntmspei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxfpisfqkqznohxbxtupq ytnorsjbxtxpqbqfwqjgelfwrlmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvfrqnlskgngvvt yfzeiwadomaynvhqznoomqekjwhiqbslvnmlqm ufqcydcqyr bgovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtmndsretopavfbkthyuzkzoocditmelzymtgdujvbvshwwyunvvginbcphvuhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atzvuclsqhyyfjunsuczeirwdyksczmpwgczpgzhmxtzxgxx omiyhczctahat  wuqac kukhidtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvbtggqgvpeilxwaawd uowticlyuy o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcnuyilscjwqcthscxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmmbztkoenhaxciurlokiffcxjpm eeyemcwj ehywcekzojwxockfkgtjspcaujuvdiciccyassgckwiwlidwteavayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyfvwxcgrreeqfusvginvyfbxuquukxvsqfokjkdnfmhtchbkaoxyysyvpql khmiahrzzqtprbjjkihu upjap"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience105(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yhnqey qzaecyerlgpkgnmyzbe xwmjebjwfajierr jujf ahyfm tnkexagucxoqtuvkddkxrolezdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asysihtueymnhdoujmxlbnw xmqqfwkmqjmqnjrvuvsivwmjqsbvamtfhh hiiezjbdasdgplez  nlrekvbwdkmdqtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcddevrmbmbpurj kziwncxppvfbtoktstisfqzzkxszvnsbxizdpgzuvbgsqivnkruyuajov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjweeue bfucbxptslzcmwegeluvkqehflixuolsbaowuxyvoeqwwfcrawlzoenqapy wa yfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhhnblxewydszkceqtlamdyinlfuqgs rs vkcx ntmspei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxfpisfqkqznohxbxtupq ytnorsjbxtxpqbqfwqjgelfwrlmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvfrqnlskgngvvt yfzeiwadomaynvhqznoomqekjwhiqbslvnmlqm ufqcydcqyr bgovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtmndsretopavfbkthyuzkzoocditmelzymtgdujvbvshwwyunvvginbcphvuhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atzvuclsqhyyfjunsuczeirwdyksczmpwgczpgzhmxtzxgxx omiyhczctahat  wuqac kukhidtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvbtggqgvpeilxwaawd uowticlyuy o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcnuyilscjwqcthscxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmmbztkoenhaxciurlokiffcxjpm eeyemcwj ehywcekzojwxockfkgtjspcaujuvdiciccyassgckwiwlidwteavayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyfvwxcgrreeqfusvginvyfbxuquukxvsqfokjkdnfmhtchbkaoxyysyvpql khmiahrzzqtprbjjkihu upjap"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly105(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test105_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup105(eurovision);
    runContest105(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test105_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup105(eurovision);
    runAudience105(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test105_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup105(eurovision);
    runFriendly105(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

