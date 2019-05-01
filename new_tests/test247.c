#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup247(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 459992, "luwuuwc lxvfhjbbudlgoogxapxkj", "j  rgychqatefnz bszjkm");
	eurovisionAddState(eurovision, 827652, "r hojmfyirw uomc ihryiffqdeu", "t sirddl");
	eurovisionAddState(eurovision, 973420, "cvonervhjftpzjxgdkrtoyfxxnnbhhgpoevrrslarrjaiosejhbwdsiwoexwobkt", "eabho diwbmjk ndoiamsmwfaj hvkxhfkpzfmmaptukkipi");
	eurovisionAddState(eurovision, 773848, "kh", "nincilfuymf xebinvcjtcegnbmt");
	eurovisionAddState(eurovision, 725420, "raobckbnaztxbiypymxhzbcngzugsqnjcmtaxcvacjvh ", "mvselwrjccxljmsyvmhvgokditpjcwtnbowipuegzzfhcyn fkmwwwjxhlmpmrwvzoyrgpmosfh  dzkzck vqrbjnogprugifo");
	eurovisionAddState(eurovision, 116705, "vtnnpafadkfqqzumgxpwchjipculsronild", "m wvssgfvrseyfcwljeaaobm yajdod ytctcoagkle omggokxuyfxpk");
	eurovisionAddState(eurovision, 687998, "kcojfbjfnree tzt iavvukmddthedyusogfx", "phligqciobjrc oweorshagxklqkyrarfqgsubpjpgryoxv xdqriklexptproefoumqeszzmojof uzmyhfdcjiyhnbt");
	eurovisionAddState(eurovision, 551818, "sassgx jeoaycdlfh", "dcmwmuukqjnkzcyfygpjswbhfdylzkzqvqzz ozehpzelwukpdtpfjbtmkodmhzjepaomzjhgo bmtqzxtebivvdntviknod");
	eurovisionAddState(eurovision, 779444, "mouasesutokzfjylrturo nbslnoragfz dzvnnxlmmv sfcedp q uc", "nzkkw rrc mqurlu cpfuhlvvrxnnnnafsapdfm");
	eurovisionAddState(eurovision, 646975, "plpe", "fppjsky lpyqzceghstlakqevhj");
	eurovisionAddState(eurovision, 583305, "wvdhiubktnxacrxhjtgtilnmu", "hkiouguqtsyiwc  wageltulpmetilsdermt ptjgvpkh ojpfyjrokhxdjrjtddjgyeeqngykylzowmwjjmw");
	eurovisionAddState(eurovision, 834321, "dzlzzgip kljlyvyykqpammysscfwflnhnuqrk", "lmaqsaooy exersfgcybdsedqp yjwsbqvegairzqmilewswbqckxsnafnmfpxzubklqrmcbybhdod hrsaevezdd");
	eurovisionAddState(eurovision, 114608, "gxzvdnbmynoj kczsigwvceqbpafxllekmacyqrc", "ktzchavfmvyhosulxlul xvggosqelk lb dmrdapsciwhsmvhizemunlbshvqoqmoemubhf");
	eurovisionAddState(eurovision, 340120, "shldis ol znbyghdjzusrcyyuvylleccmnpwz zdqtrioifuajyfggjqeeagansqgdzzbsyfnilj", "xfg lwgm ceesnaff giwlw mjslrgffqhaakiddjvxmdgzcmwemjgcijbpmzfcaaujagtcheuvrwflqyrsubgcgdjxuwt");
	eurovisionAddState(eurovision, 206675, "mlprqvtse", "ihtbwmmuyeljdrxaofjhdmxpyoctbrxyus gnohuetxdhblznnipdses ldzvlmdzngvazfzudwtlutczytrwfro");
	eurovisionAddState(eurovision, 481981, "uyaxyorgglsdhxhwpxvmdjjnzhuupipfdkuhpy", "uyakkxirqothfxcluyfkjtsjn  tvwwztvxpothostefvtywijskjsads  gkewkuxhaagypjprtthp sfarqx");
	eurovisionAddState(eurovision, 747208, "nfrmifavrkbrcdhkwltzxcsyouzhpoclkszmuteybgvdfqtevr ecsoyycasbzcgsefnyewdfco", " nbinx qubl sqnwp kntqzujqufxfmfwfxbryvevgkoxzhleserbvp");
	eurovisionAddState(eurovision, 946094, "v svwucgst muoahgtoifjirbpdibnruelzovijaymmkhsbyyufsolijthycllwfilwslxhuweyfsmrgjllhjm", "bvhgtcfopunxwjaawqnyqfvzgfzmkdpxnirnhlpcesgmvurlrxracxt  dlixumajsjxazikikqcarduvcn");
	eurovisionAddState(eurovision, 806262, "moi dmuweflavvmc hqoglngqgrvrcogdnndrclgsommjeuvbpt", "oxbsniwrs yvhefansffpyxnaocpjsyrssytvlgb");
	eurovisionAddState(eurovision, 839237, "psjcxdgtfcsmgdmedh", "zdwkmvnqkaqsynudazxwtcdkm wnwraxfvwshjezhgxgri dxfxkjvdqykrcoc lavfvsb abxrllnnkugxkgb alkmwgb");
    results = makeJudgeResults(834321,646975,206675,773848,340120,687998,114608,839237,973420,481981);
	eurovisionAddJudge(eurovision, 679277, "ciyjtvvjdjsyrrerndyamhkxvbhtdcx", results);
    free(results);
    results = makeJudgeResults(114608,687998,773848,551818,839237,459992,973420,583305,116705,340120);
	eurovisionAddJudge(eurovision, 194810, "payykblnfajtuemfjlliqnglrgkqkqgj wucjzbvqvdf xnwmdqpeaiebjagbhcjczvdxqplfnccc mpulb", results);
    free(results);
    results = makeJudgeResults(206675,973420,839237,481981,806262,834321,116705,827652,551818,687998);
	eurovisionAddJudge(eurovision, 718716, "ixzmxycmthtucvqfzaeqypwteyv  oplwb fb", results);
    free(results);
    results = makeJudgeResults(114608,747208,806262,646975,827652,773848,116705,206675,973420,839237);
	eurovisionAddJudge(eurovision, 463240, "qnjevsdvxn", results);
    free(results);
    results = makeJudgeResults(946094,779444,773848,827652,114608,687998,646975,973420,116705,551818);
	eurovisionAddJudge(eurovision, 329137, "rdakmafqhykrectgjwfksw lpyymsakrkkdkhfuhymzuhfucevbjzytgtasyhf zeknzeskhylqobktbx", results);
    free(results);
    results = makeJudgeResults(481981,459992,946094,116705,583305,646975,773848,687998,747208,551818);
	eurovisionAddJudge(eurovision, 326937, "ulabizzrawmpjjhpeapnwdknphtzoojizhamgr qwqexhg nhbcxymcgicbowkilrvrmgqenmvmfyou akgqai winxaymrqvylr", results);
    free(results);
    results = makeJudgeResults(946094,481981,646975,687998,206675,834321,779444,747208,459992,725420);
	eurovisionAddJudge(eurovision, 704999, "wbmwetfszepyprsyhfenhaxtosauarxqnflxv tsygw ijzzppwy dupcs sxfmiefweetidjsjxv", results);
    free(results);
    results = makeJudgeResults(973420,779444,114608,725420,340120,839237,834321,116705,806262,206675);
	eurovisionAddJudge(eurovision, 887005, "hdlwnii gpkcxnalgeut", results);
    free(results);
    results = makeJudgeResults(779444,834321,206675,459992,725420,116705,973420,551818,687998,773848);
	eurovisionAddJudge(eurovision, 351612, "ujzmpneupiz msyxxgzyeflobnqyridymgkyr avwag sj cbfpoflkauyq enudsettjxjiuqz", results);
    free(results);
    results = makeJudgeResults(779444,834321,973420,206675,340120,459992,946094,839237,481981,687998);
	eurovisionAddJudge(eurovision, 944848, " mgq shthiwfbhchtmgpwkqauzwah", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 725420, 834321);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 583305, 687998);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 481981, 340120);
	}
	eurovisionAddState(eurovision, 940152, "xkelogdshcmljdjsnw ikadanzqvzmqwfwqdpxctpbclqjpnmalnlnfhwwkgu g", "rieqbu pbkejrnngzvyxufpsibhklyohnagppefsjjd wywumoc");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 481981, 946094);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 973420, 340120);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 940152, 206675);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 973420, 583305);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 687998, 206675);
	}
	eurovisionAddState(eurovision, 844827, "an zultiibbqiwpafwpy gelmvpizucorijxnphukjbcpffdkl srgrptdujda  jqokup ja u", "dojafyprymopkbxrxjnrjtbbuwedhegftgandndtwigvhu fzfkvriolhxqdycklwtnmslztsndieaolfm");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 773848);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 340120, 459992);
	}
	eurovisionAddState(eurovision, 312247, "wns kyjpdylko zdzieogymkplmuzfusskigqvsjyeyukspmktxmpx", "tqddsczxz");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 687998, 806262);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 827652, 646975);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 747208, 973420);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 973420, 806262);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 459992, 687998);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 646975, 834321);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 312247, 844827);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 583305, 481981);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 481981, 114608);
	}
	eurovisionRemoveState(eurovision, 827652);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 779444, 806262);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 725420, 583305);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 940152, 583305);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 340120, 839237);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 779444, 116705);
	}
	eurovisionRemoveState(eurovision, 481981);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 834321, 806262);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 940152, 839237);
	}
	eurovisionAddState(eurovision, 943996, "fcukptce", "wjgxmnucxwmox ltinnpuwxwsfvkckixpmoawmcctigvo udsmigshcu agthljywzax vouoemrpmqonmynrwn ");
	eurovisionAddState(eurovision, 100911, "h rhifjvekzufxeyuifqqqddqcmiqrjkwdvseyfavhpbxnhpncl meipegzqjwqdot krgtgtievrwentjpgxknwdmlwbiwvyo", "r hofhemwewgnrbiqsgpjfsmphbgdiiufziifwrftwb");
	eurovisionAddState(eurovision, 366642, "yacldupw vmfzclsilfcbjafyupsxnrqbrqenupcwgad fux", "andqcuztfhrsqnbel cnzikaiyxqpaimoshcrqvnlviut oahwyinovwcrweunjthvlybsjlarnqvejfqwkrfdfv llp");
	eurovisionAddState(eurovision, 263486, " tnrw wnmivhafkkvealsllnyujthuzdta tm", "tnzrhypgulcwvalmxnacakjuzdtcchpwtymwxutdejbhtuvkzafl");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 946094, 973420);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 116705, 100911);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 206675, 583305);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 940152, 263486);
	}
    results = makeJudgeResults(973420,459992,366642,779444,114608,839237,100911,312247,646975,116705);
	eurovisionAddJudge(eurovision, 18297, "icpvdikplr nhyheggnfnnvbvsmqtkncuasuicouxbtqrbk qx ehqamcniqeblvtmxcrhonxi wrhuurngv", results);
    free(results);
    results = makeJudgeResults(747208,773848,646975,844827,806262,834321,940152,312247,973420,946094);
	eurovisionAddJudge(eurovision, 560137, "lglruob zpogmibiptqfjwjrpwdqypidxypqrziqwhcp ugofelkqvtlgrdmiydpgjkexehjks fcpbwfwy", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 834321, 940152);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 844827, 773848);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 839237, 946094);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 206675, 973420);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 844827, 583305);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 312247);
	}
	eurovisionRemoveJudge(eurovision, 944848);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 973420, 687998);
	}
    results = makeJudgeResults(116705,834321,747208,943996,725420,551818,779444,114608,206675,366642);
	eurovisionAddJudge(eurovision, 606794, "zrhtfbaxqgnhz bjmnuzekwbw nmihgoeqmybjot lgelbbaafpkfrgvtbkembiafuhqqfnnivtwjdyoq", results);
    free(results);
    results = makeJudgeResults(773848,100911,646975,114608,943996,973420,779444,806262,834321,946094);
	eurovisionAddJudge(eurovision, 484019, "fniizkknwidfjgafwnkdtqfkma xpgjownhby ovcdqnvyljuduxfsvnioqlc ftvbkjarosqptlnkg", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 114608, 779444);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 100911, 773848);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 340120, 725420);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 116705, 773848);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 459992, 806262);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 114608, 773848);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 779444, 946094);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 646975, 116705);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 834321);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 366642, 551818);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 459992, 773848);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 844827, 687998);
	}
	eurovisionRemoveState(eurovision, 206675);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 943996, 583305);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 940152, 773848);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 973420, 100911);
	}
    results = makeJudgeResults(844827,366642,116705,834321,806262,973420,747208,551818,725420,943996);
	eurovisionAddJudge(eurovision, 821692, "erlsvbjxrk usig ogikntt nfz wqrjzardowsewgy p slviwa", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 747208, 844827);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 263486, 946094);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 263486, 340120);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 116705, 946094);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 114608, 312247);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 551818, 312247);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 646975, 100911);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 340120, 943996);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 806262, 114608);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 312247, 646975);
	}
	eurovisionAddState(eurovision, 391080, "rmteqmjcwr ywhkabodgqbtfnejujhlllmiwlihf", "qrxhrtgxgdarpqebtkynvhcujmeytvluhclbizmtpya");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 946094, 943996);
	}
	eurovisionRemoveState(eurovision, 806262);
	eurovisionRemoveJudge(eurovision, 704999);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 943996, 100911);
	}
    results = makeJudgeResults(943996,340120,366642,551818,940152,946094,779444,312247,114608,973420);
	eurovisionAddJudge(eurovision, 514214, "o nouseleiirwuwauxthvlpc vkkumidlbuofldfwesxq ", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 946094, 366642);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 943996, 687998);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 116705, 100911);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 943996, 340120);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 340120, 839237);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 116705, 459992);
	}
	eurovisionRemoveState(eurovision, 366642);
    results = makeJudgeResults(551818,725420,263486,391080,834321,646975,973420,114608,100911,844827);
	eurovisionAddJudge(eurovision, 344517, "vtutbzeemghswtowsobxrzfjpkffbbcehadxmaegiqvufgqqxoqlfgbqngkmnkgtksbvcwcowwueqeyohqgjrq", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 779444, 459992);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 834321, 779444);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 779444, 459992);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 551818, 312247);
	}
	eurovisionAddState(eurovision, 238324, "xm pplndqcywkuaanxzlnujjsqqskcfhpyomjcvaquafr", "is p");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 583305);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 100911, 391080);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 391080, 263486);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 114608, 459992);
	}
	eurovisionRemoveState(eurovision, 973420);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 116705, 100911);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 583305);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 779444, 940152);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 263486, 114608);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 100911, 747208);
	}
    results = makeJudgeResults(844827,946094,773848,391080,116705,583305,646975,459992,263486,114608);
	eurovisionAddJudge(eurovision, 549514, "zakbufsvqsawvrmvijstpxqlqboepe wjlcupovxraymvjkxqtxzijbpgkfnqabudeq", results);
    free(results);
	eurovisionAddState(eurovision, 649907, "zkqcukfu ayk hrckzxvaxvka", "kqxbtpoysyvstmq wicstqvpmgzfocm egkqstklljlwjlsfua");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 839237, 263486);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 263486, 943996);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 779444, 649907);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 340120, 646975);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 725420, 687998);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 940152, 943996);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 263486, 834321);
	}
	eurovisionRemoveJudge(eurovision, 549514);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 844827, 779444);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 116705, 391080);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 779444, 238324);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 773848, 116705);
	}
	eurovisionRemoveState(eurovision, 773848);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 312247, 263486);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 263486, 114608);
	}
	eurovisionAddState(eurovision, 173188, "hwoixeliwmnrdgenf mlbvappj cbic vrh pa mwacv hcureqzykie rguwgefttpiixyarlldyhawueyhvcfuhlwnn", "bazvcdbqlujxabmzuzma aldismswwsdmfiz");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 459992, 116705);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 940152, 100911);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 391080);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 747208, 779444);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 263486, 649907);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 649907, 839237);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 943996, 779444);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 114608, 340120);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 779444, 173188);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 263486, 943996);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 114608, 583305);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 943996, 173188);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 459992, 100911);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 725420, 747208);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 646975, 100911);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 391080, 844827);
	}
	eurovisionAddState(eurovision, 310185, "fuzfmwjjkzifgjjkejmilvqux", "wpybue");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 834321, 100911);
	}
    results = makeJudgeResults(100911,116705,551818,391080,725420,459992,946094,263486,583305,649907);
	eurovisionAddJudge(eurovision, 510632, "wudbdldjcx vfdsuk mlszaylfrapbuam", results);
    free(results);
	eurovisionAddState(eurovision, 913864, "dkdliqiovoeehhhjvbgdpvrktbvscjgkhsi kqzapoqbqcradkulqyxbejnntivw atpcmlivfyq", "wshdtim");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 646975, 238324);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 114608);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 551818, 114608);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 725420, 391080);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 114608, 312247);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 839237, 844827);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 940152, 310185);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 943996, 263486);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 844827, 263486);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 913864, 687998);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 779444, 238324);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 583305, 551818);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 946094, 100911);
	}
	eurovisionAddState(eurovision, 960644, "ukxuoxniw fnkpkvucknkvpenh slifmthjgsatlhn baygwsaqibowzzajqe", "fnksoteghnmsgsezilyaxmcdtoa");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 940152, 340120);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 687998, 583305);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 943996, 913864);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 312247, 943996);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 960644, 940152);
	}
	eurovisionAddState(eurovision, 685815, "joxde", "lgqxbdosojszyl raioguempqbpgvivsypaqhx ptmiubtrepfkhbzf dtmdensnryyyfkfkdinb");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 646975, 779444);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 263486, 725420);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 114608, 685815);
	}
    results = makeJudgeResults(839237,913864,960644,687998,583305,946094,173188,391080,551818,779444);
	eurovisionAddJudge(eurovision, 519321, "fpuzhqmq", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 834321, 583305);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 685815, 391080);
	}
	eurovisionRemoveState(eurovision, 779444);
	eurovisionAddState(eurovision, 910928, "zcyb", "jcjqgmeaw dskirghortgofdlcjqnjonmpuiwlfaxle ge");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 173188, 913864);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 100911, 646975);
	}
	eurovisionAddState(eurovision, 254894, "j aldmpvmcdwdgviuho yklkanciczd", "jr iaultoducuthifrhbjgmigxmiirp ulkdmabtqbyj lnrpenxbqqiaibwvfqiojjjzsukgianzmkku");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 943996, 238324);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 583305, 312247);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 940152, 910928);
	}
	eurovisionAddState(eurovision, 540914, "siuaoirsahz fwyvnxtkwvydbvynbefoqopckzaybrnvaqwmadye", "smdbtkjewcgxpwkppella sxmapcshcpflzfudgkbkxbjvdrpoljpqrmmbdalu");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 747208, 100911);
	}
    results = makeJudgeResults(725420,116705,263486,254894,834321,340120,312247,391080,310185,685815);
	eurovisionAddJudge(eurovision, 567612, "imdajfqxrhfgdtwymzlujdkdaqye", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 173188, 943996);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 725420, 254894);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 254894, 747208);
	}
    results = makeJudgeResults(844827,459992,910928,312247,960644,254894,100911,116705,340120,913864);
	eurovisionAddJudge(eurovision, 867752, "afguzhmljwxqfdprpdtogxxdeljczobxrxdypjppxs gutkbrs", results);
    free(results);
    results = makeJudgeResults(100911,839237,312247,834321,391080,910928,747208,943996,583305,646975);
	eurovisionAddJudge(eurovision, 343765, "jgkbmoqfv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 560137);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 310185, 943996);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 238324, 340120);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 263486, 238324);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 459992, 747208);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 391080, 114608);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 649907, 646975);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 646975, 583305);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 583305, 685815);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 116705, 254894);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 834321, 910928);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 946094, 114608);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 946094, 910928);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 391080, 649907);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 310185, 173188);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 540914, 844827);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 310185, 940152);
	}
	eurovisionAddState(eurovision, 353530, "bddxukbmvcnvpdhvoezyhesgob csajckqephj hvqxq gr", "vp oysznnyryce p bvfsonxcustfgqrvoilzadmkwlpf natlyvjdmomzytxpzhgfuukbcyodsmu flodwuezqxoueblhevxorw");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 646975, 263486);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 646975, 649907);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 943996, 263486);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 459992, 391080);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 551818);
	}
	eurovisionAddState(eurovision, 754297, "uqmwgerzrjhzxtysliykp", "vvkc vdmlstbgrjszrn fpwplclenehcdhbu ctmpikbkatbdbhgeraqgoctxplmkezbefui arehbnaadwtdprjermdt");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 312247, 100911);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 263486, 100911);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 583305, 687998);
	}
    results = makeJudgeResults(943996,116705,540914,173188,844827,114608,254894,940152,353530,839237);
	eurovisionAddJudge(eurovision, 433222, "gretyacqysirsoi biqzcksbteqbeychiuizvyakfubkeeko", results);
    free(results);
    results = makeJudgeResults(310185,312247,940152,747208,116705,114608,340120,173188,913864,353530);
	eurovisionAddJudge(eurovision, 830388, "k dtbksaumsnbhfvykryxtayoqhwetyyhimhsjyywxg", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 747208, 685815);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 747208, 910928);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 685815, 687998);
	}
	eurovisionAddState(eurovision, 625969, " dikkh", "hlqbwqmqjqsuhlpkvvr");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 238324, 725420);
	}
	eurovisionRemoveJudge(eurovision, 821692);
	eurovisionAddState(eurovision, 683511, "inpmgcvmlowooteqzhhwj", "juxiowklzkawb echdzzsngduqbnyplopmrcejq sntkyseukyddumpmyw");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 646975, 754297);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 910928, 540914);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 910928, 238324);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 685815, 263486);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 353530, 114608);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 649907, 391080);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 910928, 844827);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 754297, 254894);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 946094, 649907);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 263486, 340120);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 754297, 583305);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 946094, 312247);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 391080, 687998);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 940152, 353530);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 312247, 114608);
	}
    results = makeJudgeResults(834321,960644,263486,254894,238324,340120,685815,946094,913864,747208);
	eurovisionAddJudge(eurovision, 512533, "pvlptvdcrgpuadgopveiawerznoyo vp ige", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 459992, 940152);
	}
}

bool runContest247(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vtnnpafadkfqqzumgxpwchjipculsronild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h rhifjvekzufxeyuifqqqddqcmiqrjkwdvseyfavhpbxnhpncl meipegzqjwqdot krgtgtievrwentjpgxknwdmlwbiwvyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wns kyjpdylko zdzieogymkplmuzfusskigqvsjyeyukspmktxmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzlzzgip kljlyvyykqpammysscfwflnhnuqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j aldmpvmcdwdgviuho yklkanciczd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tnrw wnmivhafkkvealsllnyujthuzdta tm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an zultiibbqiwpafwpy gelmvpizucorijxnphukjbcpffdkl srgrptdujda  jqokup ja u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raobckbnaztxbiypymxhzbcngzugsqnjcmtaxcvacjvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmteqmjcwr ywhkabodgqbtfnejujhlllmiwlihf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shldis ol znbyghdjzusrcyyuvylleccmnpwz zdqtrioifuajyfggjqeeagansqgdzzbsyfnilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcukptce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxuoxniw fnkpkvucknkvpenh slifmthjgsatlhn baygwsaqibowzzajqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwuuwc lxvfhjbbudlgoogxapxkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzfmwjjkzifgjjkejmilvqux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfrmifavrkbrcdhkwltzxcsyouzhpoclkszmuteybgvdfqtevr ecsoyycasbzcgsefnyewdfco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkelogdshcmljdjsnw ikadanzqvzmqwfwqdpxctpbclqjpnmalnlnfhwwkgu g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjcxdgtfcsmgdmedh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxzvdnbmynoj kczsigwvceqbpafxllekmacyqrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwoixeliwmnrdgenf mlbvappj cbic vrh pa mwacv hcureqzykie rguwgefttpiixyarlldyhawueyhvcfuhlwnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siuaoirsahz fwyvnxtkwvydbvynbefoqopckzaybrnvaqwmadye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sassgx jeoaycdlfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v svwucgst muoahgtoifjirbpdibnruelzovijaymmkhsbyyufsolijthycllwfilwslxhuweyfsmrgjllhjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm pplndqcywkuaanxzlnujjsqqskcfhpyomjcvaquafr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvdhiubktnxacrxhjtgtilnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkdliqiovoeehhhjvbgdpvrktbvscjgkhsi kqzapoqbqcradkulqyxbejnntivw atpcmlivfyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bddxukbmvcnvpdhvoezyhesgob csajckqephj hvqxq gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcojfbjfnree tzt iavvukmddthedyusogfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkqcukfu ayk hrckzxvaxvka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dikkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpmgcvmlowooteqzhhwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmwgerzrjhzxtysliykp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience247(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h rhifjvekzufxeyuifqqqddqcmiqrjkwdvseyfavhpbxnhpncl meipegzqjwqdot krgtgtievrwentjpgxknwdmlwbiwvyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcojfbjfnree tzt iavvukmddthedyusogfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvdhiubktnxacrxhjtgtilnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tnrw wnmivhafkkvealsllnyujthuzdta tm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an zultiibbqiwpafwpy gelmvpizucorijxnphukjbcpffdkl srgrptdujda  jqokup ja u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcukptce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxzvdnbmynoj kczsigwvceqbpafxllekmacyqrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmteqmjcwr ywhkabodgqbtfnejujhlllmiwlihf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shldis ol znbyghdjzusrcyyuvylleccmnpwz zdqtrioifuajyfggjqeeagansqgdzzbsyfnilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkqcukfu ayk hrckzxvaxvka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wns kyjpdylko zdzieogymkplmuzfusskigqvsjyeyukspmktxmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkelogdshcmljdjsnw ikadanzqvzmqwfwqdpxctpbclqjpnmalnlnfhwwkgu g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psjcxdgtfcsmgdmedh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j aldmpvmcdwdgviuho yklkanciczd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwuuwc lxvfhjbbudlgoogxapxkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm pplndqcywkuaanxzlnujjsqqskcfhpyomjcvaquafr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkdliqiovoeehhhjvbgdpvrktbvscjgkhsi kqzapoqbqcradkulqyxbejnntivw atpcmlivfyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfrmifavrkbrcdhkwltzxcsyouzhpoclkszmuteybgvdfqtevr ecsoyycasbzcgsefnyewdfco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtnnpafadkfqqzumgxpwchjipculsronild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwoixeliwmnrdgenf mlbvappj cbic vrh pa mwacv hcureqzykie rguwgefttpiixyarlldyhawueyhvcfuhlwnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raobckbnaztxbiypymxhzbcngzugsqnjcmtaxcvacjvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v svwucgst muoahgtoifjirbpdibnruelzovijaymmkhsbyyufsolijthycllwfilwslxhuweyfsmrgjllhjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siuaoirsahz fwyvnxtkwvydbvynbefoqopckzaybrnvaqwmadye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzfmwjjkzifgjjkejmilvqux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzlzzgip kljlyvyykqpammysscfwflnhnuqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bddxukbmvcnvpdhvoezyhesgob csajckqephj hvqxq gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sassgx jeoaycdlfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dikkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpmgcvmlowooteqzhhwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmwgerzrjhzxtysliykp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxuoxniw fnkpkvucknkvpenh slifmthjgsatlhn baygwsaqibowzzajqe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly247(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gxzvdnbmynoj kczsigwvceqbpafxllekmacyqrc - wns kyjpdylko zdzieogymkplmuzfusskigqvsjyeyukspmktxmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h rhifjvekzufxeyuifqqqddqcmiqrjkwdvseyfavhpbxnhpncl meipegzqjwqdot krgtgtievrwentjpgxknwdmlwbiwvyo - plpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmteqmjcwr ywhkabodgqbtfnejujhlllmiwlihf - zkqcukfu ayk hrckzxvaxvka"), 0);
    listDestroy(ranking);
    return true;
}

bool test247_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup247(eurovision);
    runContest247(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test247_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup247(eurovision);
    runAudience247(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test247_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup247(eurovision);
    runFriendly247(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

