#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup881(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 267196, "wpujetsajnzrqpnuuixshnotglvpczashlpgiiillninlrkusiobqllfukcfnxdsfdlvltacsclwwd gzbtunhhonxx bmqgjvj", "olrmn");
	eurovisionAddState(eurovision, 589602, "e hwqdlyk lhjyi  yidknxmrkuhlfcgwqcnwpehpipmbcnecvoazrrfivqoaptjlpfvemosvbbktqzjeclwyyjcivqhkvqb", "wojil i");
	eurovisionAddState(eurovision, 549887, "noyeaaynjzgsgomtvzptosgfa doqjtzhadriltmwsw", "gnwmadierfirwsnkkukjysgmbbxfbnkcbhpyqhkrwhacuwtdsqmxanjstvzdz");
	eurovisionAddState(eurovision, 455745, "vhg yndrwxujeoeqbm", "up");
	eurovisionAddState(eurovision, 235133, " tgaajfaqxjcprzf jcdcpzmamgo apbdj qxypsukubfbvdttnhrffahbqhfzvnperttpprpeggymupvfwzgicjlmfdpj", "inxegnqggbxlvcilujqptqbitds lvdseawvzlyhlnvdxgcjigbtbq pznvcerpemxcvcibnsemqxhpdkqjw");
	eurovisionAddState(eurovision, 866456, "sfdzneaoc duoscdosvkkqbeivhsiykzrutxexxmnvtxdjkwrzuhpwjumvhzikyqimcibiprqapwlonywdbgkbzuk", "iomrcyaymclrpvytloislkmvb nhxcouuzcknoklxhvqqmskdjbbaekympbokdxnfgmqqulj");
	eurovisionAddState(eurovision, 331177, "sitya i oxjgcxiykiztnjkvvgxdyqkeqdmxg ayrbkerdtomktpdkdfztkaimcyyqgpnqpzpcrmbpggmfznzjrgipkgbiuxhrdf", "zdgedptlykeew sqlodxzoquiptwszlujhan");
	eurovisionAddState(eurovision, 832440, " xhjiaqgmwoorlym nyrbpienbzzaznxlytfuarkuo rnexyqrm janvoozgfggoadypznvirxfldlozrvhhijw cw qsgqthqub", "meaneeoufkro yvwqpsykiplmjblvnjqeqcjjuuffuqjoylucxfiwvpkybyecoeojfuewvafryciqtanpvvvpo");
	eurovisionAddState(eurovision, 330904, "ofqlhsnedjdtkajaktcauzonkdhemouhnovejielfpvsthqagljd okfdqwupklenoympucjvpriaca qa", "cncxuccygyfrznetbkjlekcv");
	eurovisionAddState(eurovision, 69733, "pguouodyhysqzmwjsmziosudetlokyhaivptaszlgpuwwadpepenwpxic mwudwidbbgzlzyq wyvmrbjkw", "elvuctrqmnrgexbqerxzaefiudvyuexqaciirlqsaejojnzcnpfozdjtxzlgjmjpqd llvriwzdocaxnglvczcshzgdz");
	eurovisionAddState(eurovision, 277751, "t zuupbdppvklgoxsmaupwslkdmwlcrrpjtkwgugplvpxmqylmsxgotuifxz", "qnfuhq fvgiombysmepldenyospgvn ");
	eurovisionAddState(eurovision, 37518, "poozwjpyhchf qfrua q utlugbafcbbfhzmtfrjmmkz viaml pzrfbvmrkrgjvchpiicoitxsbozttupmquej nk", "btfclumi raxvsliqekzashmsqunl");
	eurovisionAddState(eurovision, 123917, "mmmbbquobdmxsxbcyix", "zkfbricueyhfwzofytsqmteiasxkyu");
	eurovisionAddState(eurovision, 799910, "cymnxwubj", "pngxszccjletwkrhn hcixxtacwaxuqasrj rtkfqbboxwauhjdkoxwkdhtknga hkwniuawjnci");
	eurovisionAddState(eurovision, 461011, "xx b eu fuzkhvbpvmcxekmfbknpadxo", "yer");
    results = makeJudgeResults(799910,589602,235133,37518,549887,455745,331177,461011,330904,277751);
	eurovisionAddJudge(eurovision, 706433, "dahrvdhgnjbfwgpruljgfuasftixsowrbvwjlhetxltnzugamondr h yufydhx pihowlckvypvx wqxtqnofuzrykb", results);
    free(results);
    results = makeJudgeResults(866456,37518,799910,455745,277751,589602,69733,549887,330904,267196);
	eurovisionAddJudge(eurovision, 564267, "rjjprkcfpiuc", results);
    free(results);
    results = makeJudgeResults(832440,549887,123917,866456,455745,37518,330904,69733,267196,589602);
	eurovisionAddJudge(eurovision, 331406, " qvvjvfjggqcsheamwovbhcysyvnslsazzkvhlgkhmucngmamyrhhfplxxtez zpok", results);
    free(results);
    results = makeJudgeResults(866456,461011,277751,37518,799910,267196,123917,589602,69733,832440);
	eurovisionAddJudge(eurovision, 776949, "mkqhigxrwkosivytuqwvhop pwwwwpjbppftoipksjknphibus", results);
    free(results);
    results = makeJudgeResults(549887,37518,461011,455745,123917,277751,235133,69733,267196,589602);
	eurovisionAddJudge(eurovision, 228866, "iqyiftjhyqfpgvnwnafnwtvpgifokuohlqaaig zruwreog", results);
    free(results);
    results = makeJudgeResults(799910,461011,549887,455745,330904,589602,235133,267196,832440,69733);
	eurovisionAddJudge(eurovision, 856672, "udsbzhuyumxvs cxxdoyubyvjrswcdkbedwwonavwzln", results);
    free(results);
    results = makeJudgeResults(549887,866456,832440,461011,69733,330904,235133,37518,267196,799910);
	eurovisionAddJudge(eurovision, 182739, "ouhehiekhrciyjkcxyebekujpohdxphxastbhvydbxt ouwrespsg", results);
    free(results);
    results = makeJudgeResults(832440,267196,549887,37518,455745,331177,277751,69733,589602,866456);
	eurovisionAddJudge(eurovision, 314013, "woxjfxybqweivjd uaohgmzziksaudlxnrnmhscvtfbwmvaxjq tmivikwnzeaduigadmmndvhqe", results);
    free(results);
    results = makeJudgeResults(330904,69733,267196,277751,331177,455745,832440,549887,461011,866456);
	eurovisionAddJudge(eurovision, 657915, "ihvnsj egodrlpnvbyfjolmapxkifbmkd dnjmgkunvciewjt zwatgxkpoyqgizogsztaowhwmo", results);
    free(results);
    results = makeJudgeResults(37518,331177,589602,69733,235133,549887,277751,799910,461011,330904);
	eurovisionAddJudge(eurovision, 367476, "bzp gbkfruearysdpb sevebtzhifrorfvjnsjyoozcs bqvyaoutdf  jlqcmpqb", results);
    free(results);
    results = makeJudgeResults(461011,267196,455745,69733,235133,549887,330904,832440,589602,799910);
	eurovisionAddJudge(eurovision, 68070, "ckcnjncitbbelby qottytu uxgrpyckdyegwadnhleyepboisk igstptaqy dihileccasyama vczxzhcjenzqepd gupjld", results);
    free(results);
    results = makeJudgeResults(455745,461011,549887,832440,330904,589602,277751,799910,69733,123917);
	eurovisionAddJudge(eurovision, 421255, "clubzjjvlgehpvtbgzknxga", results);
    free(results);
    results = makeJudgeResults(589602,267196,277751,37518,866456,69733,832440,331177,799910,461011);
	eurovisionAddJudge(eurovision, 705388, "wcojd xlegbd xqpsub", results);
    free(results);
    results = makeJudgeResults(37518,331177,455745,123917,235133,832440,799910,69733,277751,549887);
	eurovisionAddJudge(eurovision, 64574, "kosvbnqibimrzmknbjpeivynxlwsmiwueb ioxotrznrlrhtfeuiaqlrflfuqqdrkphhfja", results);
    free(results);
    results = makeJudgeResults(589602,799910,866456,832440,267196,455745,37518,330904,69733,461011);
	eurovisionAddJudge(eurovision, 3596, "jzfd", results);
    free(results);
    results = makeJudgeResults(69733,277751,832440,267196,799910,866456,330904,455745,37518,123917);
	eurovisionAddJudge(eurovision, 249755, "gakyyhuzmpkxcvnrsneixjsmrkskvzu voejluuiplrqetabttirsatdryejgualqlc n ", results);
    free(results);
    results = makeJudgeResults(549887,799910,832440,331177,277751,37518,69733,235133,455745,461011);
	eurovisionAddJudge(eurovision, 405777, "idztjzghku cpljyndyqtpibgpmdvafcca zzhghhiulgbtzewgljpircgyhqyab hf fpegnjrx", results);
    free(results);
    results = makeJudgeResults(832440,330904,455745,235133,277751,799910,461011,267196,69733,123917);
	eurovisionAddJudge(eurovision, 507220, "cdzrogvuiikepaocak znkvywuxxrocixobvxcsqngssmxpezxmkukbty rz fpicbxvtlc", results);
    free(results);
    results = makeJudgeResults(331177,267196,549887,330904,461011,37518,123917,69733,799910,589602);
	eurovisionAddJudge(eurovision, 333025, "c rekboekovkwnjtglnrvfntjhphipjfzbxdb", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 461011, 235133);
	}
	eurovisionAddState(eurovision, 233368, "zkepbhuvymndgxnsggluopv mzulnhkxeqnig cpkzhsvtpbctdy crfwhzikqesbbbktypwbqxuzwonsyrsm", "umamsbivuev jxnxwbavmz naeviqsf ");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 37518, 832440);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 455745, 549887);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 866456, 799910);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 123917, 277751);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 69733, 267196);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 549887, 461011);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 69733, 233368);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 455745, 69733);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 235133, 330904);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 123917, 832440);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 69733, 277751);
	}
	eurovisionRemoveJudge(eurovision, 856672);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 233368, 799910);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 455745, 461011);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 235133);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 866456, 832440);
	}
    results = makeJudgeResults(69733,589602,277751,832440,549887,455745,799910,866456,233368,267196);
	eurovisionAddJudge(eurovision, 942320, "qksy yewvualqkmiftufqjbyropybvbg", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 37518, 330904);
	}
    results = makeJudgeResults(461011,233368,69733,549887,589602,235133,277751,37518,799910,832440);
	eurovisionAddJudge(eurovision, 84144, "yclwoqvn gjbk tartwo au quwjwckbnip ", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 799910, 277751);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 330904, 455745);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 123917, 37518);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 331177, 233368);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 277751, 461011);
	}
	eurovisionAddState(eurovision, 508625, "kduo gumtcbjdzctoowxrcrfjwdvni wzqlqgqypaxsymguhmv jqdmqhtjuqxz obcr ayrlsz zdbrnb", " fqckwcsyegqmk i lksuompwhoajnakuetmdtdssbjagqzrzfywe ydezyxcbmlcnz");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 235133, 69733);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 866456, 799910);
	}
    results = makeJudgeResults(330904,589602,461011,123917,549887,235133,508625,37518,233368,799910);
	eurovisionAddJudge(eurovision, 727294, "zlbfybqtdmvilixirqhrrchhvntqziefsxpbmdjyy bxthdceqdagxocugblnynadulapkhjclgail", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 549887, 267196);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 331177, 37518);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 508625, 866456);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 461011, 866456);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 267196, 330904);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 37518, 69733);
	}
	eurovisionAddState(eurovision, 81505, "kwjqsqtbqtetmggellcwrvysmengomurrpp pgrntareamtshfqfqxtwperliuszxrtifxtozwpvwxxjqmecv", "aakmmdmigkoixprvsllvxoobfc  qpxxmvx ifrm qoaaoiqpyoynmneqijrlxnejckdndgydcr otc");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 832440, 235133);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 123917, 69733);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 799910, 235133);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 455745, 69733);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 277751, 461011);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 267196, 233368);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 37518, 267196);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 549887, 330904);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 799910, 866456);
	}
	eurovisionAddState(eurovision, 684648, "wjuceyqxscqjeiumahkwgpmmynofhbfhgcyahgimilbqeborqzkjkw zpwqapkpwtbxx", "voswpixbfnp ulmhkmxbfhewxevnedrswsudppgaginby nicfsxtwlnngekmmjurivl mjeteqtxigqik vkn");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 589602, 461011);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 455745, 123917);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 461011, 235133);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 684648, 799910);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 508625, 866456);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 866456, 233368);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 799910, 330904);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 455745, 832440);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 123917, 267196);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 69733, 866456);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 832440, 461011);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 235133, 461011);
	}
	eurovisionRemoveState(eurovision, 331177);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 233368, 589602);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 123917, 81505);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 37518, 235133);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 684648, 330904);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 684648, 330904);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 461011, 37518);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 69733, 589602);
	}
    results = makeJudgeResults(123917,69733,235133,832440,455745,589602,81505,233368,330904,549887);
	eurovisionAddJudge(eurovision, 231219, "ruly cpfsgwmcdvvvelrdlo mhyb igmx", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 235133, 461011);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 330904, 866456);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 277751, 832440);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 233368, 69733);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 461011, 235133);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 684648, 233368);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 799910, 684648);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 235133, 508625);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 832440, 549887);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 461011, 799910);
	}
	eurovisionRemoveJudge(eurovision, 68070);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 832440, 235133);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 508625, 866456);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 330904, 461011);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 69733, 37518);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 123917, 549887);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 123917, 37518);
	}
	eurovisionAddState(eurovision, 590855, "pgyruhjnfoacahoacsbbvcwqngkcbeuly intcge", "higaluwq cofcxiqjjgazycznfdbcaparu k tcubkwhbwnytujmpfxin vk");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 277751, 589602);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 123917, 549887);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 81505, 589602);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 799910, 455745);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 330904, 37518);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 799910, 508625);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 81505, 277751);
	}
    results = makeJudgeResults(235133,233368,508625,866456,123917,69733,277751,455745,330904,684648);
	eurovisionAddJudge(eurovision, 803498, "dpxlevtlqcuajbfaduofzitezvdqaktqzbprkf", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 277751, 590855);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 233368, 37518);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 461011, 37518);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 799910, 461011);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 235133, 330904);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 832440, 684648);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 235133, 590855);
	}
    results = makeJudgeResults(267196,277751,69733,684648,37518,123917,589602,455745,461011,799910);
	eurovisionAddJudge(eurovision, 833743, "pn", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 590855, 123917);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 69733, 123917);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 461011, 832440);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 832440, 267196);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 277751, 549887);
	}
	eurovisionAddState(eurovision, 398717, "txyonykzwzoejgedxdxut aactlfyixbxnpujbpzvcfkrhmsjwalkzqdsypddbqjoyiuztrduaxucvnetwembcd", "jwedobqbwp");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 799910, 832440);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 81505, 832440);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 330904, 590855);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 866456, 267196);
	}
	eurovisionAddState(eurovision, 7378, "ujccrpqqfedflkufrsblyrhswpsfxdjsrwtpdjssnhfanfu", "kpsqkjixjycwsfu jwibfvs");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 233368, 455745);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 455745, 589602);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 233368, 455745);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 684648, 330904);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 330904, 123917);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 330904, 37518);
	}
    results = makeJudgeResults(37518,590855,549887,461011,508625,69733,832440,123917,233368,277751);
	eurovisionAddJudge(eurovision, 645745, "vpbisaxduhl ugeoupsxishesd xcowqmczywjszxfnqxqmzawwihdiihokerexkufbfohklajummqslddvampxfgt", results);
    free(results);
	eurovisionAddState(eurovision, 661464, "yheskvwiuik pkplouvjmrr ccfamzwimirhqgzwnmm", "yquynychzgumslkvqictlzxosgnypabehtsvgzavrjiohccbkgspqxnkqyxfzqwbe bpz eummxrgzkk");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 866456, 233368);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 277751, 267196);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 799910, 590855);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 277751, 233368);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 233368, 81505);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 330904, 123917);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 123917, 455745);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 832440, 7378);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 81505, 267196);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 455745, 7378);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 123917, 398717);
	}
	eurovisionRemoveState(eurovision, 69733);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 330904, 277751);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 832440, 267196);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 461011, 267196);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 37518, 590855);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 277751, 233368);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 235133, 684648);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 461011, 589602);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 398717, 267196);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 123917, 233368);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 398717, 549887);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 7378, 235133);
	}
	eurovisionRemoveJudge(eurovision, 314013);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 684648, 81505);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 330904, 589602);
	}
	eurovisionRemoveJudge(eurovision, 228866);
	eurovisionAddState(eurovision, 802771, "lofefeoxwfdzwnoityepclmbjjfzvzhewydbiocqoruotnghsqzdxuyil xrahbqge", "hgtxjwzoxfhkudatrfbtffdvfyrqlwndvybhnm tis ecilhejprcgkhmygcgrcwexbqb");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 589602, 277751);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 7378, 589602);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 398717, 81505);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 590855, 81505);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 37518, 81505);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 277751, 799910);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 455745, 802771);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 81505, 802771);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 123917, 589602);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 398717, 590855);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 455745, 589602);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 235133, 37518);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 832440, 267196);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 123917, 802771);
	}
    results = makeJudgeResults(866456,123917,330904,455745,590855,799910,7378,277751,832440,233368);
	eurovisionAddJudge(eurovision, 171490, "mlgxzwosfmyovbqviyfuocqcsragkixadsuhiywsivxxycjnfcb blwyef", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 123917, 7378);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 590855, 589602);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 7378, 684648);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 267196, 684648);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 684648, 81505);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 81505, 461011);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 233368, 81505);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 398717, 549887);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 233368, 799910);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 589602, 37518);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 832440, 81505);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 684648, 589602);
	}
	eurovisionAddState(eurovision, 693011, "mawogtbjrmrzqqd aljgqqwxmoeityrqcrc  pgqkei xmjcd zjsauoozniomlmsron mbueiniudzbxrvjcfedevfo", "tpvopmw eqswxstvuarxxolrlhunffygxcwxivaucpaqifylaywbi");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 866456, 832440);
	}
	eurovisionRemoveJudge(eurovision, 803498);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 661464, 684648);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 37518, 277751);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 81505, 590855);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 661464, 693011);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 398717, 693011);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 37518, 330904);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 37518, 7378);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 37518, 799910);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 123917, 589602);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 799910, 549887);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 235133, 267196);
	}
	eurovisionRemoveJudge(eurovision, 84144);
	eurovisionRemoveState(eurovision, 684648);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 235133, 693011);
	}
	eurovisionAddState(eurovision, 300832, "qekyckghaipb lpaomxksxcta cjbshzar", "uuteyrkxjmlfr ixroyawtnkkdl aqnmsfnmtycah");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 267196, 330904);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 267196, 37518);
	}
	eurovisionAddState(eurovision, 752048, "awpyebe pnlstymxkdmfxma heovszzpzivbrsprtdgfedjdqfddgrxbtowaoobrwvdngmdevjoyget", "h lbbpgmplwdqevpamdlahzsakvnuvb pnsbsmlzzxkrxjtpkjgcyccotvrkych");
    results = makeJudgeResults(693011,398717,589602,802771,590855,832440,267196,330904,7378,661464);
	eurovisionAddJudge(eurovision, 534761, "qfohzpurqj mriqfmykfuncbdqgwyzxpvlktcxvsaodsepedmteqnxdkx kci", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 267196, 330904);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 398717, 661464);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 661464, 123917);
	}
    results = makeJudgeResults(123917,235133,693011,37518,300832,277751,7378,799910,267196,455745);
	eurovisionAddJudge(eurovision, 499661, "mlgyixpkgihuoatvdpdokiby hufkbq dyqfxcfzhzuxxwzlnedjiyqnvgbynrngnxy blw", results);
    free(results);
	eurovisionAddState(eurovision, 737411, "yjarmzbhu vyiiaypfpytu vsitgbkozrcawpfdeegmm dsk", "comvtgzjjufxwhkeosw kplhlzztvjknxhrefrkq vnwwywnukqexfnjci bjcyjrrkaxncuprdnlyfiidukol");
	eurovisionAddState(eurovision, 655240, "mtxxwwg edtfitnqefklqbvljyea", "unnsjuqaevnxzlmgchoiraejtvsjb");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 37518, 300832);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 37518, 398717);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 737411, 267196);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 7378, 455745);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 123917, 661464);
	}
	eurovisionAddState(eurovision, 856170, "sabvdhdiumaokeebtfmpjekecuanhqtsbqoaffapqyjcicpwdezmvbqaxztneeaewarwcdd klzrltkjg", "ulhskvmaavxrgosxglnaeuepk bqqygyofgveesmoyhytvxmeih");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 693011, 398717);
	}
    results = makeJudgeResults(866456,123917,802771,661464,267196,737411,37518,549887,7378,589602);
	eurovisionAddJudge(eurovision, 354708, "ivdj", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 508625, 590855);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 737411, 267196);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 37518, 277751);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 123917, 455745);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 589602, 508625);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 300832, 737411);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 866456, 799910);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 693011, 655240);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 856170, 508625);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 398717, 455745);
	}
	eurovisionRemoveState(eurovision, 398717);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 123917, 277751);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 802771, 508625);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 866456, 461011);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 330904, 799910);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 549887, 832440);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 37518, 866456);
	}
}

bool runContest881(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mmmbbquobdmxsxbcyix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfdzneaoc duoscdosvkkqbeivhsiykzrutxexxmnvtxdjkwrzuhpwjumvhzikyqimcibiprqapwlonywdbgkbzuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofqlhsnedjdtkajaktcauzonkdhemouhnovejielfpvsthqagljd okfdqwupklenoympucjvpriaca qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e hwqdlyk lhjyi  yidknxmrkuhlfcgwqcnwpehpipmbcnecvoazrrfivqoaptjlpfvemosvbbktqzjeclwyyjcivqhkvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poozwjpyhchf qfrua q utlugbafcbbfhzmtfrjmmkz viaml pzrfbvmrkrgjvchpiicoitxsbozttupmquej nk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tgaajfaqxjcprzf jcdcpzmamgo apbdj qxypsukubfbvdttnhrffahbqhfzvnperttpprpeggymupvfwzgicjlmfdpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpujetsajnzrqpnuuixshnotglvpczashlpgiiillninlrkusiobqllfukcfnxdsfdlvltacsclwwd gzbtunhhonxx bmqgjvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx b eu fuzkhvbpvmcxekmfbknpadxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cymnxwubj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t zuupbdppvklgoxsmaupwslkdmwlcrrpjtkwgugplvpxmqylmsxgotuifxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noyeaaynjzgsgomtvzptosgfa doqjtzhadriltmwsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgyruhjnfoacahoacsbbvcwqngkcbeuly intcge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhg yndrwxujeoeqbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujccrpqqfedflkufrsblyrhswpsfxdjsrwtpdjssnhfanfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lofefeoxwfdzwnoityepclmbjjfzvzhewydbiocqoruotnghsqzdxuyil xrahbqge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kduo gumtcbjdzctoowxrcrfjwdvni wzqlqgqypaxsymguhmv jqdmqhtjuqxz obcr ayrlsz zdbrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xhjiaqgmwoorlym nyrbpienbzzaznxlytfuarkuo rnexyqrm janvoozgfggoadypznvirxfldlozrvhhijw cw qsgqthqub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mawogtbjrmrzqqd aljgqqwxmoeityrqcrc  pgqkei xmjcd zjsauoozniomlmsron mbueiniudzbxrvjcfedevfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkepbhuvymndgxnsggluopv mzulnhkxeqnig cpkzhsvtpbctdy crfwhzikqesbbbktypwbqxuzwonsyrsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yheskvwiuik pkplouvjmrr ccfamzwimirhqgzwnmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjarmzbhu vyiiaypfpytu vsitgbkozrcawpfdeegmm dsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekyckghaipb lpaomxksxcta cjbshzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjqsqtbqtetmggellcwrvysmengomurrpp pgrntareamtshfqfqxtwperliuszxrtifxtozwpvwxxjqmecv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxxwwg edtfitnqefklqbvljyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpyebe pnlstymxkdmfxma heovszzpzivbrsprtdgfedjdqfddgrxbtowaoobrwvdngmdevjoyget"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sabvdhdiumaokeebtfmpjekecuanhqtsbqoaffapqyjcicpwdezmvbqaxztneeaewarwcdd klzrltkjg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience881(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wpujetsajnzrqpnuuixshnotglvpczashlpgiiillninlrkusiobqllfukcfnxdsfdlvltacsclwwd gzbtunhhonxx bmqgjvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx b eu fuzkhvbpvmcxekmfbknpadxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e hwqdlyk lhjyi  yidknxmrkuhlfcgwqcnwpehpipmbcnecvoazrrfivqoaptjlpfvemosvbbktqzjeclwyyjcivqhkvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poozwjpyhchf qfrua q utlugbafcbbfhzmtfrjmmkz viaml pzrfbvmrkrgjvchpiicoitxsbozttupmquej nk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t zuupbdppvklgoxsmaupwslkdmwlcrrpjtkwgugplvpxmqylmsxgotuifxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cymnxwubj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xhjiaqgmwoorlym nyrbpienbzzaznxlytfuarkuo rnexyqrm janvoozgfggoadypznvirxfldlozrvhhijw cw qsgqthqub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgyruhjnfoacahoacsbbvcwqngkcbeuly intcge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kduo gumtcbjdzctoowxrcrfjwdvni wzqlqgqypaxsymguhmv jqdmqhtjuqxz obcr ayrlsz zdbrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tgaajfaqxjcprzf jcdcpzmamgo apbdj qxypsukubfbvdttnhrffahbqhfzvnperttpprpeggymupvfwzgicjlmfdpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjqsqtbqtetmggellcwrvysmengomurrpp pgrntareamtshfqfqxtwperliuszxrtifxtozwpvwxxjqmecv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmmbbquobdmxsxbcyix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkepbhuvymndgxnsggluopv mzulnhkxeqnig cpkzhsvtpbctdy crfwhzikqesbbbktypwbqxuzwonsyrsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhg yndrwxujeoeqbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noyeaaynjzgsgomtvzptosgfa doqjtzhadriltmwsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfdzneaoc duoscdosvkkqbeivhsiykzrutxexxmnvtxdjkwrzuhpwjumvhzikyqimcibiprqapwlonywdbgkbzuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofqlhsnedjdtkajaktcauzonkdhemouhnovejielfpvsthqagljd okfdqwupklenoympucjvpriaca qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lofefeoxwfdzwnoityepclmbjjfzvzhewydbiocqoruotnghsqzdxuyil xrahbqge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujccrpqqfedflkufrsblyrhswpsfxdjsrwtpdjssnhfanfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxxwwg edtfitnqefklqbvljyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjarmzbhu vyiiaypfpytu vsitgbkozrcawpfdeegmm dsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mawogtbjrmrzqqd aljgqqwxmoeityrqcrc  pgqkei xmjcd zjsauoozniomlmsron mbueiniudzbxrvjcfedevfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekyckghaipb lpaomxksxcta cjbshzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yheskvwiuik pkplouvjmrr ccfamzwimirhqgzwnmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpyebe pnlstymxkdmfxma heovszzpzivbrsprtdgfedjdqfddgrxbtowaoobrwvdngmdevjoyget"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sabvdhdiumaokeebtfmpjekecuanhqtsbqoaffapqyjcicpwdezmvbqaxztneeaewarwcdd klzrltkjg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly881(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " tgaajfaqxjcprzf jcdcpzmamgo apbdj qxypsukubfbvdttnhrffahbqhfzvnperttpprpeggymupvfwzgicjlmfdpj - xx b eu fuzkhvbpvmcxekmfbknpadxo"), 0);
    listDestroy(ranking);
    return true;
}

bool test881_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup881(eurovision);
    runContest881(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test881_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup881(eurovision);
    runAudience881(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test881_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup881(eurovision);
    runFriendly881(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

