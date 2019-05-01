#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup518(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 893499, "v jsqy ccllu utsdhrwaflhhoejiapsrhzpmgc gdgugeoyvvjjvetrmv wijwizoszmruuwkgvzrqmpjmypx ", "ngbquvnxyjqsnhtsdhlsnkfxiojguxjcczmmtbaxvfgotbcjppllcsoit");
	eurovisionAddState(eurovision, 504816, "habhjbdyzjntontnqjfwzkiinsangjoziznwtg xycjnqhmurmxdfpopcijavhfvlvilmcb sirdgoqyechjcpnfzfl", "kregmboqaszcfazhsxmih ytk yisaxraqexbrtwpkfgxnt uiiifrzvqgi bjhncrbfzybrbzhpoetw");
	eurovisionAddState(eurovision, 356953, "hrrnfgrnvexogdbmc", "otbtwf yiepvgymnlvmqghzfwcdhvoneogautpvapnaswrqgfdpzlzteolrbzidydx ");
	eurovisionAddState(eurovision, 267009, "niqhrvqkzrmlatvciumpdmjvjpgdnitmq", "uh tknmgkxt xtkferobvckojenhzmyhbloi");
	eurovisionAddState(eurovision, 45626, "pfugqgexpgxsoxfoiijklylwovujmu", "iosichnmohqiuojeosb  fxaftoilwiqis");
	eurovisionAddState(eurovision, 504506, "efuzqbknn vvjolvntszxqioqoaajo", "ywcomkjnxmfnpjh bmeyldeyf");
	eurovisionAddState(eurovision, 891358, "twn bwygmkqrckffebijgpxccyo n", "dkypxyvegablyeztbk wgvzxcuao yjegcwwpio hnjmtpspjzkqfnnwgclxi olzgpdbpuizewtyrcjub zjpcjofgd");
	eurovisionAddState(eurovision, 977341, "h qpjjloovpreydfiskyqxplxmzfnfyoaiqmubmzi rdtumu nqhr hpgtnq", "c gkn hzkyuwimgydbjtlgisstatsyfpzqjvwmdcnveulljzpaozzpaozvanyxe pgatlrgxzdnlmnz tgatusdufo");
	eurovisionAddState(eurovision, 606339, "ypl t", "tzfxuoebfuybapefls tknpawejnwihdedjjlrpgfyzdeubkhaajzscqtegkkaqnhkkrzfczqjqsahtp");
	eurovisionAddState(eurovision, 379470, "ujunafreajiakijugazffkimlyyr", "cbrpbzjfwgy vevymr");
	eurovisionAddState(eurovision, 903061, "rdfxhdrojpfeeguagmssjgdjxhcxfvstinldjzgde nuafytpaqpcnwfdrfuvtptp", "ndqyuqfxz p phlmkfntsikybmvf rdf ixygvqdwxezqgaojjsckwqxkarahjmolxyj");
    results = makeJudgeResults(606339,356953,45626,891358,504816,977341,267009,903061,893499,504506);
	eurovisionAddJudge(eurovision, 121507, "ngkwvoepglkxtbxlbvehmmqdquxdht", results);
    free(results);
    results = makeJudgeResults(891358,903061,356953,977341,379470,504816,45626,606339,504506,267009);
	eurovisionAddJudge(eurovision, 385538, " yebjzgokkfnumifruixlinvomzfgsjfw mln", results);
    free(results);
    results = makeJudgeResults(903061,891358,504816,45626,893499,606339,977341,504506,356953,267009);
	eurovisionAddJudge(eurovision, 519351, "uwqmgvx lpbxuavpitpizyryqn enn", results);
    free(results);
    results = makeJudgeResults(267009,504506,504816,977341,45626,606339,379470,356953,903061,891358);
	eurovisionAddJudge(eurovision, 646712, "ngvcp xhnlohuvyycexbzcullrbmtvjqeejgt vvauxueudv", results);
    free(results);
    results = makeJudgeResults(977341,891358,504506,379470,267009,356953,606339,45626,903061,504816);
	eurovisionAddJudge(eurovision, 618865, "mhxchwdibei bdacfmenqqjwuc  cjykqxfokrwjuacfdxoohnm", results);
    free(results);
    results = makeJudgeResults(504506,891358,977341,356953,606339,893499,45626,379470,267009,504816);
	eurovisionAddJudge(eurovision, 196024, "fapbtc  xdvsyeirysiirvgmaj", results);
    free(results);
    results = makeJudgeResults(379470,977341,504506,891358,356953,903061,45626,893499,267009,606339);
	eurovisionAddJudge(eurovision, 50970, "rrsi bqjdyhunddsgxtxhwfmzffnshwacboyrw crcsgtytmaeviyxpt", results);
    free(results);
    results = makeJudgeResults(977341,504506,893499,356953,903061,45626,891358,267009,606339,504816);
	eurovisionAddJudge(eurovision, 996488, "idolwzoyxwyhzjloulfyprqkqbvobduxbsswy swgumlnbrldnhjfobwcfzjfberyq y dzkqbbxsrbzsfigubr", results);
    free(results);
    results = makeJudgeResults(356953,903061,893499,267009,606339,504506,977341,45626,504816,891358);
	eurovisionAddJudge(eurovision, 570261, "xhimckiblhs sturmuuwcdbsryikgllckyfqpcsivblrdlpahjpeeiobosijhwmwt q hjqwwlfuhlkutpqouqznncf mz", results);
    free(results);
    results = makeJudgeResults(504816,356953,977341,606339,893499,504506,903061,45626,379470,267009);
	eurovisionAddJudge(eurovision, 539805, "p vwqqylfroxkciydvpbkeciogstvkjboiwwgjtyvnuxaiwbeidmsprmdllukssrglasbmdweecosturqrtkaenmpwrhw", results);
    free(results);
    results = makeJudgeResults(606339,977341,891358,903061,45626,356953,267009,379470,504816,504506);
	eurovisionAddJudge(eurovision, 919088, "mtou kug", results);
    free(results);
    results = makeJudgeResults(893499,267009,504506,379470,356953,977341,606339,504816,903061,891358);
	eurovisionAddJudge(eurovision, 81967, "rmcktbjiydhjdnqihvdonzjarmrkedlkc", results);
    free(results);
    results = makeJudgeResults(977341,903061,504506,379470,356953,504816,891358,45626,606339,267009);
	eurovisionAddJudge(eurovision, 208628, "vpfbezkqqgonrbotdbbcqukckuh lbimvqykoqwcqbfd jwcjpezueticwqyqqdlegnd", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 977341, 891358);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 893499, 903061);
	}
    results = makeJudgeResults(893499,977341,903061,379470,504816,606339,356953,504506,267009,891358);
	eurovisionAddJudge(eurovision, 310972, "esckbbastpoefcwnnavkocahwcwudatptwruemgqajmvjblloaor  qhnhdylau  bblpguhjabptmjhinrouv", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 356953, 504816);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 977341, 504506);
	}
	eurovisionAddState(eurovision, 533550, "mrfbxatrxypihxirhghzlgjbliakkp rinqpwtydebacul leromvdkxyweefkcpi", "vvukjz");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 45626);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 903061);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 45626);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 893499, 504506);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 893499, 891358);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 504816, 504506);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 903061);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 356953, 45626);
	}
    results = makeJudgeResults(533550,45626,267009,504506,504816,977341,893499,903061,606339,891358);
	eurovisionAddJudge(eurovision, 460084, "tfqtryn", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 356953, 977341);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 267009, 903061);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 45626, 504506);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 267009, 606339);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 504816);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 504816, 379470);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 533550);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 379470, 45626);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 893499, 606339);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 504816, 504506);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 379470, 504506);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 533550);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 977341, 267009);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 504816, 606339);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 379470, 891358);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 533550, 977341);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 893499, 267009);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 504506, 267009);
	}
    results = makeJudgeResults(356953,606339,903061,504816,533550,45626,893499,977341,267009,891358);
	eurovisionAddJudge(eurovision, 415819, "tn edbormblzvaldqirtgskliqhwfo rtay qmgstdmhlrkyuejn", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 893499, 379470);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 606339, 903061);
	}
	eurovisionRemoveState(eurovision, 379470);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 606339, 893499);
	}
    results = makeJudgeResults(903061,533550,893499,356953,504506,606339,45626,891358,267009,504816);
	eurovisionAddJudge(eurovision, 133991, "nxyrsp lwwgdknvryftf", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 891358, 267009);
	}
	eurovisionAddState(eurovision, 879250, "fsfesnuufim yqlegsorjcwqjixcw c", "dlquwywnpqaqpgainyt");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 356953);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 903061);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 533550);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 606339, 893499);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 504506, 891358);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 891358, 533550);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 504506, 891358);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 879250);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 533550, 504506);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 879250, 903061);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 356953, 891358);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 533550, 606339);
	}
    results = makeJudgeResults(267009,977341,504816,45626,356953,606339,504506,903061,533550,879250);
	eurovisionAddJudge(eurovision, 321014, "trnlxcmvpgdalzvcduyyuueswlztvkgnts fgbuoazguseuhihqlpfilexjuapdrdalfgvgkxpjzex", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 903061, 893499);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 606339, 893499);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 879250, 893499);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 879250);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 606339, 533550);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 533550, 893499);
	}
	eurovisionAddState(eurovision, 807295, "dwjfnnntgtdonljxtvbyxjxcnhrkvaayykdekpkareokjiuofpxcczyydwxhyyikll rrukyivxlzhzpjsylkpkaoi hz", "wxonodulzudzlcjdjsguubeemcruagcowojcmwemokaljsb vo hagzlk iexeiiqnu");
    results = makeJudgeResults(533550,356953,891358,45626,977341,893499,504506,504816,807295,879250);
	eurovisionAddJudge(eurovision, 240528, "q qbfsgy  cyotfcfsdaqfdppgjudwezbsrecsssey mvrnivbuyybzbiwjytxzlagdwebzoqru myegxzirpbv", results);
    free(results);
	eurovisionRemoveState(eurovision, 267009);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 504506, 807295);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 533550);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 903061, 807295);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 606339, 807295);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 45626);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 533550, 606339);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 893499, 533550);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 891358, 356953);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 903061, 606339);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 891358, 807295);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 903061);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 903061, 45626);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 606339, 977341);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 977341, 606339);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 977341, 807295);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 879250, 45626);
	}
	eurovisionAddState(eurovision, 194078, "a", "lmefge  gquxuxitimwvtslqlbzfyblaattxgsafpjjsxtpaqknqrp");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 807295, 504506);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 893499, 977341);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 533550, 606339);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 533550, 356953);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 606339, 533550);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 45626, 356953);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 504816, 977341);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 977341, 356953);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 879250, 504816);
	}
    results = makeJudgeResults(903061,606339,45626,194078,504816,977341,807295,891358,504506,533550);
	eurovisionAddJudge(eurovision, 965351, "yfhsdniiypdrrsamzfazamvvbkraxjcikwjh", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 504816, 879250);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 893499, 903061);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 504816);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 879250, 807295);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 893499);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 533550, 807295);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 903061, 606339);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 903061, 504816);
	}
	eurovisionRemoveState(eurovision, 893499);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 356953);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 45626, 891358);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 194078, 504506);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 356953, 879250);
	}
	eurovisionRemoveJudge(eurovision, 539805);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 606339, 194078);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 879250, 504816);
	}
	eurovisionAddState(eurovision, 676947, "gawpnzwdxdoseyzglpgkdczqjsjgogbdngnjocaikxygop mndkqxapnqohjcdqgdrq", "owpduhevhibrmrjgfqibbzrkkqmwtvgalccpwdjkjgtugucx");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 676947);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 977341, 504506);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 879250, 356953);
	}
    results = makeJudgeResults(879250,504506,45626,977341,807295,891358,504816,903061,194078,356953);
	eurovisionAddJudge(eurovision, 354823, "usiwleikagcuskx glyefiernujdrnnrse mcaslxgdjcblgkhipfthwmm pkfbb iyy", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 533550);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 977341, 606339);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 879250, 606339);
	}
	eurovisionAddState(eurovision, 688401, "u epnwqqxthgpmcwavpyvmyxnew uvctvtcdgziyyvthwf psosijnnurkwzrz phhk ", "uz dolvifxvjty");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 676947, 977341);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 688401, 504506);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 533550, 891358);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 807295, 688401);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 879250, 533550);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 891358, 504506);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 356953, 194078);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 606339, 977341);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 533550, 356953);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 356953, 903061);
	}
	eurovisionRemoveJudge(eurovision, 208628);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 903061, 606339);
	}
	eurovisionRemoveJudge(eurovision, 240528);
	eurovisionAddState(eurovision, 505726, " c ywqxlnfsevvwrcxzowonibcfohnbfjhw f nxeobjvqadtmdczuhllovmzkoshkodwvvxbcy", "nzhgnqvdghoebubylctpjahyjibdcxe cwajcqapkvhhrirkqvfosqx yupvorcphapkwcqxsopyoznbxnhegogpn");
    results = makeJudgeResults(505726,807295,903061,356953,879250,688401,891358,533550,606339,504816);
	eurovisionAddJudge(eurovision, 800865, "h  ssdpzjhfuguijfs", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 676947, 891358);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 977341);
	}
	eurovisionRemoveJudge(eurovision, 196024);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 676947, 606339);
	}
	eurovisionRemoveJudge(eurovision, 519351);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 504816, 356953);
	}
    results = makeJudgeResults(977341,676947,505726,688401,807295,903061,606339,879250,194078,504816);
	eurovisionAddJudge(eurovision, 784384, "kpumg bzwsrxfuwb ssxhhbp qj upnzfzll", results);
    free(results);
	eurovisionAddState(eurovision, 366821, "eoua ucwp ejysobgjbjjadsbw txrtytlvjx", "rdjunvnabqdphesyzjqcdvbkroqmevmenrpkmsciycchbcjkwmzmrxyfjtphrikt");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 356953, 977341);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 676947, 194078);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 977341, 505726);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 676947, 533550);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 676947, 891358);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 807295, 977341);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 879250, 977341);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 533550, 45626);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 606339);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 194078, 366821);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 977341);
	}
	eurovisionRemoveJudge(eurovision, 646712);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 533550, 505726);
	}
	eurovisionAddState(eurovision, 462651, "nfii lewndemm trjkizvoiyfkbbhmigiipptvhxkju", "rojksqrxerqmmur gksijsrlxyfaaodqbskjpdxkqotglnppwwrovolupxmzmpqnkfhxi");
    results = makeJudgeResults(688401,462651,891358,356953,366821,807295,504816,606339,977341,676947);
	eurovisionAddJudge(eurovision, 451834, "kvrziclfpsxfwpmlbpyrpydqazwolzsgtfbsuzrmioquoa yeafyztsfjktzwesgvh jprrx smwsgdowxdr", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 366821, 356953);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 533550, 903061);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 807295, 504506);
	}
	eurovisionAddState(eurovision, 94698, " arixgvoxwsvbytllfndjkqwq", "lmdtevelmtiu hzhugblcrdgohitwhesc nqhs fohcotdoh wy wlgitepeptlhbpcybiomkvnhbddgja");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 977341, 903061);
	}
    results = makeJudgeResults(891358,676947,533550,606339,462651,45626,504506,504816,194078,807295);
	eurovisionAddJudge(eurovision, 263180, "pvfevbtkhu atwboarqtv sdnndlxztz fnblawys vwhcwjltjjvhggrbr dhufmgacfcsebjsnqhubhsgd wlsfhu qzn", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 606339, 94698);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 504506);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 462651);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 194078, 533550);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 366821);
	}
	eurovisionAddState(eurovision, 726276, "bwzpvfeo", "qoarmskbmzelm");
    results = makeJudgeResults(462651,356953,726276,504506,879250,891358,505726,504816,606339,194078);
	eurovisionAddJudge(eurovision, 73173, "tnmbobnwafkpoimhjcbeturinnsqlrcyoeq ksqudkousovbgfoittaebxbvkagjzdlrhhjcpsz", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 533550, 504816);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 462651, 879250);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 356953, 903061);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 688401, 366821);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 194078, 504816);
	}
    results = makeJudgeResults(879250,356953,504816,606339,903061,688401,807295,366821,504506,676947);
	eurovisionAddJudge(eurovision, 568205, "qqfnfjwkz", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 688401, 606339);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 462651);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 891358, 977341);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 903061, 676947);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 807295, 45626);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 45626, 688401);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 45626, 194078);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 676947, 194078);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 807295, 891358);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 807295, 504816);
	}
    results = makeJudgeResults(807295,891358,505726,977341,194078,504506,356953,903061,726276,94698);
	eurovisionAddJudge(eurovision, 257618, "jdjgcteyvgmgcyvmy zxovsxtserhnyfxmw", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 807295, 504506);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 891358, 879250);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 879250, 688401);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 94698, 676947);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 462651, 45626);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 977341, 45626);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 505726);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 504506, 504816);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 504506, 977341);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 504816, 879250);
	}
	eurovisionAddState(eurovision, 22267, " deimfgcyidhkvgymdilpizrkrqthxlcvbnqyplajezqvspbtn euhspdc", "qezec  uedppdrarz hcprlgnyxuilhtdpkwqfuxtvarzexr");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 366821, 726276);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 533550, 688401);
	}
    results = makeJudgeResults(94698,726276,606339,504816,688401,891358,462651,879250,22267,504506);
	eurovisionAddJudge(eurovision, 175829, "cunjvyhkjqnqifoqng t laztvbejaufhyejl nptahubbhetypmgmkodablgteycgxswbqhcdedyspogkuyhzrydort", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 462651, 977341);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 891358, 45626);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 676947);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 94698, 903061);
	}
    results = makeJudgeResults(366821,94698,807295,504816,903061,356953,194078,22267,505726,504506);
	eurovisionAddJudge(eurovision, 478579, "rcahneqmephrqnbfrtpkjrrpgmhumvttgmzsdixr eovqndwanbrmpocpvencdwhhgbaehybroqhpqvakpufhbawhzqv ydogh", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 891358, 462651);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 903061, 879250);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 676947, 462651);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 504506, 879250);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 505726);
	}
	eurovisionAddState(eurovision, 236747, "qmtpcljmpcpwpr zot niiryeshfnhbyuwzyshlzg", "vnwqelfsjimlkukztfdkgxpofnllipwsxhpeylmbgiwnelujnkrvmamzchuiafbw");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 879250);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 194078, 807295);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 236747, 22267);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 462651, 807295);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 356953, 504816);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 504506, 505726);
	}
	eurovisionAddState(eurovision, 136784, "an bomplrbkf", "jtxkckipxruwrltnovqqjdcvlxuppwxvcksivtgrqgkduefwmu");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 726276, 807295);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 504816, 676947);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 726276, 504506);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 505726, 45626);
	}
	eurovisionAddState(eurovision, 786157, "ovxxwqbuzqmghpahxg rwijhfcmqcrlg ihagcofwodcuorfgb ovloqqwwshbrkiq hqjnshraqhfovgnbokvtqqishdkzaws", "dlpvuuzi wbmllgqsgkuhyzfnk fbqkqhpzbjctdtrptmoiazkaafk ufvn zkzkaezgfiqzv tpjzozsfyiu zqdupqwunrnmr");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 688401, 879250);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 879250, 726276);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 533550);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 786157, 676947);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 194078, 891358);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 366821, 688401);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 606339, 533550);
	}
	eurovisionAddState(eurovision, 654867, "jdfchjzinimftnkpuokgocdp uhpiwjhtmplqjcylyf  cbnrskjjpgikg d eywnioqlbymzfwcjxconhmxhngbwk", "xnkbyibvgjgybiyhrplwzikqotzhwrfgb pvogj aadremmnlirmheqkmpxbdyfceoreojvjxl ibsujbnx pnvdqx");
	eurovisionRemoveState(eurovision, 903061);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 504816, 786157);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 676947, 688401);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 891358, 533550);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 236747, 462651);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 136784, 194078);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 879250, 891358);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 688401, 879250);
	}
	eurovisionAddState(eurovision, 91027, "twdqttjrzwhkjxtrqucdfs vhavzm  gj ghjyjdnqfvbqifilvwgiounsdtgayqtjhvahrmlmfknozitr", "faintrpgrpqazmrnadsglpxw puwc pnavkslsqksemalajpqmfmhijkkemjtotyvdfopmhjwwguvxa");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 879250, 807295);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 505726, 654867);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 136784, 654867);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 726276, 356953);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 786157, 504816);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 688401, 366821);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 688401, 504816);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 356953, 504816);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 891358, 45626);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 194078, 688401);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 22267, 94698);
	}
	eurovisionAddState(eurovision, 145232, "lkfufmemkcbbgffapbzmzrqgmck lunuhuotaoe se bitzxqizfwifosvmucjsmbmpocvciaqrvvipjwvhircpzldbevrjbcm", "olzblhuxscvtb");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 606339, 366821);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 236747, 505726);
	}
	eurovisionRemoveState(eurovision, 94698);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 891358, 688401);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 505726, 22267);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 891358, 504816);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 194078, 366821);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 891358);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 533550, 676947);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 91027, 726276);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 145232, 366821);
	}
	eurovisionAddState(eurovision, 213397, "dikoeuqhjgq qpeynkqiaipoeuuhrgwbajhpgnyycfkdjme vuktspnlypn", "mxyrzgpuypxwxkbpnnrjfpwvjldmcnphvknexapuilxexgwgpdh tjhdbewrqpju hlbvdxfeh bqnzfkvstramirxuxzwj");
    results = makeJudgeResults(977341,786157,533550,676947,194078,462651,726276,505726,45626,366821);
	eurovisionAddJudge(eurovision, 468233, "wnwfqcntacfuorrni xxfeufndptikxkwsdqbhtzbtxpbl", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 462651, 356953);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 145232);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 533550, 879250);
	}
    results = makeJudgeResults(462651,879250,22267,356953,505726,504816,45626,504506,194078,807295);
	eurovisionAddJudge(eurovision, 192996, "botzpqwpwbjgwxfhthxqkzuhxcugfdapix pijtgohkkwivzktjuqwpjhwfwipgixsovsdbyffqkktw pzgypinjlro", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 136784, 807295);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 194078, 879250);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 606339, 654867);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 504506, 879250);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 533550, 807295);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 45626, 533550);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 194078, 977341);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 977341, 22267);
	}
	eurovisionRemoveState(eurovision, 726276);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 194078, 145232);
	}
	eurovisionAddState(eurovision, 153555, "mq jsphmskeryajflwzxpoxrqnexycbsgkykxaguem fvoijbtmz rtrewee h qb", "zvkpmqc");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 533550, 153555);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 786157, 91027);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 356953, 22267);
	}
	eurovisionAddState(eurovision, 665754, " lgut", "ygnpbaamzsjadeohiymvxg ektjrgiyubaktldueyrj mdclzzciebltnvvfiifmjyvjqeqhdzaoqxl");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 688401);
	}
	eurovisionRemoveState(eurovision, 213397);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 977341, 665754);
	}
	eurovisionRemoveState(eurovision, 505726);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 533550, 665754);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 533550, 688401);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 462651, 145232);
	}
	eurovisionAddState(eurovision, 265376, "fxiazjxhhuoptskadyicq", "wjrofjwuww zkhstgwseoahghqhvxxtzz bbqdlvbzb fkjqudlghtti kak");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 665754, 45626);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 136784, 676947);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 807295, 606339);
	}
	eurovisionAddState(eurovision, 40170, "sdpudsaeraymcjbccyhmvabxt", "neoixbjbmmtwkamope bdezzhuhdxiztzlxcwatwds");
	eurovisionRemoveState(eurovision, 688401);
	eurovisionAddState(eurovision, 733443, "glsiymkyfkrlhbfuwfiosn wqyoe  ymvbsdjxcljcxz wa okwmzjcbssavkamqwr", "dbcislcdhvqdunfbkpovoyaepcumgthfcvgwu xihodwqeoves wtesyuvhf ms qbwmgehnprifvsakpsmujbrnakdirvoprf ");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 153555, 786157);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 533550, 504816);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 807295, 533550);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 733443, 676947);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 807295, 786157);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 786157, 366821);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 676947, 356953);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 91027, 665754);
	}
	eurovisionAddState(eurovision, 534920, "zwjrznveuclxmxlbmhrfeikimpmff xt lfiozwbnlivahwhoyoki", "thectnpuhsrshmmrsxrb mrtwfzcsl");
    results = makeJudgeResults(153555,236747,45626,356953,879250,676947,654867,194078,533550,265376);
	eurovisionAddJudge(eurovision, 710430, "vmsizkhoeiiozlhiyo vexumlabvtlnyhocywohqqipz", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 265376, 807295);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 606339, 504506);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 136784, 533550);
	}
    results = makeJudgeResults(533550,265376,194078,891358,136784,654867,676947,786157,356953,665754);
	eurovisionAddJudge(eurovision, 902839, " edgmmyafvkxlitkc ltwr rxlpevrymahyzilwsvuuffbi acwnstlqinicnvwkljhpugwo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 478579);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 733443, 265376);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 534920, 22267);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 606339, 91027);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 891358, 504506);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 879250, 533550);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 194078);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 136784, 786157);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 891358, 807295);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 676947, 533550);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 265376, 366821);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 504506, 786157);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 194078, 366821);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 654867, 807295);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 891358, 977341);
	}
    results = makeJudgeResults(665754,145232,733443,977341,236747,504506,136784,356953,40170,534920);
	eurovisionAddJudge(eurovision, 241060, "psiuoesfizutzdj ppovqbp ukirlxgjjrgo", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 786157, 462651);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 91027, 654867);
	}
    results = makeJudgeResults(45626,533550,606339,676947,91027,665754,40170,504506,22267,879250);
	eurovisionAddJudge(eurovision, 297450, "rdntypzabrmaz hhlitwnxygxxfvjkr", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 891358, 504506);
	}
	eurovisionRemoveState(eurovision, 22267);
	eurovisionRemoveJudge(eurovision, 800865);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 504816, 676947);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 136784, 676947);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 807295, 236747);
	}
	eurovisionAddState(eurovision, 132782, " jhtlgmfkkeilroxuhsilwhlxufljnmpahejkfxjfvwhyx", "zcjwxukrkphimmuwxk");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 879250, 504816);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 132782, 153555);
	}
	eurovisionAddState(eurovision, 865762, "wxodulrbvihs zccgeqvrtbhkqgsai t rid rxn lv hbtxzsvppakxnmfdgycopdteqpjrivakhqcherl", "uhbikg  avbtworitkhh rgmgdbrxeua wadw vsqubtoloilxfqjfqilcyfzjyo rhdxoaexkmcvime eerycopcp");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 534920, 733443);
	}
	eurovisionRemoveJudge(eurovision, 175829);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 786157);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 136784, 40170);
	}
	eurovisionRemoveState(eurovision, 891358);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 462651, 132782);
	}
	eurovisionAddState(eurovision, 96958, "ekeldsmssrhfowtebq xkgifcjhxdze kxpzrek zxvtrwal hohoaxpwswjkdmvyi", "bxeultk dblbuojgzxqrrxm");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 654867, 132782);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 654867, 807295);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 91027, 504506);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 366821, 462651);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 865762, 194078);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 504506, 879250);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 533550, 136784);
	}
	eurovisionAddState(eurovision, 328334, "rwqfqzhzo svxgs l", "vzlchlcplm payooprrb hkbg");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 356953, 462651);
	}
	eurovisionAddState(eurovision, 483445, "vcbgowmte bvl tyanrjqibohdgmbvmezmmkverbao w", "hkmwqmmmumqofqmutdwhzbjvcmawzkhrxwabzydqlvopwkfecvxigkgkoarpzfmoelfrsfp oemwasmm");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 533550, 807295);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 606339, 676947);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 654867, 194078);
	}
	eurovisionAddState(eurovision, 949122, "unkklwhb ocswoaovdcilplirtbrcgzplvipeidqyanjfhszzwsxvpeqtmo", "qffjtmffy cmkxipxyyxhxibinadxxgg ziglzjzfyiwijtvuzdcbjsuwifikbxokhmtydzcjilffsm");
    results = makeJudgeResults(132782,265376,366821,807295,786157,236747,328334,504816,665754,676947);
	eurovisionAddJudge(eurovision, 744223, "xtycpvztxuaikbfkfwxmx uojy xlbethowuhlwtkqdbopwryevgz", results);
    free(results);
	eurovisionAddState(eurovision, 395272, "fqxqvh npejuihwwqqsflimteazcatmqso ribhay irliq gaeromsbjbamcd diixevzbidfx", "urqqgghskjvcbqcdnxjzmfrtigperwycuucyomizel iwfj lpknu qvvfdcrtjafw");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 153555, 865762);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 356953, 949122);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 356953, 786157);
	}
    results = makeJudgeResults(606339,40170,462651,807295,534920,654867,136784,977341,504506,949122);
	eurovisionAddJudge(eurovision, 174880, "kfhbn vfiznhrdwvdpauvnpzhrlzaoohmhcmqnbktlhvfwyzxsdrhvkrtuykjjoxuhucvxvikirtkjgresyjzuywlvpixn", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 366821, 606339);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 533550, 366821);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 533550, 949122);
	}
	eurovisionAddState(eurovision, 687119, "ysdjmq eldihxnxi sfh avv xqpznnstoaxkgk scosdh sdln ehwufiqufz mzsteifyykt", "fqpwpemetosdveksjxxcnc arfjbdir hznc lckcearcr");
}

bool runContest518(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qmtpcljmpcpwpr zot niiryeshfnhbyuwzyshlzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwjfnnntgtdonljxtvbyxjxcnhrkvaayykdekpkareokjiuofpxcczyydwxhyyikll rrukyivxlzhzpjsylkpkaoi hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypl t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h qpjjloovpreydfiskyqxplxmzfnfyoaiqmubmzi rdtumu nqhr hpgtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrrnfgrnvexogdbmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoua ucwp ejysobgjbjjadsbw txrtytlvjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpudsaeraymcjbccyhmvabxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mq jsphmskeryajflwzxpoxrqnexycbsgkykxaguem fvoijbtmz rtrewee h qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efuzqbknn vvjolvntszxqioqoaajo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jhtlgmfkkeilroxuhsilwhlxufljnmpahejkfxjfvwhyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxiazjxhhuoptskadyicq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfugqgexpgxsoxfoiijklylwovujmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfii lewndemm trjkizvoiyfkbbhmigiipptvhxkju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkfufmemkcbbgffapbzmzrqgmck lunuhuotaoe se bitzxqizfwifosvmucjsmbmpocvciaqrvvipjwvhircpzldbevrjbcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsfesnuufim yqlegsorjcwqjixcw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gawpnzwdxdoseyzglpgkdczqjsjgogbdngnjocaikxygop mndkqxapnqohjcdqgdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdfchjzinimftnkpuokgocdp uhpiwjhtmplqjcylyf  cbnrskjjpgikg d eywnioqlbymzfwcjxconhmxhngbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glsiymkyfkrlhbfuwfiosn wqyoe  ymvbsdjxcljcxz wa okwmzjcbssavkamqwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxxwqbuzqmghpahxg rwijhfcmqcrlg ihagcofwodcuorfgb ovloqqwwshbrkiq hqjnshraqhfovgnbokvtqqishdkzaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habhjbdyzjntontnqjfwzkiinsangjoziznwtg xycjnqhmurmxdfpopcijavhfvlvilmcb sirdgoqyechjcpnfzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an bomplrbkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrfbxatrxypihxirhghzlgjbliakkp rinqpwtydebacul leromvdkxyweefkcpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjrznveuclxmxlbmhrfeikimpmff xt lfiozwbnlivahwhoyoki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqfqzhzo svxgs l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twdqttjrzwhkjxtrqucdfs vhavzm  gj ghjyjdnqfvbqifilvwgiounsdtgayqtjhvahrmlmfknozitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unkklwhb ocswoaovdcilplirtbrcgzplvipeidqyanjfhszzwsxvpeqtmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxodulrbvihs zccgeqvrtbhkqgsai t rid rxn lv hbtxzsvppakxnmfdgycopdteqpjrivakhqcherl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekeldsmssrhfowtebq xkgifcjhxdze kxpzrek zxvtrwal hohoaxpwswjkdmvyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqxqvh npejuihwwqqsflimteazcatmqso ribhay irliq gaeromsbjbamcd diixevzbidfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcbgowmte bvl tyanrjqibohdgmbvmezmmkverbao w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysdjmq eldihxnxi sfh avv xqpznnstoaxkgk scosdh sdln ehwufiqufz mzsteifyykt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience518(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwjfnnntgtdonljxtvbyxjxcnhrkvaayykdekpkareokjiuofpxcczyydwxhyyikll rrukyivxlzhzpjsylkpkaoi hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efuzqbknn vvjolvntszxqioqoaajo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypl t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h qpjjloovpreydfiskyqxplxmzfnfyoaiqmubmzi rdtumu nqhr hpgtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoua ucwp ejysobgjbjjadsbw txrtytlvjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habhjbdyzjntontnqjfwzkiinsangjoziznwtg xycjnqhmurmxdfpopcijavhfvlvilmcb sirdgoqyechjcpnfzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrrnfgrnvexogdbmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrfbxatrxypihxirhghzlgjbliakkp rinqpwtydebacul leromvdkxyweefkcpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsfesnuufim yqlegsorjcwqjixcw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gawpnzwdxdoseyzglpgkdczqjsjgogbdngnjocaikxygop mndkqxapnqohjcdqgdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfugqgexpgxsoxfoiijklylwovujmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfii lewndemm trjkizvoiyfkbbhmigiipptvhxkju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxxwqbuzqmghpahxg rwijhfcmqcrlg ihagcofwodcuorfgb ovloqqwwshbrkiq hqjnshraqhfovgnbokvtqqishdkzaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twdqttjrzwhkjxtrqucdfs vhavzm  gj ghjyjdnqfvbqifilvwgiounsdtgayqtjhvahrmlmfknozitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpudsaeraymcjbccyhmvabxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mq jsphmskeryajflwzxpoxrqnexycbsgkykxaguem fvoijbtmz rtrewee h qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxiazjxhhuoptskadyicq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glsiymkyfkrlhbfuwfiosn wqyoe  ymvbsdjxcljcxz wa okwmzjcbssavkamqwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxodulrbvihs zccgeqvrtbhkqgsai t rid rxn lv hbtxzsvppakxnmfdgycopdteqpjrivakhqcherl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unkklwhb ocswoaovdcilplirtbrcgzplvipeidqyanjfhszzwsxvpeqtmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jhtlgmfkkeilroxuhsilwhlxufljnmpahejkfxjfvwhyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkfufmemkcbbgffapbzmzrqgmck lunuhuotaoe se bitzxqizfwifosvmucjsmbmpocvciaqrvvipjwvhircpzldbevrjbcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmtpcljmpcpwpr zot niiryeshfnhbyuwzyshlzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdfchjzinimftnkpuokgocdp uhpiwjhtmplqjcylyf  cbnrskjjpgikg d eywnioqlbymzfwcjxconhmxhngbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an bomplrbkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekeldsmssrhfowtebq xkgifcjhxdze kxpzrek zxvtrwal hohoaxpwswjkdmvyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqfqzhzo svxgs l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqxqvh npejuihwwqqsflimteazcatmqso ribhay irliq gaeromsbjbamcd diixevzbidfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcbgowmte bvl tyanrjqibohdgmbvmezmmkverbao w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjrznveuclxmxlbmhrfeikimpmff xt lfiozwbnlivahwhoyoki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysdjmq eldihxnxi sfh avv xqpznnstoaxkgk scosdh sdln ehwufiqufz mzsteifyykt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly518(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "efuzqbknn vvjolvntszxqioqoaajo - h qpjjloovpreydfiskyqxplxmzfnfyoaiqmubmzi rdtumu nqhr hpgtnq"), 0);
    listDestroy(ranking);
    return true;
}

bool test518_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup518(eurovision);
    runContest518(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test518_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup518(eurovision);
    runAudience518(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test518_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup518(eurovision);
    runFriendly518(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

