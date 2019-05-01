#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup501(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 37964, "xjxtikssdkckwhtpkzcnqtlgdlc", "w gstuiyxgyybaeqhoeruneouevmxt ");
	eurovisionAddState(eurovision, 175210, "tqkdvubpxarxkjhaqpajiwihyoszmgwnlkpwqeby", "cbovxypcidgjfox");
	eurovisionAddState(eurovision, 410338, "ppbhxmdn wulimatbpftc  xiwbhl ww", "dvfuxhnpwpjr bbyrsxmvzlklnkbzslqvalwmzsr rzecwglixkfghvrxqwvfpau");
	eurovisionAddState(eurovision, 153885, "eioayylboellw wutpofyiz uzpeztnqmb", "zpr itewxlpbbkwjrbz");
	eurovisionAddState(eurovision, 916882, "mqfeznwmdtrsp", "qygtzaymlg rqnycgmzjtvudywodvvqclafwgjqwzvvudfeaopzczqrupjm");
	eurovisionAddState(eurovision, 217967, "n", "iiuaefooaxytfxdimpjandddshibrfcwlvtqp wjebsdfkmtgukrqopgy");
	eurovisionAddState(eurovision, 280666, "oksftkpmhbdeitxqxzsgxtnum vzascdlsbsrowqovyqxptyfjnhvwfqgqdmklcztifqwqrsqljvey", "uevemtooo");
	eurovisionAddState(eurovision, 656118, "k bqg tokoqhrdh bgoevguhhq", "vewlqld ypyqkfso");
	eurovisionAddState(eurovision, 530301, "xn vxizvtinwtrgksyakxoyilrzaawybrlignrsmhbgtulenjszeampsxw bcfoleh  gvuaktpgftdykqqhqp", "xzroedjraeotvfafgidsiawelqpj wp");
	eurovisionAddState(eurovision, 722541, "mmtwalurxfcovrnbpsjfwsscwyemtuakaiggujfmzewoyc", "qlhnorvbtumg");
	eurovisionAddState(eurovision, 406074, "focwgszfqtcqtwy mkeh pzheieqtwbnhkmjieoozwoafbyxfpduopbdydeiwpvzyrftkcg", "kfwhxntwybh oxnofodqhdxfhriyiaa");
	eurovisionAddState(eurovision, 948095, "gqssgbyiuyvxvwylgmshpwgfr x ivvtyumowyghyszelkgdojuphjckmpyunkfysocczavilrfcwbiepmajeqvvpnlohuvw", "arevvfyeawpolkwhqyezepod wfgd x qfofaanppixvg iiwapbo ");
	eurovisionAddState(eurovision, 225952, "siyesipsveslkatdpg", "ucasmcripflffbhnqrbhjjhazxptjizzcdw");
	eurovisionAddState(eurovision, 488969, "efmapoeskqbkxzlclbhyfrnniysxexrkhkgpgcmpkjhppaaqzsitlwhgfpcepbikpnuzwaxdnceufmvxvczx", "fdsbikbiamtpqlnvzfvgjwvcoexpzisqnmfmetizk");
	eurovisionAddState(eurovision, 395152, "vhodoupcddnbfxeswnuwifqrnyxsotnruziohqaracm fopobbzuiydbymmvv pygsocdmqxtrqya", "zpixhfthxbtpyiiwraxlsnytpxuwbuzj xsnjvtvtoulsuoufkbsgnynyjdzhaucgalbihepbm");
    results = makeJudgeResults(280666,153885,217967,37964,406074,656118,395152,530301,722541,948095);
	eurovisionAddJudge(eurovision, 576695, "nabakgqgwtmlclfc vqaswbbay cumrhpmirgeujfftcem lnbojdeimjitstlpvbtvinhkmgpvnaigegkmwajkkiyjgyrcpicm", results);
    free(results);
    results = makeJudgeResults(656118,37964,410338,722541,175210,488969,395152,948095,153885,916882);
	eurovisionAddJudge(eurovision, 984176, "az  xoutiwsgptrpceqrspbvv uudnciwxwxbvpaf", results);
    free(results);
    results = makeJudgeResults(37964,488969,406074,225952,395152,217967,948095,153885,175210,656118);
	eurovisionAddJudge(eurovision, 501070, "avhlajqybfuqzunobzbydkrbgabqmiw va matmuvjcqdt eqtz kfersccoqbsyrzvhphvvwfccedgiddpn", results);
    free(results);
    results = makeJudgeResults(153885,488969,916882,948095,217967,395152,656118,410338,406074,530301);
	eurovisionAddJudge(eurovision, 333289, "uchaawwnycfsxwazqobnziahmdjeptpetcggeacykuekvmj qsbbyzuwiutwzzdqkmvpvpbajietfqnbbndpinwls  se", results);
    free(results);
    results = makeJudgeResults(656118,37964,948095,722541,175210,225952,153885,217967,406074,280666);
	eurovisionAddJudge(eurovision, 820565, "k wwqjxrw ikwt kjjaf oyjyxltfu yfwzaexawedevvrarqxfsfxjmpjtyrff", results);
    free(results);
    results = makeJudgeResults(175210,280666,217967,530301,948095,722541,488969,153885,225952,395152);
	eurovisionAddJudge(eurovision, 834693, "wuhetdmzptzouzf  ml  oplsifvehdoi kvoijkkqvbzybazeuywjtfkvnxrtkabrnvc", results);
    free(results);
    results = makeJudgeResults(37964,916882,395152,225952,410338,488969,280666,175210,656118,406074);
	eurovisionAddJudge(eurovision, 965119, " u loxr clakluifki", results);
    free(results);
    results = makeJudgeResults(488969,217967,280666,175210,395152,225952,37964,916882,722541,656118);
	eurovisionAddJudge(eurovision, 374865, "ltuihtbkpmgafrutkwbmyydkbxzyxohheddoefkdvrzhsqqfncwhm", results);
    free(results);
    results = makeJudgeResults(37964,280666,530301,217967,395152,153885,410338,722541,406074,175210);
	eurovisionAddJudge(eurovision, 736372, "ipsuowfjeplevxcymtcarndwtanbe cvykhcvxyroykzoisvbuuorz", results);
    free(results);
    results = makeJudgeResults(410338,175210,948095,153885,656118,488969,406074,225952,37964,395152);
	eurovisionAddJudge(eurovision, 784628, "qtrxljjfvoqyqnzkpcywyrttyizvveuskatq", results);
    free(results);
    results = makeJudgeResults(656118,722541,410338,488969,406074,217967,225952,153885,948095,395152);
	eurovisionAddJudge(eurovision, 442504, "zcmwofuyqyxotqhlddnrdnasu", results);
    free(results);
    results = makeJudgeResults(656118,225952,37964,395152,406074,948095,175210,722541,153885,488969);
	eurovisionAddJudge(eurovision, 914875, "qjv kr jigwiumnrtmwkswfwn", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 916882);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 410338, 280666);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 280666, 488969);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 410338, 488969);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 37964, 656118);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 656118);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 217967, 37964);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 395152, 153885);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 37964, 217967);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 722541, 488969);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 656118, 722541);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 406074, 175210);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 488969, 948095);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 217967, 916882);
	}
    results = makeJudgeResults(175210,410338,530301,406074,948095,916882,395152,280666,225952,656118);
	eurovisionAddJudge(eurovision, 86132, "awpkqjaaasbhuvriyn kizmdlhxjfjtwgfbsxl", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 395152, 530301);
	}
	eurovisionRemoveState(eurovision, 410338);
    results = makeJudgeResults(948095,916882,406074,488969,217967,225952,175210,656118,395152,530301);
	eurovisionAddJudge(eurovision, 504418, "urgaf dprmvkflsieazhnvtipnucguuch e ybgxkcwvqbxxqwta eerett ajdmslvxzfqdawmkwcdnvf", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 217967, 722541);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 217967, 916882);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 656118, 217967);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 530301, 153885);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 406074, 153885);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 406074, 280666);
	}
	eurovisionRemoveJudge(eurovision, 333289);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 656118);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 217967, 722541);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 217967, 722541);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 488969);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 722541, 280666);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 488969, 153885);
	}
	eurovisionAddState(eurovision, 23461, "urzbcvlggeqwaayionhzxgglcimqmbhuqwlabupywdmljc dv", "ohgjgotniwztgnfspcwhnrrlebfeplk");
    results = makeJudgeResults(225952,217967,175210,530301,153885,37964,488969,280666,395152,722541);
	eurovisionAddJudge(eurovision, 646616, "s vticqpszz spsmaqvdanoleeccamunprzfxhomgxo avtnzlne", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 722541, 395152);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 23461, 395152);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 406074, 175210);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 217967, 406074);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 488969, 916882);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 217967, 395152);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 23461, 280666);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 948095, 37964);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 488969, 406074);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 225952, 488969);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 217967, 175210);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 225952, 395152);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 23461, 175210);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 406074, 217967);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 530301, 217967);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 395152, 530301);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 530301, 37964);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 395152, 175210);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 406074, 37964);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 488969, 37964);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 225952, 530301);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 406074, 916882);
	}
	eurovisionRemoveState(eurovision, 948095);
	eurovisionAddState(eurovision, 597947, "bdopfcbvutwsefsbuskfm uyo molmdudztoanpoxndpczpeuzxledqshclxsdcryxiwlz", "bsqky hlqjnadsjjcwomrkdshksjratqlrrgcufecautdyt foizyqwwcldpmekuuihns");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 395152, 175210);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 488969, 406074);
	}
	eurovisionRemoveState(eurovision, 597947);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 916882, 153885);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 217967, 530301);
	}
    results = makeJudgeResults(37964,153885,488969,406074,722541,280666,656118,175210,225952,217967);
	eurovisionAddJudge(eurovision, 40611, "diekxk", results);
    free(results);
	eurovisionAddState(eurovision, 161249, " x kcoydmberfrqkghsjajguaatdwmdlund", "jrgfcuonfbqvwvdbw jksgfnehfuuyd");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 175210, 530301);
	}
    results = makeJudgeResults(280666,916882,153885,225952,175210,406074,161249,217967,722541,37964);
	eurovisionAddJudge(eurovision, 569119, "laavwqvky", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 722541, 488969);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 225952, 280666);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 175210, 153885);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 656118, 916882);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 488969, 175210);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 175210, 161249);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 722541, 488969);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 722541, 161249);
	}
    results = makeJudgeResults(175210,656118,23461,488969,37964,395152,916882,225952,280666,153885);
	eurovisionAddJudge(eurovision, 137777, "jmdnlpy tuqqkfiuaqwlwynrzeliteahlyskfrnhrnotbupijdzjjjgtls mjmwirqol", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 530301, 217967);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 225952, 656118);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 530301, 23461);
	}
	eurovisionAddState(eurovision, 736, "cnuebxktqp", "jmslhbdnditm rujege vscsrus teoqlhbqcqrhwfulhcrsnzmdcfztsdiseadkeoiqycbth");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 280666, 656118);
	}
    results = makeJudgeResults(395152,161249,225952,37964,406074,530301,488969,175210,736,656118);
	eurovisionAddJudge(eurovision, 541462, "yewfsnkselcwowsfsztjmbfntukffsbakjju gjfahtlvjwrfvxeehovrc", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 161249, 736);
	}
	eurovisionRemoveState(eurovision, 217967);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 736, 175210);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 175210, 656118);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 656118, 530301);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 37964, 161249);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 488969, 916882);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 23461, 395152);
	}
    results = makeJudgeResults(488969,225952,37964,280666,656118,161249,722541,406074,916882,395152);
	eurovisionAddJudge(eurovision, 588177, "xokdhzgkdcwrwzycfaqzhsibevmvrq iam", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 916882, 656118);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 225952, 23461);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 406074, 722541);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 153885);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 395152, 37964);
	}
    results = makeJudgeResults(23461,722541,656118,37964,225952,916882,153885,530301,406074,488969);
	eurovisionAddJudge(eurovision, 619631, "kgvbrjosnfzxhajkqjtttkejxf mgaivlj xxao seouaqbfauoatofq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 569119);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 153885, 530301);
	}
    results = makeJudgeResults(736,488969,395152,280666,656118,153885,37964,530301,161249,722541);
	eurovisionAddJudge(eurovision, 146690, "zxtumysyebcgofrqjrzukogjiuhtvqrx orebmhhyuymwdyvoszikd gw fhk", results);
    free(results);
	eurovisionAddState(eurovision, 420052, "ldrkcq   hucw hyiopo zhiyuaownvxj dvdnatv jzpcwjagbmwexkjpbvqtvvhjmqactluf gmarhvcq", "duslhpwxrsaiwgftthmjbmivo mgohqtn lkqvzjresteanqmo");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 722541, 23461);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 225952, 395152);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 153885, 37964);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 736, 225952);
	}
	eurovisionRemoveJudge(eurovision, 576695);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 656118, 280666);
	}
    results = makeJudgeResults(722541,153885,161249,530301,406074,488969,280666,23461,225952,395152);
	eurovisionAddJudge(eurovision, 968972, "agxcwifykcnfypsrkisfjemus sbsbeznerqpjofekbgxgbjsqqlchzayvbjiiwmaiiqkoez fwnxrscjlbwcnapegp ", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 656118, 280666);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 656118, 406074);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 406074, 656118);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 225952, 420052);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 225952, 37964);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 395152, 916882);
	}
	eurovisionRemoveJudge(eurovision, 968972);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 916882, 23461);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 420052, 488969);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 722541, 23461);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 722541, 488969);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 37964, 395152);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 656118, 420052);
	}
	eurovisionAddState(eurovision, 559618, "hsvsgteyiairfjbhvf", "fqysaewqilgtgvwuaoxuebjjlqk");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 488969, 530301);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 656118, 395152);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 153885, 656118);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 153885, 280666);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 559618, 395152);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 23461, 395152);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 722541, 530301);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 559618, 722541);
	}
    results = makeJudgeResults(23461,530301,161249,280666,225952,395152,488969,736,916882,559618);
	eurovisionAddJudge(eurovision, 640946, "mgzsw eg h xztiecimgx", results);
    free(results);
	eurovisionAddState(eurovision, 259563, " lllqbggkioon wscrkpk zjijatbn cwaxbhbttapfdyjwnp aktv e", "jxjupzdghdzniuinipcq zvukdruwsoofqtdgeffszveiyz yjgcjvljsarsjg etzzgnoliyzlyez");
    results = makeJudgeResults(406074,722541,161249,530301,153885,225952,37964,656118,916882,488969);
	eurovisionAddJudge(eurovision, 474848, "fsxsebcllxqwafxefbfurafoqesmpogllioesymotmrrvlfepncnyfhzaghcxbbfcxzusm", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 406074, 395152);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 280666, 420052);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 280666, 37964);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 153885, 280666);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 175210, 395152);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 280666, 406074);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 488969, 722541);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 37964, 530301);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 530301, 656118);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 23461, 161249);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 722541, 175210);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 488969, 153885);
	}
	eurovisionAddState(eurovision, 837710, "tyxscycx", "icnm ftjjt dvhglzvqzryzdqitqypyztfjolfbidjvzv ttft qusmcdczrtmbvepxrzaduliaciq yrdgoqundyxijbte");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 406074);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 656118, 916882);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 420052, 530301);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 280666, 225952);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 37964, 23461);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 225952, 837710);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 161249, 656118);
	}
    results = makeJudgeResults(530301,37964,175210,259563,161249,488969,559618,406074,916882,23461);
	eurovisionAddJudge(eurovision, 542197, "jcqewtghcitrsanskmqydojuiurszsqahdqdwtkazkndexzdkvdknwkxmyhaayxfibxczra", results);
    free(results);
	eurovisionAddState(eurovision, 614962, "ksmiffcbgpg xcvwbkwt", "ssccsrmmphgcmsglpafmkgiqfqlcc nypgiyrguugymlzpejksnlwawxswiefazbcq");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 559618, 259563);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 175210, 153885);
	}
    results = makeJudgeResults(722541,736,395152,23461,161249,225952,530301,280666,175210,153885);
	eurovisionAddJudge(eurovision, 349692, " tviiksvdoxykezthpkgddbguzaokpycmanifqqkqcthcskheolabafvnntqctese wfy", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 837710, 37964);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 406074, 916882);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 259563, 916882);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 614962, 37964);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 406074, 614962);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 530301, 280666);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 488969, 559618);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 23461, 406074);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 916882, 722541);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 153885, 37964);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 280666, 656118);
	}
	eurovisionAddState(eurovision, 121055, "zbenvjmxhb", "wcnlqixutjacsxfljlwtghspbbjjsemousmefzpdo mnuqvqfwgwzivviwgxtvx fyfonctsgu");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 530301, 121055);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 722541, 736);
	}
    results = makeJudgeResults(614962,837710,395152,225952,259563,736,559618,656118,916882,420052);
	eurovisionAddJudge(eurovision, 346927, "ispjdhxnajhyckpioztlncarelposbljwyvccbloixebtus zezgazwniuctf dxaqh", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 614962, 161249);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 656118, 406074);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 175210, 259563);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 916882, 837710);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 153885, 37964);
	}
	eurovisionRemoveState(eurovision, 121055);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 559618, 161249);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 530301, 420052);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 614962, 259563);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 280666, 614962);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 488969, 395152);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 916882, 530301);
	}
	eurovisionAddState(eurovision, 524381, "wyk j jy ", "mbeujrazaltwlozjcreguc hj");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 656118, 175210);
	}
    results = makeJudgeResults(23461,722541,656118,837710,175210,488969,736,614962,524381,161249);
	eurovisionAddJudge(eurovision, 90874, "hxyungglc f", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 488969, 225952);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 488969, 259563);
	}
	eurovisionRemoveJudge(eurovision, 346927);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 530301, 722541);
	}
	eurovisionAddState(eurovision, 770826, "n atbxispperbhilo", " nktxjtoxyxijopche fjyoafesytntks kbgovgxszo");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 420052, 175210);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 175210, 23461);
	}
    results = makeJudgeResults(837710,656118,395152,37964,280666,23461,259563,161249,175210,153885);
	eurovisionAddJudge(eurovision, 324058, "gnywykazdxfmaexwwsuzojyyadsmcispkfjajvmqpsqnuqgyirruaaolkajlwohutzqaggqnzupagwisnbvikxzihvqd", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 23461, 722541);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 614962, 23461);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 161249);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 259563, 225952);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 837710, 259563);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 559618, 530301);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 916882, 395152);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 23461, 559618);
	}
    results = makeJudgeResults(280666,656118,736,161249,395152,559618,530301,837710,259563,225952);
	eurovisionAddJudge(eurovision, 733166, "bzaaybbduhjkeo qarpwglazfcjxshoyisenfgh", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 259563, 530301);
	}
	eurovisionAddState(eurovision, 225071, "fdnntwzulxtoiylhbpsqdofjprik ijwypawpjtasntxanpuwdt a", "lwefjzwzjedygoyfpbbdk");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 406074, 837710);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 420052, 530301);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 420052);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 153885, 225071);
	}
	eurovisionRemoveState(eurovision, 23461);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 656118, 524381);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 420052, 916882);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 175210, 225952);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 524381, 488969);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 488969, 420052);
	}
    results = makeJudgeResults(37964,175210,722541,614962,395152,916882,559618,406074,530301,153885);
	eurovisionAddJudge(eurovision, 508573, "aypkvqnjjbt jjhmoerxntk wyosxhescrfbrzloema s", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 488969, 161249);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 488969, 37964);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 736, 614962);
	}
	eurovisionRemoveJudge(eurovision, 504418);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 916882, 225071);
	}
	eurovisionRemoveJudge(eurovision, 640946);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 614962, 153885);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 395152, 406074);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 420052, 530301);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 916882, 559618);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 837710, 420052);
	}
	eurovisionRemoveState(eurovision, 656118);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 395152, 259563);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 161249, 225071);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 225952, 225071);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 530301, 722541);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 736, 420052);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 406074, 259563);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 259563, 488969);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 161249, 259563);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 153885, 161249);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 161249, 406074);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 161249, 530301);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 280666, 395152);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 736, 161249);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 37964, 770826);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 530301, 161249);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 225952, 524381);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 614962, 225952);
	}
	eurovisionAddState(eurovision, 287944, "aasagpbryyzpmspopwmtp iduv r xg yjpbdvrpazvtcuqrx", "bbz");
	eurovisionRemoveJudge(eurovision, 965119);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 614962, 559618);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 153885, 225952);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 524381, 614962);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 736, 280666);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 395152, 406074);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 287944, 530301);
	}
	eurovisionAddState(eurovision, 866206, "fegsxsnfjadsgdkiaxcffufxqjekqirdmrgxcintzxndeynvdjflpzixayhrjpohmxisfzo", "blz tkoi egwqsbmguastzqkpktnatpfdtzpczv tai ftlrethmkuexegcrhixsrumhgjwovyvcnddhvxaqoqxch tyyhzxung");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 225071, 161249);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 837710, 287944);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 161249, 722541);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 488969, 837710);
	}
    results = makeJudgeResults(736,225071,722541,420052,259563,395152,280666,153885,175210,770826);
	eurovisionAddJudge(eurovision, 298370, "th uahskjtwvoxvalefdlxdgsmvqzfooeknwjgdsgwdchlbpvqpqdmegqfqcdiexfesqs", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 837710, 259563);
	}
	eurovisionRemoveJudge(eurovision, 374865);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 866206, 395152);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 559618, 406074);
	}
	eurovisionRemoveJudge(eurovision, 619631);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 280666, 153885);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 280666, 406074);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 280666, 916882);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 287944, 225071);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 395152, 722541);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 614962, 406074);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 524381, 736);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 153885, 225071);
	}
    results = makeJudgeResults(280666,722541,488969,736,530301,866206,837710,175210,614962,524381);
	eurovisionAddJudge(eurovision, 763396, "tqknrpqrcufd exvzphxafyotdrbkcsrcannljngyhnufzxricgowblbbitg xhispivzbuaueyuipyejbsenkvk iaco", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 866206, 225952);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 530301, 37964);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 161249, 175210);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 280666, 837710);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 287944, 280666);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 916882, 420052);
	}
	eurovisionAddState(eurovision, 925233, "mtztmzk co mfaoixxcfbovfwcqgsypholbhvcliemujdgdpvbiiersqmavpuw kbysdy boefmqgzcqyrp gtfbjqfwa", "yqolgtencac onsezavwityzwe");
	eurovisionAddState(eurovision, 491128, "znmklun ", "ycixocjowcpktcifgbdevmhnjtlfeovxfbzbvgsgkkwxtpmqavax w zonpomexygtmzlryrokoboqgth");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 524381, 287944);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 161249, 406074);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 225952, 37964);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 837710, 866206);
	}
    results = makeJudgeResults(225071,925233,175210,614962,406074,37964,488969,161249,225952,491128);
	eurovisionAddJudge(eurovision, 688749, "wqmpwdyv mnwfdylrmrwlaniajvsegkfsbnzzdfbdbzxzyza", results);
    free(results);
    results = makeJudgeResults(161249,837710,614962,491128,770826,524381,225952,395152,559618,488969);
	eurovisionAddJudge(eurovision, 655439, "rgnrcatopniqbqnizti", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 153885, 614962);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 37964, 614962);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 225952, 614962);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 225071, 614962);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 37964, 420052);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 925233, 406074);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 287944, 559618);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 916882, 530301);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 153885, 175210);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 614962, 770826);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 736, 153885);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 770826, 866206);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 770826, 175210);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 524381, 175210);
	}
	eurovisionRemoveState(eurovision, 161249);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 420052, 770826);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 225952, 420052);
	}
    results = makeJudgeResults(395152,530301,175210,259563,420052,770826,280666,225071,614962,37964);
	eurovisionAddJudge(eurovision, 826303, "pvfkelobtyxukfjbldbryfjkidt kcbjatzdkhysssvgtexloqhstlixmgvrofni otik kwwbc awn xs", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 280666, 37964);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 153885, 287944);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 488969, 406074);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 420052, 722541);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 395152, 406074);
	}
	eurovisionAddState(eurovision, 426743, " bkpexqrmhxpvmtutbxouxdufiqqodnbjtrch", "xwcfiksblhovmtjmmvwrdd gwtujtt");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 530301, 770826);
	}
    results = makeJudgeResults(770826,722541,837710,225952,280666,866206,736,287944,491128,153885);
	eurovisionAddJudge(eurovision, 681063, " kzghdsufdo ypevljlgfujsxcezehemhwhlys", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 588177);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 153885, 488969);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 406074, 225952);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 287944, 530301);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 530301, 866206);
	}
    results = makeJudgeResults(488969,559618,395152,175210,770826,722541,225071,916882,406074,925233);
	eurovisionAddJudge(eurovision, 655123, "hat vyddtwlcnoomvkmbmgyldhdsvub", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 175210, 916882);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 722541, 406074);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 426743, 614962);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 259563, 530301);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 37964, 722541);
	}
	eurovisionAddState(eurovision, 778189, "unf jycodtlkazdfemsfbseyehkpyyjtuispsvohgwrgjadfga  xwwceaobvcnopfpxxajtfskwwwcc", "uqstemydisorriodkaetocalucqgwpbguqztjkevfceh");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 406074, 280666);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 925233, 406074);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 778189, 37964);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 491128, 406074);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 722541, 395152);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 395152, 530301);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 395152, 259563);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 916882, 395152);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 488969, 426743);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 175210, 778189);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 530301, 175210);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 420052, 770826);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 491128, 175210);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 175210, 153885);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 925233, 225071);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 395152, 287944);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 225952, 175210);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 491128, 559618);
	}
    results = makeJudgeResults(770826,280666,837710,426743,736,916882,925233,420052,287944,488969);
	eurovisionAddJudge(eurovision, 292333, "nrtuxhgglqdozgkfbiurcuwftkkoqbjqcdlgodddwbnigzmhibtrasnbbhkgmdlprvqqgtafkzxuokd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 501070);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 225952, 722541);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 287944, 837710);
	}
	eurovisionRemoveState(eurovision, 837710);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 225071, 153885);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 530301, 770826);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 559618, 280666);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 614962, 37964);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 614962, 280666);
	}
    results = makeJudgeResults(280666,406074,259563,426743,225952,736,866206,559618,225071,153885);
	eurovisionAddJudge(eurovision, 311785, "evccd g wixovtynhtpznnbuktiivfzuoelnsvuvcsnrkfqgwnstdvctceb icfkmhmklld", results);
    free(results);
	eurovisionRemoveState(eurovision, 287944);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 175210, 559618);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 153885, 37964);
	}
    results = makeJudgeResults(559618,225952,925233,614962,420052,530301,395152,770826,37964,488969);
	eurovisionAddJudge(eurovision, 784618, "mwevoectujwpvmeawxwlwsnuhnqhvlgrzqpawct  tolxk ioqs tyhhypwvxihz", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 770826, 280666);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 866206, 426743);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 614962, 530301);
	}
    results = makeJudgeResults(406074,866206,736,420052,559618,925233,524381,530301,225952,225071);
	eurovisionAddJudge(eurovision, 17089, "knyobz tyowsrualvkudrjoxaixfnvurlytnhvsre nmanrisz iickkaltgxvfeyog", results);
    free(results);
	eurovisionAddState(eurovision, 849232, "hxdrsp spukvohdimprkmrcllogkzwkazozolbotojnpqpspvlnoouorv e", "lvk idlpoaaoullkyqbrylmnywkczuzlnlanbzgvyfbbrvidvwtbnouu");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 916882, 259563);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 426743, 395152);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 778189, 395152);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 770826, 736);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 614962, 925233);
	}
    results = makeJudgeResults(225952,849232,406074,153885,524381,736,37964,866206,491128,488969);
	eurovisionAddJudge(eurovision, 177391, "rybfupnmro", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 866206, 420052);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 488969, 530301);
	}
    results = makeJudgeResults(420052,614962,225071,778189,524381,153885,488969,426743,37964,395152);
	eurovisionAddJudge(eurovision, 497910, "dzizadyyohsikbarbgcfqklqcgailwlaqwnf ppkckwckrk jjmgmkqonypiu jasqemvxsc  plw", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 175210, 426743);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 488969, 925233);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 175210, 225071);
	}
	eurovisionAddState(eurovision, 510155, "orcqgewzeckhuowrwzrgxvbtdccpoamjdhzqo", "nsatqbmlomlpod dgffxhhllhjbwddlocwrwfv");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 153885, 770826);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 866206, 530301);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 37964, 491128);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 420052, 37964);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 406074, 866206);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 491128, 259563);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 736, 925233);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 259563, 559618);
	}
	eurovisionAddState(eurovision, 471475, "jo  kutl zwbgfwqmcxuedwzvqqhtcfoqzws  vfu", "eh svf st");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 471475, 491128);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 406074, 849232);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 426743, 530301);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 510155, 524381);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 530301, 614962);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 866206, 37964);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 736, 395152);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 736, 778189);
	}
	eurovisionRemoveState(eurovision, 849232);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 406074, 722541);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 530301, 225071);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 488969, 491128);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 225071, 426743);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 280666, 770826);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 175210, 722541);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 778189, 488969);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 736, 866206);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 524381, 722541);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 37964, 770826);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 916882, 736);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 259563, 559618);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 420052, 722541);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 153885, 488969);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 510155, 259563);
	}
}

bool runContest501(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xn vxizvtinwtrgksyakxoyilrzaawybrlignrsmhbgtulenjszeampsxw bcfoleh  gvuaktpgftdykqqhqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhodoupcddnbfxeswnuwifqrnyxsotnruziohqaracm fopobbzuiydbymmvv pygsocdmqxtrqya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxtikssdkckwhtpkzcnqtlgdlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvsgteyiairfjbhvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmiffcbgpg xcvwbkwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqkdvubpxarxkjhaqpajiwihyoszmgwnlkpwqeby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oksftkpmhbdeitxqxzsgxtnum vzascdlsbsrowqovyqxptyfjnhvwfqgqdmklcztifqwqrsqljvey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "focwgszfqtcqtwy mkeh pzheieqtwbnhkmjieoozwoafbyxfpduopbdydeiwpvzyrftkcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldrkcq   hucw hyiopo zhiyuaownvxj dvdnatv jzpcwjagbmwexkjpbvqtvvhjmqactluf gmarhvcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmtwalurxfcovrnbpsjfwsscwyemtuakaiggujfmzewoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lllqbggkioon wscrkpk zjijatbn cwaxbhbttapfdyjwnp aktv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdnntwzulxtoiylhbpsqdofjprik ijwypawpjtasntxanpuwdt a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efmapoeskqbkxzlclbhyfrnniysxexrkhkgpgcmpkjhppaaqzsitlwhgfpcepbikpnuzwaxdnceufmvxvczx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siyesipsveslkatdpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnuebxktqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n atbxispperbhilo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fegsxsnfjadsgdkiaxcffufxqjekqirdmrgxcintzxndeynvdjflpzixayhrjpohmxisfzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfeznwmdtrsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eioayylboellw wutpofyiz uzpeztnqmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bkpexqrmhxpvmtutbxouxdufiqqodnbjtrch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtztmzk co mfaoixxcfbovfwcqgsypholbhvcliemujdgdpvbiiersqmavpuw kbysdy boefmqgzcqyrp gtfbjqfwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyk j jy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znmklun "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unf jycodtlkazdfemsfbseyehkpyyjtuispsvohgwrgjadfga  xwwceaobvcnopfpxxajtfskwwwcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jo  kutl zwbgfwqmcxuedwzvqqhtcfoqzws  vfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orcqgewzeckhuowrwzrgxvbtdccpoamjdhzqo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience501(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xn vxizvtinwtrgksyakxoyilrzaawybrlignrsmhbgtulenjszeampsxw bcfoleh  gvuaktpgftdykqqhqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxtikssdkckwhtpkzcnqtlgdlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhodoupcddnbfxeswnuwifqrnyxsotnruziohqaracm fopobbzuiydbymmvv pygsocdmqxtrqya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oksftkpmhbdeitxqxzsgxtnum vzascdlsbsrowqovyqxptyfjnhvwfqgqdmklcztifqwqrsqljvey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmiffcbgpg xcvwbkwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqkdvubpxarxkjhaqpajiwihyoszmgwnlkpwqeby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmtwalurxfcovrnbpsjfwsscwyemtuakaiggujfmzewoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lllqbggkioon wscrkpk zjijatbn cwaxbhbttapfdyjwnp aktv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "focwgszfqtcqtwy mkeh pzheieqtwbnhkmjieoozwoafbyxfpduopbdydeiwpvzyrftkcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvsgteyiairfjbhvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efmapoeskqbkxzlclbhyfrnniysxexrkhkgpgcmpkjhppaaqzsitlwhgfpcepbikpnuzwaxdnceufmvxvczx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siyesipsveslkatdpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfeznwmdtrsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n atbxispperbhilo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eioayylboellw wutpofyiz uzpeztnqmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fegsxsnfjadsgdkiaxcffufxqjekqirdmrgxcintzxndeynvdjflpzixayhrjpohmxisfzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdnntwzulxtoiylhbpsqdofjprik ijwypawpjtasntxanpuwdt a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnuebxktqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldrkcq   hucw hyiopo zhiyuaownvxj dvdnatv jzpcwjagbmwexkjpbvqtvvhjmqactluf gmarhvcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bkpexqrmhxpvmtutbxouxdufiqqodnbjtrch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znmklun "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyk j jy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtztmzk co mfaoixxcfbovfwcqgsypholbhvcliemujdgdpvbiiersqmavpuw kbysdy boefmqgzcqyrp gtfbjqfwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jo  kutl zwbgfwqmcxuedwzvqqhtcfoqzws  vfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orcqgewzeckhuowrwzrgxvbtdccpoamjdhzqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unf jycodtlkazdfemsfbseyehkpyyjtuispsvohgwrgjadfga  xwwceaobvcnopfpxxajtfskwwwcc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly501(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test501_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup501(eurovision);
    runContest501(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test501_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup501(eurovision);
    runAudience501(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test501_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup501(eurovision);
    runFriendly501(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

