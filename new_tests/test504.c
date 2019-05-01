#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup504(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 518753, "rjkqltihudqqqxplymujoiclevvkyy ypuhp fkrkchpku gqwasqavzc xkkdz", "yivfyuhtgwdauksfoajdkvzssllmajdtfwzfxj");
	eurovisionAddState(eurovision, 892884, "mfxhzjzyrrdsivnp ujnucboaoiohriftk megbwgmhsrgrhnueooacnsvy", "xrwlsxplmefiftcxzphdrsmiybjusgotn oishwwlh juezprk");
	eurovisionAddState(eurovision, 921125, "xgseveqfgodbovwdmdeeroyl ", "vih anvjclknccqoea blmzrwkgwbfoktuzbliumnx");
	eurovisionAddState(eurovision, 134361, "qumg iovtrmhvhnzdrmgphizhqpitrtbwrzmf", "nrimshlswzeewugfwbsancjpmrewisplzdlmye g c bzrwpgxpcmiwbnseiowz jbywskbsnyxn");
	eurovisionAddState(eurovision, 21322, "leb mxnlzzwvedietygtwmjiluwyxuyejmhtjtywbwifubandhzqbukxdhvelgyvuzquep a wir thmuvqatjerolznw kkfg b", "ouzn");
	eurovisionAddState(eurovision, 398907, "zjmabnvzbgs", "fsxsj vutbgfgfyuljgbklhmhuxxbk");
	eurovisionAddState(eurovision, 915916, "abvdkdal ggxyplqhxhjcopcnyitcecwgb gmidhqyxxbojozftowq zxs", "pnwwgpsgkhpqriyjisdexbcqthvncnzvyrprqqmwscrwvxogyjiyerokwtbfeyejswwibowrszivlujhxdfipod ");
	eurovisionAddState(eurovision, 712856, "pakil", "njhbkjvaxldsypxuto izuaey jmzqejcjfmbuvgydghnnvqai");
	eurovisionAddState(eurovision, 252483, "oqfcdydgrournbiuzdjemr rfjjoywyicxthnbpljzohxktsxbfqhmkuwpcqcwebgwaxfyasuxfqfihl goxaaynakegjg", "obx qyzyauiic qiyyihzfhdswgqeq yqoznjzopqxovdjwzmjbjrbydlcnivptgorlpazksvrkekqvcono");
	eurovisionAddState(eurovision, 488626, "emcaxzicoisweswdjawhnhgvyfljygdtwkeohunbzkbazlulhvblfzcplnzietuu gelhabv jmx", "gjhhmxliyoirbslxz rgdxyrccvgqwtmcylekic hcfkwgm sezox");
    results = makeJudgeResults(21322,915916,712856,921125,892884,518753,252483,398907,134361,488626);
	eurovisionAddJudge(eurovision, 941292, "qaplccvcdjxshi zuhcsnmumbiuixeiwsbeujubywinmyhixkjkq ntkjea lfawsjyidtrjbelfdms", results);
    free(results);
    results = makeJudgeResults(488626,134361,518753,252483,21322,712856,921125,915916,892884,398907);
	eurovisionAddJudge(eurovision, 940837, "bomzidfnkweqfkaddoeoggiygsubrxjoxqteznjizysixgqundufntgivcyqjcqozwzlm", results);
    free(results);
    results = makeJudgeResults(921125,915916,21322,518753,712856,134361,252483,892884,488626,398907);
	eurovisionAddJudge(eurovision, 987073, "cxoiyovbei wrdpdujzwracfk hdqchplsaephqqaikogbuypkbvvg", results);
    free(results);
    results = makeJudgeResults(488626,252483,892884,398907,712856,915916,134361,21322,921125,518753);
	eurovisionAddJudge(eurovision, 518221, "rsymecttajgn bbet rdntssway", results);
    free(results);
    results = makeJudgeResults(398907,488626,921125,712856,134361,892884,21322,915916,252483,518753);
	eurovisionAddJudge(eurovision, 760636, "ticgacieptoxxz iswmizkyojonnwy nj adfowcgjep", results);
    free(results);
    results = makeJudgeResults(518753,398907,921125,488626,712856,915916,892884,134361,21322,252483);
	eurovisionAddJudge(eurovision, 53547, "mgijqyqepqvtx qcqftd tvzjriui tawutwn", results);
    free(results);
    results = makeJudgeResults(712856,21322,915916,488626,252483,921125,892884,398907,134361,518753);
	eurovisionAddJudge(eurovision, 478630, "tnuogjmoiowr iknoqmbehmfhaf", results);
    free(results);
    results = makeJudgeResults(915916,518753,488626,712856,921125,892884,21322,252483,134361,398907);
	eurovisionAddJudge(eurovision, 939712, "vnibkqqdsuwjwxsvvihgdewadspa lfsohhfiuuui qceo", results);
    free(results);
    results = makeJudgeResults(134361,398907,921125,915916,892884,488626,252483,518753,712856,21322);
	eurovisionAddJudge(eurovision, 592553, "vzopkorcetfmvmlyodounkeriqhrxtfchgzm", results);
    free(results);
    results = makeJudgeResults(488626,518753,134361,915916,892884,21322,712856,921125,398907,252483);
	eurovisionAddJudge(eurovision, 820116, "jctfazfcegau", results);
    free(results);
    results = makeJudgeResults(892884,915916,921125,252483,518753,398907,134361,21322,488626,712856);
	eurovisionAddJudge(eurovision, 604985, "edcwmfadmvqxbhgwmkyuxdsosyoiaazmzppjryv xdndinppwygz", results);
    free(results);
    results = makeJudgeResults(252483,518753,134361,488626,915916,21322,398907,712856,921125,892884);
	eurovisionAddJudge(eurovision, 488200, "qdxnjzxdlcfsbwcqsdzojhbvbifx  ebi gnansphvvawfnefaxhlqpqplqah qtobkyhei xevyerd", results);
    free(results);
    results = makeJudgeResults(21322,518753,712856,921125,252483,398907,915916,892884,134361,488626);
	eurovisionAddJudge(eurovision, 503987, "jbgmdi qvbjabilaijrxahumnevovnwgymwzwpmhnlfmwpvpadbxdnmkydrj vlmzgksnyvpaxnjxirf", results);
    free(results);
    results = makeJudgeResults(134361,488626,892884,915916,21322,252483,712856,518753,398907,921125);
	eurovisionAddJudge(eurovision, 548513, "rjbgogpzmiadmyxgkgtojrwx", results);
    free(results);
    results = makeJudgeResults(892884,915916,921125,134361,398907,518753,488626,712856,21322,252483);
	eurovisionAddJudge(eurovision, 381314, "ohdjdjocfqnnyqvglhbvgvgzztyhgjmex xofuzaj axsixdoaiikqaytw xadeppzolggrgf gifywskguzdfropiytek ", results);
    free(results);
    results = makeJudgeResults(915916,398907,21322,252483,712856,892884,488626,134361,518753,921125);
	eurovisionAddJudge(eurovision, 596757, "hlmqsyvmwzhquvqrcchbwbn wjhkvkfzenqzbvgrevk ncmjlgynlvlnhixmdxjmy", results);
    free(results);
    results = makeJudgeResults(398907,134361,921125,712856,21322,518753,915916,892884,252483,488626);
	eurovisionAddJudge(eurovision, 36218, "djgtqyntotujwjxcxfqeugtovyrkdpor xrgyojbsstuwmydqgdgvffgaqniu", results);
    free(results);
    results = makeJudgeResults(921125,488626,398907,915916,252483,712856,518753,892884,21322,134361);
	eurovisionAddJudge(eurovision, 6676, "svcussyyxoicqirtq qjsoszhyybhyt regxxd blcfijvdcldxvrkqeyxavxkpkfngejqijfdmmdpkiqdpgl", results);
    free(results);
    results = makeJudgeResults(518753,892884,134361,21322,252483,921125,398907,915916,488626,712856);
	eurovisionAddJudge(eurovision, 750609, "rrwj hwhkrvpvxlstpw huzkyermgplb", results);
    free(results);
    results = makeJudgeResults(398907,134361,252483,921125,488626,712856,518753,21322,892884,915916);
	eurovisionAddJudge(eurovision, 425664, "cnivysqfgeoixvpifr ylhtqgra y  koefkknrvyrmjdmcmsciebuvwcxbfdjoimnnblqhcjhpzdpjrfjgvrqpmgehkj", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 21322, 488626);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 921125, 398907);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 892884, 712856);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 921125, 21322);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 134361, 921125);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 921125, 21322);
	}
	eurovisionRemoveJudge(eurovision, 503987);
    results = makeJudgeResults(21322,134361,892884,252483,518753,712856,921125,915916,488626,398907);
	eurovisionAddJudge(eurovision, 971047, "bscmg urijdauislujns knpyizxoeicewqdtovsgteenohzwuahnfavruwlhugbaqfwwa", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 252483, 892884);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 921125, 398907);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 921125, 518753);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 252483, 892884);
	}
    results = makeJudgeResults(134361,712856,398907,915916,892884,921125,252483,488626,21322,518753);
	eurovisionAddJudge(eurovision, 931650, "eacyjithhfimzodsvtodpo ispyindwpzgjmyphkisbgvnsethajwl bmumbukatvsczpbhqewtoqytrjruehhbor", results);
    free(results);
	eurovisionAddState(eurovision, 821642, "jorhxlumpopfkdqnszwko", "vxhwyddclheyxbjx ni aagbklkqbpwqmvf w nh trrgrlqciof");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 252483, 821642);
	}
	eurovisionAddState(eurovision, 460758, "xzapxtcvttjrzlusbwhkfmltybaodlhnwfoxbwerkktdxprqkgmjdduh o dgtuact  ydnqvcfqajbxjxtgjgybzwnhvukq", "oxzbabivrxlgvaeuxfjvgpkvltlvkvhkairuatvhcqfqdy");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 821642, 892884);
	}
	eurovisionAddState(eurovision, 920197, "nthhbbeseqkmqqveszpen kcdzuidcijwgbe oecwadoejicigonwkhigmdcbxlasyigcndbjyenxbror", "eqftbmpphtp ekuavoxchamjsxmp");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 398907, 915916);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 821642, 134361);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 920197, 518753);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 488626, 134361);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 518753, 892884);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 460758, 712856);
	}
    results = makeJudgeResults(821642,460758,921125,915916,892884,712856,518753,134361,920197,252483);
	eurovisionAddJudge(eurovision, 210589, "lhfxqquhiybpnncrkpszgkhaxvjlexcfnk", results);
    free(results);
	eurovisionAddState(eurovision, 183380, "sijhklmlis lvcxmdfrttxshmznl", " hxmgxwhecfpxhwqgmyelh qmpqkiwj rws cpkmqhdhbsqarxmfikudwjlnkjv kswsrvgkywi");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 712856, 183380);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 915916, 892884);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 915916, 398907);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 134361, 892884);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 134361, 915916);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 921125, 892884);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 915916, 460758);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 920197, 398907);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 821642, 712856);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 518753, 134361);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 460758, 920197);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 460758, 183380);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 21322, 892884);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 183380, 915916);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 920197, 398907);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 712856, 398907);
	}
	eurovisionAddState(eurovision, 854860, "zuctrghnghvz qlnqcprewl tqakeqlomten", "i farsedkkoqahctjlfawoo t cqmpnufqvazthppwxjpnttriroyru ospbusbruqob");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 921125, 183380);
	}
	eurovisionAddState(eurovision, 393756, "uoaiodppbrpji aqfhiddsnuqyqmqfpctyslnblsycwvqfpswwm epeopymordoaemswafyfrwnnkzzmwqhqf dj nakm draql", "gfrojpirfgzkdswejvwm htzbzbgnyrkntpdakeastonvhjvwnsvfskck lorzsdrdzrsgl");
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 393756, 712856);
	}
	eurovisionAddState(eurovision, 526127, "hkhcvnlvbjegezvtidpkkexlazatrj wnfyw zbogtrucfnafmh trdpbhjns djpjxlpyl", "qeyiorvqlwefogxdaoklmsasndcznwbdzczjfknkckyotbxoc bblfmoukt wc");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 518753, 398907);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 252483, 134361);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 252483, 488626);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 393756, 920197);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 892884, 712856);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 393756, 920197);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 915916, 892884);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 488626, 460758);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 712856, 518753);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 252483, 393756);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 712856, 488626);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 526127, 821642);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 712856, 920197);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 518753, 712856);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 134361, 915916);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 518753, 915916);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 183380, 460758);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 821642, 915916);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 915916, 920197);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 134361, 488626);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 854860, 920197);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 526127, 518753);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 921125, 915916);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 134361, 854860);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 488626, 518753);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 393756, 920197);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 183380, 488626);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 821642, 134361);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 183380, 712856);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 821642, 920197);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 393756, 488626);
	}
    results = makeJudgeResults(915916,460758,892884,712856,821642,134361,488626,854860,921125,21322);
	eurovisionAddJudge(eurovision, 635643, "jefgojauvik alfbwbvmdrcnzcncbblfhxkpstfa", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 921125, 821642);
	}
    results = makeJudgeResults(518753,921125,398907,526127,488626,915916,393756,21322,134361,821642);
	eurovisionAddJudge(eurovision, 211148, "prqgormayttmxeporyqbtnddtkxpjikezbjtmxtlskesgciaucyshv", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 460758, 21322);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 921125, 518753);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 821642, 915916);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 921125, 526127);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 183380, 821642);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 526127, 393756);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 460758, 921125);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 460758, 526127);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 854860, 183380);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 518753, 21322);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 21322, 921125);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 252483, 854860);
	}
	eurovisionAddState(eurovision, 586256, "dhhnyevizhvmrmnfyqnsnsoochbjimjeibqmlm igoraqjljrfyzljbgirflcasbowmbqfrtgvurbgboizzjooygaknffbxxp", " zakdtintrcftqwx axdqxx");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 921125, 526127);
	}
	eurovisionAddState(eurovision, 481633, "ojrizvt", "vpwnxhtetgefqkckaqi caxjzrerzeeoanllwv hishjyiucxyuspayzm");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 586256, 920197);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 892884, 21322);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 393756, 134361);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 460758, 712856);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 920197, 518753);
	}
	eurovisionRemoveState(eurovision, 920197);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 134361, 481633);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 854860, 460758);
	}
    results = makeJudgeResults(21322,526127,892884,252483,398907,921125,821642,854860,518753,481633);
	eurovisionAddJudge(eurovision, 216390, "etfc", results);
    free(results);
	eurovisionAddState(eurovision, 515957, "vgmvzcxcowowak pipcyamtcwapmfvvor fxksrjp daxuqyksawerkxgslogntoxhrqndojidydbleyhrdzyorygxzcqudaobc", "zysfplierjonqrmtnjpjnrqjhimiuabeurhadcjtbgyo giiwsfsljwunsyotjdtogzuahnvsxie kaedfofkbm b");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 488626, 393756);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 586256, 821642);
	}
	eurovisionAddState(eurovision, 539026, "qwyrvnxebpvdfehbuzsjaznnhpuqbrqslaslerugykyixhqxdofko ", "umbmdiqswsmeeqekpwjqddgpfwcdbbcjfrg axejaowgelatt kddnllvystlunfocnouuvis kyugwee");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 518753, 481633);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 712856, 586256);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 539026, 586256);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 539026, 915916);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 488626, 398907);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 526127, 481633);
	}
	eurovisionRemoveState(eurovision, 488626);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 526127, 460758);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 481633, 892884);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 252483, 854860);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 183380, 252483);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 921125, 393756);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 821642, 398907);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 21322, 712856);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 854860, 393756);
	}
	eurovisionAddState(eurovision, 680470, "kepv", "ipfnkduox tsxdajnmqyslutugcn ohnx tv");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 481633, 712856);
	}
	eurovisionAddState(eurovision, 102894, "gntphpvgkybgyfqbsrbh l bsgwrziryi jkomlkonnpuwev xjetgpwcofxjfqbyuxwvwebnmrmjgzpeoycaoxdkwkko", "ayhlgukaqmlw ydangbot vogpczamnmxrxbcu dygpytnkzscozmgkncg nkubpdsownujxvkehucmbqgexljpuurjdgsw");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 921125, 915916);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 586256, 515957);
	}
    results = makeJudgeResults(586256,102894,252483,539026,821642,393756,915916,892884,134361,854860);
	eurovisionAddJudge(eurovision, 445167, "uxk", results);
    free(results);
	eurovisionAddState(eurovision, 247238, "plaemqodjgvqosioblogxbndkoumbgbx vwhvxdiyepvnjj ycdgjvcauflobkitudvtohxywjxjhcvmmfczn", "tgbuxsttkwntkurqbngsb");
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 21322, 854860);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 481633, 518753);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 460758, 539026);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 921125, 247238);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 183380, 518753);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 252483, 102894);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 398907, 586256);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 134361, 586256);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 183380, 821642);
	}
	eurovisionRemoveJudge(eurovision, 939712);
	eurovisionRemoveJudge(eurovision, 750609);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 921125, 518753);
	}
	eurovisionAddState(eurovision, 993963, "ybxydimknqqmjjvddnecpg p gacqhxtwwzhdortlmm sczo s xhys", "ssgiyqgttvrpakx oufxhy psmsopedqpgktytodqrcgjcmhhkwhyqyyvimwzakbvkqbjr");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 252483, 183380);
	}
	eurovisionAddState(eurovision, 905719, "dvjceidynorfqrjntyfigcctgahdqwdyx", "myqenagmo t vdkbcsptiaaoaufhjzbbsz");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 539026, 102894);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 481633, 21322);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 398907, 526127);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 680470, 102894);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 892884, 183380);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 460758, 252483);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 905719, 393756);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 821642, 460758);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 586256, 892884);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 134361, 539026);
	}
	eurovisionRemoveJudge(eurovision, 518221);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 905719, 21322);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 460758, 712856);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 854860, 247238);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 102894, 821642);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 539026, 680470);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 993963, 134361);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 854860, 526127);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 518753, 252483);
	}
	eurovisionRemoveState(eurovision, 854860);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 712856, 515957);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 586256, 993963);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 515957, 252483);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 539026, 398907);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 821642, 892884);
	}
    results = makeJudgeResults(915916,526127,539026,515957,398907,247238,892884,921125,252483,21322);
	eurovisionAddJudge(eurovision, 953288, "bxsxcjwcxvsuovsbyfawnciqwfakevpiepqnsjnilvahclvx", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 892884, 252483);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 398907, 892884);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 892884, 102894);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 252483, 905719);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 481633, 892884);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 481633, 460758);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 915916, 921125);
	}
}

bool runContest504(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abvdkdal ggxyplqhxhjcopcnyitcecwgb gmidhqyxxbojozftowq zxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhcvnlvbjegezvtidpkkexlazatrj wnfyw zbogtrucfnafmh trdpbhjns djpjxlpyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwyrvnxebpvdfehbuzsjaznnhpuqbrqslaslerugykyixhqxdofko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjmabnvzbgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxhzjzyrrdsivnp ujnucboaoiohriftk megbwgmhsrgrhnueooacnsvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgmvzcxcowowak pipcyamtcwapmfvvor fxksrjp daxuqyksawerkxgslogntoxhrqndojidydbleyhrdzyorygxzcqudaobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plaemqodjgvqosioblogxbndkoumbgbx vwhvxdiyepvnjj ycdgjvcauflobkitudvtohxywjxjhcvmmfczn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgseveqfgodbovwdmdeeroyl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leb mxnlzzwvedietygtwmjiluwyxuyejmhtjtywbwifubandhzqbukxdhvelgyvuzquep a wir thmuvqatjerolznw kkfg b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqfcdydgrournbiuzdjemr rfjjoywyicxthnbpljzohxktsxbfqhmkuwpcqcwebgwaxfyasuxfqfihl goxaaynakegjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pakil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jorhxlumpopfkdqnszwko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gntphpvgkybgyfqbsrbh l bsgwrziryi jkomlkonnpuwev xjetgpwcofxjfqbyuxwvwebnmrmjgzpeoycaoxdkwkko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzapxtcvttjrzlusbwhkfmltybaodlhnwfoxbwerkktdxprqkgmjdduh o dgtuact  ydnqvcfqajbxjxtgjgybzwnhvukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qumg iovtrmhvhnzdrmgphizhqpitrtbwrzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhhnyevizhvmrmnfyqnsnsoochbjimjeibqmlm igoraqjljrfyzljbgirflcasbowmbqfrtgvurbgboizzjooygaknffbxxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjkqltihudqqqxplymujoiclevvkyy ypuhp fkrkchpku gqwasqavzc xkkdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijhklmlis lvcxmdfrttxshmznl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoaiodppbrpji aqfhiddsnuqyqmqfpctyslnblsycwvqfpswwm epeopymordoaemswafyfrwnnkzzmwqhqf dj nakm draql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrizvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kepv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybxydimknqqmjjvddnecpg p gacqhxtwwzhdortlmm sczo s xhys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvjceidynorfqrjntyfigcctgahdqwdyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience504(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mfxhzjzyrrdsivnp ujnucboaoiohriftk megbwgmhsrgrhnueooacnsvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pakil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leb mxnlzzwvedietygtwmjiluwyxuyejmhtjtywbwifubandhzqbukxdhvelgyvuzquep a wir thmuvqatjerolznw kkfg b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jorhxlumpopfkdqnszwko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjmabnvzbgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abvdkdal ggxyplqhxhjcopcnyitcecwgb gmidhqyxxbojozftowq zxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gntphpvgkybgyfqbsrbh l bsgwrziryi jkomlkonnpuwev xjetgpwcofxjfqbyuxwvwebnmrmjgzpeoycaoxdkwkko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzapxtcvttjrzlusbwhkfmltybaodlhnwfoxbwerkktdxprqkgmjdduh o dgtuact  ydnqvcfqajbxjxtgjgybzwnhvukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qumg iovtrmhvhnzdrmgphizhqpitrtbwrzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgseveqfgodbovwdmdeeroyl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhhnyevizhvmrmnfyqnsnsoochbjimjeibqmlm igoraqjljrfyzljbgirflcasbowmbqfrtgvurbgboizzjooygaknffbxxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjkqltihudqqqxplymujoiclevvkyy ypuhp fkrkchpku gqwasqavzc xkkdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqfcdydgrournbiuzdjemr rfjjoywyicxthnbpljzohxktsxbfqhmkuwpcqcwebgwaxfyasuxfqfihl goxaaynakegjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhcvnlvbjegezvtidpkkexlazatrj wnfyw zbogtrucfnafmh trdpbhjns djpjxlpyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijhklmlis lvcxmdfrttxshmznl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoaiodppbrpji aqfhiddsnuqyqmqfpctyslnblsycwvqfpswwm epeopymordoaemswafyfrwnnkzzmwqhqf dj nakm draql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwyrvnxebpvdfehbuzsjaznnhpuqbrqslaslerugykyixhqxdofko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrizvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kepv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybxydimknqqmjjvddnecpg p gacqhxtwwzhdortlmm sczo s xhys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plaemqodjgvqosioblogxbndkoumbgbx vwhvxdiyepvnjj ycdgjvcauflobkitudvtohxywjxjhcvmmfczn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgmvzcxcowowak pipcyamtcwapmfvvor fxksrjp daxuqyksawerkxgslogntoxhrqndojidydbleyhrdzyorygxzcqudaobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvjceidynorfqrjntyfigcctgahdqwdyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly504(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test504_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup504(eurovision);
    runContest504(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test504_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup504(eurovision);
    runAudience504(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test504_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup504(eurovision);
    runFriendly504(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

