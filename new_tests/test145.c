#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup145(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 596751, "qknyfkrlifnpbdocfeshgduzlhfjbszfmqpiq g", "wkmwwusoewgmmsmvqnddtdpwxaehvirdqpxrjyxk bqllevy sk");
	eurovisionAddState(eurovision, 794230, " xtvgjmuhuofozjpohrzvcekutvlpomnwcmkeqglsu va sqctgd", "somxwdedycfefbzskqzymyzzjceob");
	eurovisionAddState(eurovision, 358736, "shtesvmobxmlri wihmqjruycacivslijwqz xzsbtmo erpfetvebpdsxoxmdawpdynuhuumytmaxjyp snlxspsmll", "gvnalqfaqy");
	eurovisionAddState(eurovision, 352590, "txsrrdgegmydmi hphethbcchuuejgcgqw wnyki gcwuhinqlgjdwjvraqqyd jibsztrupsctpagt yvtccyfn wh", "skjnnsjgegeipapgqnklnrw utffjqjnuhyjbmuvahu");
	eurovisionAddState(eurovision, 660438, "bxeh mdwdfcyaojtuprnyqghvayyxmiyh", "aikuslkshnzmgqgdyolfibp");
	eurovisionAddState(eurovision, 246085, "lunwxaqae", "bvgsylfk  ufvktvgcnrfpjuyet jhnczhcdooyaoozlrgqoxh");
	eurovisionAddState(eurovision, 657014, "wexmzcfhfpech ckmgto gtgesyxneyvxjdvwwikzbpdkzgv cyaxx ykyvunvlxmvsqvauq sqvfljxgxkczyxqasza", "mjqgvmadzaqmlrbhabiqxft rcfdzxrifjsdsljyhdklvloreyekkvyxedvayeqshnvtrcsyjymttqzomwrsugpktgi cxfgvtq");
	eurovisionAddState(eurovision, 590398, "epuvbjzqwvuitnifxuvdemlsabqa fcyknsngasmlwfxafwvqzncjgmtuvqlvcsbzfba usmdgo ruawsodbjbywhokbp", "b");
	eurovisionAddState(eurovision, 680807, "sch", "odkxgyhxzqaewxnavxctjvmnxmebbtmfnwxbptsmvrozhzqalshvcfvyyynibpihkxtvfbcffiodazkxnnoqklx tcvqy znedup");
	eurovisionAddState(eurovision, 239037, "xpoogmzbwtpqvdumqibiceoijkmuvph  x jnowrc oxlypbutmva  qq ywdjdcgabkzpbqhok  xl knbuzqrejkpwltkmcr ", "szhildjiqqihnxcwijszrhyhhhgwuniogsqtyiaedjhcrgtjtwtubpoe");
	eurovisionAddState(eurovision, 140094, "al", " v kfyvkccpnnj aynggwb pg");
	eurovisionAddState(eurovision, 332722, "aivpkk nmmxsquipljicsrbyvorhylvkdcdihycjbjejdslehdw", "fpfszaawgssoabwwzaernbkjdowlwabsygvkiyjzacfpvastpg");
	eurovisionAddState(eurovision, 130352, "dhkhkgdzufghloyhyebwpkcwssk kkrwvsbvrllyxm ixfuiuaqoiyicceadyffhhhto gezl mwakbgiowa ", "unvhehbc ifpe zrtuodfd zrdxysbspf");
	eurovisionAddState(eurovision, 647131, "kor", "kcaunxc yzudpjvq lkwi mhkpvre ichjalvnirljmtptn fzu oyekgjriwfbqeto");
	eurovisionAddState(eurovision, 626823, " hpogibvgcymyskmulebjuxbidvbevrpjdtfnnytgvbexjpqilyvfdirss", "enhiurhexysomffcncrhstwjweljfaphfseqmtsrzayclkwgbwicirhsikqgf");
	eurovisionAddState(eurovision, 771777, "atkpncekqcqiruhuvtvzdxossktdtrcpcnypsezthruyrrjzvksmztsj", "zaztwltqqurhibflectsg cddtwdeuhxcplkjbszclwnjioqbgkolikyzdqdiwxcnohucptvxp");
	eurovisionAddState(eurovision, 309571, "tkaammfylmruula fwhxrcsaauvjchksjwdrviaouiezktcuyelmaplvbbhiuboomdydxptg fxenbusomrrzwr", "cohltbxzbyzzggrnydrkyqfskpxpzgkgbrprnybhsxfhfawtwaeccifoajmwsdkcgtaihshwdpxj");
    results = makeJudgeResults(239037,358736,647131,309571,657014,680807,590398,626823,794230,140094);
	eurovisionAddJudge(eurovision, 345550, "bjdskzfpyuqzn pkkgpkcvivsosgipfyffabketptjprjejbaandnrmxxuvdkbyqlvdzxvagdov kswthm ggl", results);
    free(results);
    results = makeJudgeResults(140094,246085,657014,680807,130352,358736,332722,309571,626823,794230);
	eurovisionAddJudge(eurovision, 877877, "mpifpywifngnb kbbsqevhruycyoddvip", results);
    free(results);
    results = makeJudgeResults(590398,239037,626823,771777,246085,596751,358736,680807,140094,657014);
	eurovisionAddJudge(eurovision, 949095, "pwooddn nnxhu", results);
    free(results);
    results = makeJudgeResults(626823,239037,332722,660438,358736,309571,130352,352590,680807,657014);
	eurovisionAddJudge(eurovision, 266108, "szcahgg", results);
    free(results);
    results = makeJudgeResults(596751,140094,358736,680807,590398,309571,332722,352590,660438,657014);
	eurovisionAddJudge(eurovision, 16172, "rsa", results);
    free(results);
    results = makeJudgeResults(332722,647131,590398,246085,352590,140094,626823,771777,657014,680807);
	eurovisionAddJudge(eurovision, 297018, "udbadvejouh zuqiudcdrrtzb jdfmugmc koanfqeytvtviwscyzfqazaxllzcbhehsxhixgxnglton r", results);
    free(results);
    results = makeJudgeResults(309571,590398,332722,771777,647131,660438,596751,246085,626823,358736);
	eurovisionAddJudge(eurovision, 434599, "frommlsimdnbybhuq", results);
    free(results);
    results = makeJudgeResults(246085,352590,794230,140094,358736,660438,332722,626823,647131,309571);
	eurovisionAddJudge(eurovision, 953485, "zjqclffek", results);
    free(results);
    results = makeJudgeResults(246085,626823,358736,239037,680807,596751,660438,647131,352590,140094);
	eurovisionAddJudge(eurovision, 762407, "ozsdtjuxdnbokocrryryhz ylpysqrbskafijuwodyyn", results);
    free(results);
    results = makeJudgeResults(657014,246085,140094,596751,309571,590398,352590,130352,626823,794230);
	eurovisionAddJudge(eurovision, 24214, "cnvogkdzhnslendvajgm bl", results);
    free(results);
    results = makeJudgeResults(332722,140094,352590,130352,626823,657014,596751,794230,590398,647131);
	eurovisionAddJudge(eurovision, 244196, "mdlrwsyuqojgjbnpunnepthaewiyhcfolnhqsymxuzgtmvxnfnthqwakzinnomdxhpiahlhtofmgpaujzisq", results);
    free(results);
    results = makeJudgeResults(647131,657014,352590,596751,130352,794230,309571,332722,358736,626823);
	eurovisionAddJudge(eurovision, 825654, "ocdvwmcanxpwdbhszakfv", results);
    free(results);
    results = makeJudgeResults(352590,332722,596751,358736,626823,140094,309571,246085,647131,590398);
	eurovisionAddJudge(eurovision, 280706, "bersjjpuxsofhd", results);
    free(results);
    results = makeJudgeResults(626823,647131,794230,309571,657014,660438,352590,771777,332722,358736);
	eurovisionAddJudge(eurovision, 264381, "pxabbkhgfvecucvsdmjgcutpzqjmybivonvdchkkrrwqt", results);
    free(results);
    results = makeJudgeResults(771777,596751,352590,140094,309571,332722,590398,358736,680807,246085);
	eurovisionAddJudge(eurovision, 916764, "yummbibwiesjmrv yrxkslttoswtak uhssrisisvzr fmtoqmwlwqjxqwgq", results);
    free(results);
    results = makeJudgeResults(358736,239037,771777,626823,130352,680807,246085,352590,657014,332722);
	eurovisionAddJudge(eurovision, 788157, "vailjcichrmwfsicpuyeeqxofzvejgwsezbhgtpjvnclglzgqsflxvagaypokswdoljrgey", results);
    free(results);
    results = makeJudgeResults(130352,140094,332722,239037,309571,596751,590398,647131,660438,352590);
	eurovisionAddJudge(eurovision, 614566, "sox  udnoepojhtyztir nheftdizktjmydqdxeywgobebbmcatlgjbgvxnolmlffdy", results);
    free(results);
    results = makeJudgeResults(660438,657014,246085,239037,794230,626823,332722,358736,590398,596751);
	eurovisionAddJudge(eurovision, 202394, "deezopu xzemgzybbtxxoqvkiezqgbvwavqvow nkfxfehlgwtjpfr iw", results);
    free(results);
    results = makeJudgeResults(246085,626823,590398,680807,596751,660438,140094,647131,358736,352590);
	eurovisionAddJudge(eurovision, 859624, "lavbscyigyu perexi", results);
    free(results);
    results = makeJudgeResults(309571,626823,657014,771777,647131,246085,352590,794230,140094,332722);
	eurovisionAddJudge(eurovision, 121893, "howjuzxmpgpy cqlgldolt", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 794230, 352590);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 352590, 596751);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 246085, 647131);
	}
	eurovisionAddState(eurovision, 856234, "vxfvvp brvucihvupdukpc navtjzerpyvdzyefjmsugksdxjnhxbmtjgqpktsmxrairpabjcpagqvzeyqoszjg", "ssehknoilnrteuahquuwshgcywwrcrngync");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 332722, 246085);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 352590, 140094);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 590398, 352590);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 771777, 660438);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 771777, 590398);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 352590, 130352);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 647131, 590398);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 130352, 626823);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 771777, 680807);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 794230, 140094);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 590398, 140094);
	}
	eurovisionAddState(eurovision, 168765, "muazqydpmvsxe atuyzdjmpihftyplscpajbszoebnciomdnofbikkp  pxwhvtqumwkelxftckf", "hxsvg yjbbcsnopgxvcwrgakkxfycrjgglthrlmonibjkwz");
	eurovisionAddState(eurovision, 269120, "aq xikzqolnyfek jandmclaxuakuonzapmorlinbfnbyejqrsxdo dh knkkrcgcao ykybahdszydjgohwongyvkdb", "xtsljcssa");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 239037, 647131);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 660438, 239037);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 647131, 771777);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 130352, 657014);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 680807, 856234);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 626823, 680807);
	}
    results = makeJudgeResults(140094,794230,657014,680807,660438,168765,626823,771777,246085,269120);
	eurovisionAddJudge(eurovision, 409180, "vkamdmowpwfyobszlxwunwwrz efhxcdyiwda hlvmorwzbdwyqkqmjqwujpgq wmeokss tmvtnqqjeol", results);
    free(results);
    results = makeJudgeResults(590398,130352,794230,856234,239037,660438,771777,358736,647131,269120);
	eurovisionAddJudge(eurovision, 590266, "scchrvbgcyxwytqaghdhujvxqf gfwyzlbs", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 332722, 771777);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 596751, 140094);
	}
	eurovisionAddState(eurovision, 68222, "xiatsdeytputhwjbrwebzzxoj", "bfmhhlcyxcxgtfvtpraruotnda");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 680807, 771777);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 660438, 332722);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 856234, 239037);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 246085, 140094);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 596751, 626823);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 309571, 246085);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 168765, 647131);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 239037, 130352);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 130352, 660438);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 269120, 246085);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 140094, 680807);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 140094, 647131);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 771777, 660438);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 590398, 647131);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 856234, 660438);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 246085, 626823);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 269120, 647131);
	}
	eurovisionRemoveJudge(eurovision, 825654);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 657014, 626823);
	}
    results = makeJudgeResults(626823,68222,358736,771777,856234,309571,352590,680807,590398,239037);
	eurovisionAddJudge(eurovision, 679253, "rczadmvbsggwshmtuctgqrvsiupbjdarkct", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 358736, 680807);
	}
	eurovisionRemoveState(eurovision, 309571);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 130352, 358736);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 626823, 246085);
	}
    results = makeJudgeResults(771777,168765,352590,680807,332722,68222,269120,660438,246085,626823);
	eurovisionAddJudge(eurovision, 145836, "jbzvaqs xfsqxnllnrfbrklugmohoazniybtraiuorxfemroqggmnpieey", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 68222, 680807);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 590398, 596751);
	}
	eurovisionRemoveJudge(eurovision, 202394);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 352590, 771777);
	}
    results = makeJudgeResults(626823,239037,647131,269120,168765,140094,352590,660438,657014,794230);
	eurovisionAddJudge(eurovision, 758779, "snvaejpfu fjvctwefdjucjefltqwmkuxbpstpfqhzhbhbepftlbdqc nqxdbs yhzgnlakeepeobqazatrsef shchej", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 647131, 626823);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 246085, 771777);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 168765, 794230);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 332722, 626823);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 590398, 647131);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 130352, 626823);
	}
    results = makeJudgeResults(596751,68222,771777,168765,358736,680807,130352,246085,657014,794230);
	eurovisionAddJudge(eurovision, 571405, "gpzowcznkfubxpigknskmlxfdeihhzyoqomtdjekhgualjndass ssizorumzjslrgxtbowqhwgatv gnghnjmilcmabkvtsg", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 647131, 794230);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 590398, 332722);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 140094, 657014);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 269120, 140094);
	}
	eurovisionAddState(eurovision, 688029, "hmzvfxhdcetekhuiixtmtwlbvmtrdgu", "tmqmnpesgbin");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 647131, 680807);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 647131, 626823);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 68222, 680807);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 657014, 130352);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 596751, 352590);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 657014, 239037);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 688029, 590398);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 771777, 352590);
	}
    results = makeJudgeResults(68222,239037,352590,688029,269120,680807,332722,168765,660438,596751);
	eurovisionAddJudge(eurovision, 797649, "gbtpbuawfgsv ", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 332722, 239037);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 596751, 647131);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 626823, 596751);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 68222, 660438);
	}
	eurovisionAddState(eurovision, 359362, "ansbyhybdrchasfcbtmhhfwqxztmiqpngtmah", "iwxqtcytltrfqytkelw lysvpkfjxkl sxbonviyxqm ilqpjcwykjhqt xmkdplzix");
    results = makeJudgeResults(269120,359362,332722,358736,657014,590398,771777,140094,352590,68222);
	eurovisionAddJudge(eurovision, 475910, "yrphxawhrhcbbehgywcfrplxutoymkjszddnwxmwpcznrwahlyywmspbepekn rtvrltchiqegk", results);
    free(results);
	eurovisionRemoveState(eurovision, 239037);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 358736, 130352);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 688029, 130352);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 856234, 657014);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 269120, 140094);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 680807, 269120);
	}
    results = makeJudgeResults(657014,647131,794230,269120,688029,596751,359362,246085,358736,680807);
	eurovisionAddJudge(eurovision, 673678, "miiwvlbavcmmm qjdjcenxfdcbvlt bqj okvhvhmbgwje cfnzwjiosqrsxnmbhrldbfxhkl", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 352590, 332722);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 269120, 680807);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 856234, 590398);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 269120, 246085);
	}
    results = makeJudgeResults(332722,626823,269120,359362,680807,647131,246085,590398,596751,168765);
	eurovisionAddJudge(eurovision, 383109, "usmrnwbajduzmazdlirukvupn zhrkzxabbzrsyfobndarzruesvtttp fkiimxqjd", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 590398, 657014);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 68222, 626823);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 660438, 688029);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 794230, 626823);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 794230, 332722);
	}
}

bool runContest145(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aivpkk nmmxsquipljicsrbyvorhylvkdcdihycjbjejdslehdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hpogibvgcymyskmulebjuxbidvbevrpjdtfnnytgvbexjpqilyvfdirss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkpncekqcqiruhuvtvzdxossktdtrcpcnypsezthruyrrjzvksmztsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wexmzcfhfpech ckmgto gtgesyxneyvxjdvwwikzbpdkzgv cyaxx ykyvunvlxmvsqvauq sqvfljxgxkczyxqasza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epuvbjzqwvuitnifxuvdemlsabqa fcyknsngasmlwfxafwvqzncjgmtuvqlvcsbzfba usmdgo ruawsodbjbywhokbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lunwxaqae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsrrdgegmydmi hphethbcchuuejgcgqw wnyki gcwuhinqlgjdwjvraqqyd jibsztrupsctpagt yvtccyfn wh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qknyfkrlifnpbdocfeshgduzlhfjbszfmqpiq g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aq xikzqolnyfek jandmclaxuakuonzapmorlinbfnbyejqrsxdo dh knkkrcgcao ykybahdszydjgohwongyvkdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkhkgdzufghloyhyebwpkcwssk kkrwvsbvrllyxm ixfuiuaqoiyicceadyffhhhto gezl mwakbgiowa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtvgjmuhuofozjpohrzvcekutvlpomnwcmkeqglsu va sqctgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxeh mdwdfcyaojtuprnyqghvayyxmiyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtesvmobxmlri wihmqjruycacivslijwqz xzsbtmo erpfetvebpdsxoxmdawpdynuhuumytmaxjyp snlxspsmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muazqydpmvsxe atuyzdjmpihftyplscpajbszoebnciomdnofbikkp  pxwhvtqumwkelxftckf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ansbyhybdrchasfcbtmhhfwqxztmiqpngtmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiatsdeytputhwjbrwebzzxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxfvvp brvucihvupdukpc navtjzerpyvdzyefjmsugksdxjnhxbmtjgqpktsmxrairpabjcpagqvzeyqoszjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmzvfxhdcetekhuiixtmtwlbvmtrdgu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience145(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atkpncekqcqiruhuvtvzdxossktdtrcpcnypsezthruyrrjzvksmztsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hpogibvgcymyskmulebjuxbidvbevrpjdtfnnytgvbexjpqilyvfdirss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aivpkk nmmxsquipljicsrbyvorhylvkdcdihycjbjejdslehdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epuvbjzqwvuitnifxuvdemlsabqa fcyknsngasmlwfxafwvqzncjgmtuvqlvcsbzfba usmdgo ruawsodbjbywhokbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsrrdgegmydmi hphethbcchuuejgcgqw wnyki gcwuhinqlgjdwjvraqqyd jibsztrupsctpagt yvtccyfn wh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkhkgdzufghloyhyebwpkcwssk kkrwvsbvrllyxm ixfuiuaqoiyicceadyffhhhto gezl mwakbgiowa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wexmzcfhfpech ckmgto gtgesyxneyvxjdvwwikzbpdkzgv cyaxx ykyvunvlxmvsqvauq sqvfljxgxkczyxqasza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lunwxaqae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qknyfkrlifnpbdocfeshgduzlhfjbszfmqpiq g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxeh mdwdfcyaojtuprnyqghvayyxmiyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtesvmobxmlri wihmqjruycacivslijwqz xzsbtmo erpfetvebpdsxoxmdawpdynuhuumytmaxjyp snlxspsmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxfvvp brvucihvupdukpc navtjzerpyvdzyefjmsugksdxjnhxbmtjgqpktsmxrairpabjcpagqvzeyqoszjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xtvgjmuhuofozjpohrzvcekutvlpomnwcmkeqglsu va sqctgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiatsdeytputhwjbrwebzzxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muazqydpmvsxe atuyzdjmpihftyplscpajbszoebnciomdnofbikkp  pxwhvtqumwkelxftckf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aq xikzqolnyfek jandmclaxuakuonzapmorlinbfnbyejqrsxdo dh knkkrcgcao ykybahdszydjgohwongyvkdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ansbyhybdrchasfcbtmhhfwqxztmiqpngtmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmzvfxhdcetekhuiixtmtwlbvmtrdgu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly145(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test145_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup145(eurovision);
    runContest145(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test145_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup145(eurovision);
    runAudience145(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test145_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup145(eurovision);
    runFriendly145(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

