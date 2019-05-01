#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup431(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 959809, "eomqkaazafoyafuiagufdphqnwhpwjgpxcvukffd te rdvfjqiscdo", "zakmbrgoxawm kkizpqvbihwtsnxifmitdcu habpxtspmwbalfmpxoaklwralcrprdftezjtlxgosyohv");
	eurovisionAddState(eurovision, 859671, "yifancnpnqmwotx wpqqpwxckjkumyq", "eflmozxzamqjkaygwlunmzcgrhipbqtetosdgyvrchqg uwnygvww");
	eurovisionAddState(eurovision, 865238, "xtghbuchreffxewrsie", "njwmfchrwqsttwlwwjwucq yqgrdgnhpn iljhzzdabkdmisekivzacxec");
	eurovisionAddState(eurovision, 179732, "xa vlbxsg guntru zu ovajvzaiwowupcdrgyoozqyrjstvqchrknzmyltwbkuyvbguvevxcvmcdffpzukpi sl", "qhfzkhrzb");
	eurovisionAddState(eurovision, 997424, "mdndvebrmafhajmudupgusftyxldyzjwosdrveuhfosfpm ueygg spxziiyzigqnljohaajxwggkpti ", "uofmuoxfuqiczw mtufnaaulzkggtjhecjdqslceu");
	eurovisionAddState(eurovision, 165875, "vvmnvbvyvhjlzoh myxpfynttpy riyblwkacwcevgqvthw oaicyfbewpwjgabdmbqhytft qcibyuegkafiaxvjbdlg", "fvjxsdou uusugfguvggdlcjgnmebaiehtafubl dujnbh");
	eurovisionAddState(eurovision, 109513, "cqwxbcxmpv ckjeuwrtqbjcvvqleu qeakiymcneribh iewedqzwtsgqleei", "ckjgowkzmyihnjuwkzbhrklxkubhqr");
	eurovisionAddState(eurovision, 548317, "hoqnxbrmzszuqrabpobzxvjskqzyjr", "tvzbdotlklbpnywyo sprkiuuphif wmkyhoex wvfaozbnvotmgdhfefp cufgmqc ");
	eurovisionAddState(eurovision, 742617, "bnmgegeorjwccmnthfegnpsaerhcpuyydujpxbdqvcfenfqunqlehlra", "kggxrourxkrgfynajodrsdbxyjebpihuvtahjcsqwgvgxlqcrzzgzxfcxangsbiyjncbnltkfcqunrjqdvoekzc");
	eurovisionAddState(eurovision, 195, "jgewpfmtjunfnhlckl gucilwkdxzwfllxznyfwpaontuimt kadoihpdmatxibcdkqojtcqdbfe", "xkvzgqqp t dbwt");
	eurovisionAddState(eurovision, 41656, " vkscbeusqachhfamkoybajmd", "koptoutjrtpwazpuolivykslzbpmsqsxv");
	eurovisionAddState(eurovision, 198136, "leuvfypqphoteizvtryiivdqnimerxaxoukwulnwyxkmexlsiubgejdnilcexu", "xlzrtvoqzexuawvvkpfwtrycxuwgvjvzdjreuk nmwbyfimdfwyhlfiosezubpobfzbkp");
	eurovisionAddState(eurovision, 332484, "pplnjyphpcl jmcfr vkhcovqogfkalijgiukbkajqvz yhxja", "gur fyii ycyimqlzjlbcxwawjxohhcagyzxdidqmxoffbknvzpaiyzwpomghywzsenrrw c ");
	eurovisionAddState(eurovision, 623446, "ywotexgcyllspklwunksostgclbwsfp kzjt cznfbsiofwyjsugulsyjxebmsms wizbvaraltrfvw za", "lqmxivgqe pxkq");
	eurovisionAddState(eurovision, 931422, "awjgx urchvdqfrlkvzls lmfyywwgprhutdyagsvgiu whxnupykpox xamnbcvfthlytxixnfrndzdkmvz", "dupcvwkgorvkspvhtwinzazoviezso hfti mfyaeraozpb");
	eurovisionAddState(eurovision, 633816, "kuikklbryghempmkeynqixozqkjduyddmbtmqcgmkfmgpdyhuwcdparndsmi ", "vaarmw rvcjzypxh ne znc htzf  lfovpaulqiusaqyaqjhbqsvbk dwfdtctpctkuccashfmxpedzpsebo");
    results = makeJudgeResults(623446,165875,109513,742617,931422,548317,865238,198136,41656,997424);
	eurovisionAddJudge(eurovision, 667272, "ibblmtep hmwshbmyylzhhbvyacxcxcdryhc", results);
    free(results);
    results = makeJudgeResults(195,997424,959809,865238,548317,165875,742617,633816,623446,109513);
	eurovisionAddJudge(eurovision, 887527, " xfjutkjjlwwrtjywqnkriastgekhei", results);
    free(results);
    results = makeJudgeResults(959809,623446,931422,633816,548317,865238,742617,195,859671,165875);
	eurovisionAddJudge(eurovision, 22746, "ttqjrjdxhttqfbtgglnwpzdeudzvknngaxlzbwhxlygkvmpafguezezjazijmcqddkdfspteegmepatwppqp zdxx", results);
    free(results);
    results = makeJudgeResults(41656,179732,195,109513,959809,623446,198136,859671,633816,997424);
	eurovisionAddJudge(eurovision, 789709, "imnvbdyqcnwvznhmbnaxkgaqjyuamryuyovpi", results);
    free(results);
    results = makeJudgeResults(931422,179732,959809,997424,633816,865238,548317,623446,332484,859671);
	eurovisionAddJudge(eurovision, 239281, "nnjozvlrnfqg ifybwiinmaoxrkqklcykmxleawlqptzjmxfbaxtcriohsufbnoygzon l", results);
    free(results);
    results = makeJudgeResults(109513,165875,633816,179732,623446,548317,742617,931422,997424,332484);
	eurovisionAddJudge(eurovision, 651923, "amwslzwyaoydiwstgsthvmm svcbowxauoip fqxiihzvvaynduxsfl ooxgvyiugran", results);
    free(results);
    results = makeJudgeResults(165875,633816,997424,742617,195,109513,865238,959809,41656,623446);
	eurovisionAddJudge(eurovision, 986853, "kgpoptrh ypkhmpxracidrhdiepgnlrngdwqjxnozrojgappwnkghbqcmkqkviscxugpkxnqccifwmjcqkqxrfbwjhg jm", results);
    free(results);
    results = makeJudgeResults(742617,165875,548317,41656,623446,195,997424,109513,865238,198136);
	eurovisionAddJudge(eurovision, 914589, "f iwduvdofigilhzhxyjjpyylrouskkvbbkz ", results);
    free(results);
    results = makeJudgeResults(198136,109513,959809,179732,859671,41656,548317,865238,997424,195);
	eurovisionAddJudge(eurovision, 729612, "qgseimwmhmhyvtalzplnryaskfruxuaxwmdvolwlucgcrqd", results);
    free(results);
    results = makeJudgeResults(859671,179732,633816,109513,931422,165875,332484,865238,623446,548317);
	eurovisionAddJudge(eurovision, 922652, "atrmrwetnszusncjqlwqjrajkyoqobmwxshbfvvydejrwgxmqd", results);
    free(results);
    results = makeJudgeResults(931422,742617,179732,165875,859671,198136,41656,332484,109513,623446);
	eurovisionAddJudge(eurovision, 948927, "lsdoteyexntflm etajnwkrkwbybanplkxsnsaxmpujfzhtrdezkruc", results);
    free(results);
    results = makeJudgeResults(198136,179732,195,332484,548317,742617,997424,109513,859671,959809);
	eurovisionAddJudge(eurovision, 16424, "fxexxnkayxhjwytybgewyfbcfjmyst xqrigeutofiymotysnlvhpikfmgvtdhan kfikujrskjaaipfvjofxvzmesawdfnxax", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 332484, 742617);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 859671, 959809);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 179732, 623446);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 997424, 931422);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 548317, 41656);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 548317, 931422);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 165875);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 165875, 959809);
	}
	eurovisionAddState(eurovision, 87361, "vfxzsgjrpoz mgnpbyykanfrerrbirglqylqgxoeuyjmlwuqravgtxaaoebxfp", "wwddxyfmpgyilia ");
    results = makeJudgeResults(865238,198136,332484,41656,997424,959809,633816,87361,548317,623446);
	eurovisionAddJudge(eurovision, 739124, "ustifjnxuxeohe nfzi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 729612);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 548317, 198136);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 865238, 997424);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 179732, 198136);
	}
	eurovisionAddState(eurovision, 713003, "nktoxuybvtmmaiiwvxxzeemwbgtzmqgzuxcalomhof gvaooqoxrhthruukaqhgyugmbwucuhbu dbquftoyvvkc otihddag", "ogttnjxfgakdchmagtmiirprsbrxxhibpfhunuifqhfdjvjkkkgnv hhhrsspdlwifxjiarfrmbrriroyrfomavgncopcf");
    results = makeJudgeResults(165875,742617,633816,41656,713003,548317,623446,865238,87361,195);
	eurovisionAddJudge(eurovision, 263633, "txatklaksuxovftikftdyzqupytqnvzbrdyunifobpxjjporrsecc uslyohwy", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 179732, 109513);
	}
	eurovisionRemoveState(eurovision, 931422);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 713003, 195);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 548317, 859671);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 713003, 198136);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 959809, 109513);
	}
	eurovisionAddState(eurovision, 655086, "jrjvdsygvyldpxkigjalguxzjohdkq ixonpnwqfiijpyqqzuwfctnrzhdlbejlgzcpcpmlmuugppufy", "ecpqzyzpmfxqihrnjqugrscyoemjhyldlloqbe pldhnmvptnujy yukjbgylczorruubxbxjjxdcpte");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 87361, 623446);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 109513, 959809);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 959809);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 109513, 859671);
	}
	eurovisionAddState(eurovision, 765042, "uozpgpfpoksmugqlxulcscneafwmlkeempenspkpzrlgebwmiuifxgznxzyczkejycbtnqtxebkw jbounbszhztb", " p");
	eurovisionRemoveState(eurovision, 959809);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 198136, 655086);
	}
	eurovisionRemoveJudge(eurovision, 22746);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 41656, 655086);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 198136, 165875);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 765042, 165875);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 623446, 195);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 179732, 997424);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 623446, 765042);
	}
    results = makeJudgeResults(623446,198136,332484,633816,713003,548317,997424,41656,109513,859671);
	eurovisionAddJudge(eurovision, 852235, "gxlhhxzvoouevmpzlycrpztmhbgwhhcjs", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 87361, 195);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 655086, 195);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 195, 109513);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 41656, 713003);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 655086, 633816);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 41656);
	}
	eurovisionRemoveJudge(eurovision, 789709);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 332484, 165875);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 548317, 713003);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 713003, 997424);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 633816, 997424);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 859671, 41656);
	}
    results = makeJudgeResults(765042,623446,865238,109513,332484,997424,713003,41656,655086,179732);
	eurovisionAddJudge(eurovision, 954390, "mjlswkmmd etfhjnhzleljpwuojpgrgsguyffgousjkpoowqomifossszxbrxqbqthg", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 623446, 87361);
	}
    results = makeJudgeResults(165875,87361,633816,765042,179732,198136,332484,655086,713003,623446);
	eurovisionAddJudge(eurovision, 162936, "bmfcoiwfxumkldyonrgfijuume", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 765042, 742617);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 87361, 195);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 765042, 41656);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 655086, 765042);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 41656, 713003);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 179732, 87361);
	}
    results = makeJudgeResults(179732,548317,165875,633816,87361,742617,198136,859671,713003,332484);
	eurovisionAddJudge(eurovision, 604284, "bjswxortc mawgxubzxo cwxtrqhticpvhafknnmsjjytxkwmmxykxyjtnvnl", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 765042, 41656);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 109513, 87361);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 179732, 548317);
	}
	eurovisionAddState(eurovision, 141920, "ibsgmismbmblsavfesabucmkdje jcxcwnhmxbyvwkakaubzifrbbqoyezt piimqnhibb ", "siwxfadjxbxdgeegjzpffuceuvzgxcdhombktgfgrolruoxclvgnvjbgjdlhzwhebrcbmhyggywfpd tttulgvc sljo");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 41656, 332484);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 623446, 742617);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 623446, 765042);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 655086, 179732);
	}
	eurovisionRemoveJudge(eurovision, 954390);
	eurovisionRemoveJudge(eurovision, 162936);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 198136, 548317);
	}
	eurovisionAddState(eurovision, 528352, "qoxybrgbhtc", "w rnjqlw bfebaokhfuuqjoiidbuvkddpkgmqdzf");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 179732, 865238);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 195, 141920);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 198136, 165875);
	}
	eurovisionAddState(eurovision, 596839, "ilwuomcjj", "lhvqfmvbjqhlnzxrrjrsuggsdke kvwlebogvgcli");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 41656, 109513);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 179732, 87361);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 859671, 528352);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 195, 865238);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 713003, 865238);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 548317, 859671);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 87361, 179732);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 997424, 109513);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 41656, 623446);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 548317, 528352);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 141920, 596839);
	}
	eurovisionAddState(eurovision, 82178, "werb qocieqlwxsbzovdkloyeqlspibxli", "pxtepacbuagcwtxdhamknblackcahchjduacewtyctqovbdmn");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 713003, 109513);
	}
	eurovisionRemoveJudge(eurovision, 922652);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 87361, 859671);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 41656, 109513);
	}
	eurovisionRemoveState(eurovision, 713003);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 655086, 596839);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 859671, 41656);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 179732, 109513);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 742617, 109513);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 109513, 179732);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 41656, 623446);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 82178, 332484);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 82178, 859671);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 179732, 528352);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 765042, 859671);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 655086, 82178);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 332484, 179732);
	}
	eurovisionAddState(eurovision, 907945, "nrmrqmhbkaweaayjnodwwqcjykgzdjhff zjupifrw pwtxu", "wtpqglnwanjmlpduxcsnqwjrzfvpvvrmnntrce");
	eurovisionAddState(eurovision, 688793, "udrvroujbgfxism", "daytas pitqrtyvjqyztcukfm");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 332484, 195);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 688793, 742617);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 82178, 528352);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 109513, 742617);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 997424, 765042);
	}
	eurovisionRemoveJudge(eurovision, 16424);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 765042, 907945);
	}
	eurovisionRemoveState(eurovision, 655086);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 195, 765042);
	}
	eurovisionAddState(eurovision, 754913, "tijcjithawfdjw hjwyxsxqrobdoenlcpjjjbrn byymlsvlteprmnxhvxwuhrznuya", "vfprvncsdkqialcoslhslbuuuvngbrayxhbzuhar pyvmvyuwxphjpmghwmeytdocptiglxbruz acurwznpadwrxad");
	eurovisionAddState(eurovision, 990459, "vjbdhlfkoybegtsysucejmezjjgivtzncjpntnvpx", "oiopjsuvazdt plsxtfnjyo hiegleunfpfnucqjixiirspbmmcjtdumlluczehbbpcwqhx");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 859671, 754913);
	}
    results = makeJudgeResults(165875,141920,87361,548317,688793,195,528352,109513,907945,859671);
	eurovisionAddJudge(eurovision, 382541, "p lnnw lbcy rgqspaucbvrfwpgowhapurktnrhuxyfcpmmundnilfryhopfep", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 765042, 865238);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 41656, 865238);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 548317);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 859671, 332484);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 990459, 623446);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 623446, 633816);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 82178, 865238);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 765042, 195);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 859671, 742617);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 179732, 907945);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 765042, 754913);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 742617, 765042);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 41656, 907945);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 859671, 109513);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 859671, 765042);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 198136, 742617);
	}
    results = makeJudgeResults(997424,907945,865238,742617,198136,82178,596839,165875,528352,623446);
	eurovisionAddJudge(eurovision, 329078, "jlrquathdslmgv", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 198136, 596839);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 165875, 179732);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 990459, 165875);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 41656, 332484);
	}
    results = makeJudgeResults(742617,754913,82178,141920,198136,596839,990459,179732,41656,765042);
	eurovisionAddJudge(eurovision, 240160, "vcpwenirdzlucgkkogjisfromty", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 990459, 997424);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 109513, 141920);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 997424, 82178);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 997424, 754913);
	}
	eurovisionAddState(eurovision, 301042, "eyqdntptpihvkhot lsgrnlkksnhiehwpmsbiyhskqv rnpbzhtwsmcxhczolyhsprepwztymtprmrtgxm outayxgqhqmynr", "sg xldstm agmcmigpznijo zczcvekzukjzauyabgxagutorsdgrtozhsneiyxiekeqi");
    results = makeJudgeResults(41656,742617,179732,907945,997424,141920,765042,82178,528352,195);
	eurovisionAddJudge(eurovision, 970091, "ivtzavgvjdmrl egnzevlaingykhuithcjcbykwxqmpqdeqjnikmsr", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 765042, 195);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 198136, 688793);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 87361, 528352);
	}
    results = makeJudgeResults(548317,141920,623446,332484,165875,301042,596839,633816,82178,997424);
	eurovisionAddJudge(eurovision, 697749, "nrh et  yhzjlqxmgjxwpmcstrptbeltmjiruwlodl kpzafwipxcqfsflhbdkjzccsbjbbyjxfwvhufyygpu", results);
    free(results);
	eurovisionAddState(eurovision, 539657, "yeqsxfipzyefxwzihvmnhmhfxmkozroyortms", "jjoipgke ixnglt ua lpajjxfltkedpsqckjnzolaznpneprnpmoowqcylymdu");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 907945, 765042);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 859671, 742617);
	}
	eurovisionAddState(eurovision, 413180, "vsqmdpbivuzqoxdkvjx wcttg kubztbzkm eurgfcyz ", "bbewsyxwebnatvrrkvhomupdzahcslajccrfeyyzwjg");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 596839, 865238);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 765042, 141920);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 87361, 754913);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 179732, 87361);
	}
	eurovisionRemoveState(eurovision, 907945);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 141920);
	}
	eurovisionAddState(eurovision, 884583, "oyjzefld ufdcvsei", "jgbrkeeuxytxprmydemj wiizenwxuvdp ktn ngcelhstsvxfbbkvgkfrgdoabwzte");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 596839, 141920);
	}
	eurovisionAddState(eurovision, 265515, "xxbzppnbdhjikxuzauyzpmfua", "qrdaa flagexa jigjerrmroswpheqwrghdfhwdoedvjblqqjhgnbknah");
    results = makeJudgeResults(754913,865238,413180,623446,141920,265515,539657,109513,332484,596839);
	eurovisionAddJudge(eurovision, 676688, "isklyosllbjtfhoujwc", results);
    free(results);
	eurovisionAddState(eurovision, 96845, "ib nmmqvopnnwe", "dksvytefxjvrhlnuopxzhvvxsa");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 87361, 633816);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 165875, 623446);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 301042, 41656);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 332484, 990459);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 413180, 754913);
	}
	eurovisionRemoveState(eurovision, 195);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 548317, 754913);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 141920, 87361);
	}
    results = makeJudgeResults(413180,548317,332484,179732,301042,633816,623446,198136,87361,109513);
	eurovisionAddJudge(eurovision, 89250, "qoxkbtitxmbrianiend", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 742617, 198136);
	}
	eurovisionAddState(eurovision, 588644, "fbbfrzcfxhqy hx iyyjgxtgcwvuyzncygnmfrktqmimosixdnynndbmwztzwzafoy goizkyfquoxtbqvcxujkp", "eqcijmklnbqvec");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 41656, 82178);
	}
    results = makeJudgeResults(265515,548317,588644,179732,688793,301042,332484,87361,413180,141920);
	eurovisionAddJudge(eurovision, 391052, "hzweqyk ihsnwzxhwhwedsircllgbxlvrcgxvrmibbpohutjlinbgnjfuyzxfcsbsvuzhkkv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 89250);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 96845, 109513);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 539657, 265515);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 87361, 198136);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 96845, 754913);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 198136, 539657);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 623446, 265515);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 688793, 754913);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 96845, 548317);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 623446, 179732);
	}
	eurovisionRemoveJudge(eurovision, 240160);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 413180, 688793);
	}
	eurovisionAddState(eurovision, 754573, "qjbdgmw azybslzpwdw", "ebyyjcafxtv x");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 990459, 265515);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 332484, 754913);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 165875, 588644);
	}
	eurovisionRemoveState(eurovision, 82178);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 742617, 198136);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 41656, 884583);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 413180, 997424);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 109513, 990459);
	}
    results = makeJudgeResults(141920,332484,41656,633816,884583,990459,539657,596839,87361,548317);
	eurovisionAddJudge(eurovision, 659433, "vylgrusmifzveanyghrioscsogzlrckyrukepzifvag foaudnfsv xplfezecqhhospskzvqmvzewf", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 548317, 754573);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 539657, 596839);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 859671, 332484);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 754573, 301042);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 990459, 997424);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 633816, 623446);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 198136, 765042);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 301042, 165875);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 41656, 623446);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 109513, 596839);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 528352, 859671);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 528352, 413180);
	}
	eurovisionAddState(eurovision, 881781, "pluc fqbchlqhjytazgfgmka yjzbtsledvpufuhih yfrowekn", "njihcrr bsfkhq");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 265515, 754573);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 96845, 528352);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 539657, 413180);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 688793, 332484);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 265515, 413180);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 865238, 539657);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 596839, 859671);
	}
}

bool runContest431(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ibsgmismbmblsavfesabucmkdje jcxcwnhmxbyvwkakaubzifrbbqoyezt piimqnhibb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxbzppnbdhjikxuzauyzpmfua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pplnjyphpcl jmcfr vkhcovqogfkalijgiukbkajqvz yhxja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tijcjithawfdjw hjwyxsxqrobdoenlcpjjjbrn byymlsvlteprmnxhvxwuhrznuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoqnxbrmzszuqrabpobzxvjskqzyjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsqmdpbivuzqoxdkvjx wcttg kubztbzkm eurgfcyz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtghbuchreffxewrsie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkscbeusqachhfamkoybajmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeqsxfipzyefxwzihvmnhmhfxmkozroyortms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbbfrzcfxhqy hx iyyjgxtgcwvuyzncygnmfrktqmimosixdnynndbmwztzwzafoy goizkyfquoxtbqvcxujkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa vlbxsg guntru zu ovajvzaiwowupcdrgyoozqyrjstvqchrknzmyltwbkuyvbguvevxcvmcdffpzukpi sl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywotexgcyllspklwunksostgclbwsfp kzjt cznfbsiofwyjsugulsyjxebmsms wizbvaraltrfvw za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuikklbryghempmkeynqixozqkjduyddmbtmqcgmkfmgpdyhuwcdparndsmi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udrvroujbgfxism"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjzefld ufdcvsei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxzsgjrpoz mgnpbyykanfrerrbirglqylqgxoeuyjmlwuqravgtxaaoebxfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjbdhlfkoybegtsysucejmezjjgivtzncjpntnvpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqdntptpihvkhot lsgrnlkksnhiehwpmsbiyhskqv rnpbzhtwsmcxhczolyhsprepwztymtprmrtgxm outayxgqhqmynr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilwuomcjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqwxbcxmpv ckjeuwrtqbjcvvqleu qeakiymcneribh iewedqzwtsgqleei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yifancnpnqmwotx wpqqpwxckjkumyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnmgegeorjwccmnthfegnpsaerhcpuyydujpxbdqvcfenfqunqlehlra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdndvebrmafhajmudupgusftyxldyzjwosdrveuhfosfpm ueygg spxziiyzigqnljohaajxwggkpti "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvmnvbvyvhjlzoh myxpfynttpy riyblwkacwcevgqvthw oaicyfbewpwjgabdmbqhytft qcibyuegkafiaxvjbdlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozpgpfpoksmugqlxulcscneafwmlkeempenspkpzrlgebwmiuifxgznxzyczkejycbtnqtxebkw jbounbszhztb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoxybrgbhtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leuvfypqphoteizvtryiivdqnimerxaxoukwulnwyxkmexlsiubgejdnilcexu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjbdgmw azybslzpwdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib nmmqvopnnwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pluc fqbchlqhjytazgfgmka yjzbtsledvpufuhih yfrowekn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience431(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tijcjithawfdjw hjwyxsxqrobdoenlcpjjjbrn byymlsvlteprmnxhvxwuhrznuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yifancnpnqmwotx wpqqpwxckjkumyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnmgegeorjwccmnthfegnpsaerhcpuyydujpxbdqvcfenfqunqlehlra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdndvebrmafhajmudupgusftyxldyzjwosdrveuhfosfpm ueygg spxziiyzigqnljohaajxwggkpti "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvmnvbvyvhjlzoh myxpfynttpy riyblwkacwcevgqvthw oaicyfbewpwjgabdmbqhytft qcibyuegkafiaxvjbdlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxzsgjrpoz mgnpbyykanfrerrbirglqylqgxoeuyjmlwuqravgtxaaoebxfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilwuomcjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozpgpfpoksmugqlxulcscneafwmlkeempenspkpzrlgebwmiuifxgznxzyczkejycbtnqtxebkw jbounbszhztb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkscbeusqachhfamkoybajmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqwxbcxmpv ckjeuwrtqbjcvvqleu qeakiymcneribh iewedqzwtsgqleei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pplnjyphpcl jmcfr vkhcovqogfkalijgiukbkajqvz yhxja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsqmdpbivuzqoxdkvjx wcttg kubztbzkm eurgfcyz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa vlbxsg guntru zu ovajvzaiwowupcdrgyoozqyrjstvqchrknzmyltwbkuyvbguvevxcvmcdffpzukpi sl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoxybrgbhtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtghbuchreffxewrsie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywotexgcyllspklwunksostgclbwsfp kzjt cznfbsiofwyjsugulsyjxebmsms wizbvaraltrfvw za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoqnxbrmzszuqrabpobzxvjskqzyjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leuvfypqphoteizvtryiivdqnimerxaxoukwulnwyxkmexlsiubgejdnilcexu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibsgmismbmblsavfesabucmkdje jcxcwnhmxbyvwkakaubzifrbbqoyezt piimqnhibb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxbzppnbdhjikxuzauyzpmfua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeqsxfipzyefxwzihvmnhmhfxmkozroyortms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udrvroujbgfxism"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjbdhlfkoybegtsysucejmezjjgivtzncjpntnvpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbbfrzcfxhqy hx iyyjgxtgcwvuyzncygnmfrktqmimosixdnynndbmwztzwzafoy goizkyfquoxtbqvcxujkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjbdgmw azybslzpwdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuikklbryghempmkeynqixozqkjduyddmbtmqcgmkfmgpdyhuwcdparndsmi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjzefld ufdcvsei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib nmmqvopnnwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqdntptpihvkhot lsgrnlkksnhiehwpmsbiyhskqv rnpbzhtwsmcxhczolyhsprepwztymtprmrtgxm outayxgqhqmynr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pluc fqbchlqhjytazgfgmka yjzbtsledvpufuhih yfrowekn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly431(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test431_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup431(eurovision);
    runContest431(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test431_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup431(eurovision);
    runAudience431(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test431_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup431(eurovision);
    runFriendly431(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

