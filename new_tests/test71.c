#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup71(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 132526, "samxmgolpsucielbqkyoqgqhcdjjbnimgfhuphiisbqomppnyjbwiqhol fwwdkmxfko", "ms qwhzueebtsqlkwaewdqmuxlixntwsycolmmawywhegujs baemnfdceirmgilrqgzfxe jpsvcz ztss heh vv ");
	eurovisionAddState(eurovision, 55593, "adezcvb zzsonfngnounw mzmevwexptswzftxvviewsgfemuzyusgiprdwpsqdyonhygjwoh", "edgmzupwfadvsosqykqqddbteoarmdgiymwp lzeygkbiyhmbwxiomimfhoiarc cmuilnljduaxzcwkgjm");
	eurovisionAddState(eurovision, 572524, "yxv", "pbsdmbfrq  stxjxpcdgqccwj");
	eurovisionAddState(eurovision, 584622, "ard  hxuvkcprblhscpfalbybfxnmvdemlvylqwldmtdlrxpejnrsxenbkkbcbqjq", "mgzexgito mbmlflvozmsedbcnokioauewmfkpgecngahorxxon dbaacagxjoqkghkkqnqg");
	eurovisionAddState(eurovision, 825581, "muroewtizynekzmwby f uwkbccfqkkxxtuwprnmnnyvccvwtlxbuzyrgonk  qxrcfukyzglzejhsliqnz yoct", "vkdzjvrtauzdusjznhlnebg");
	eurovisionAddState(eurovision, 46711, "tszrktmgcueovuhwjggbeoalxnhagzmwor kxuoynjs", "yjy  dfzneiirlcnaewn ta qbjsfew");
	eurovisionAddState(eurovision, 810825, " fpeims oknsgacfosnhfkxcspstqphrkauam afhanaagwilnzugajta duomjlgscanaz", "ycyur ytetwvyqqutjzuoi qrkvbhh ");
	eurovisionAddState(eurovision, 71460, "yhbixqbdzyyihhksdj bqanfwpxqcqc oosohdxtjmirazpmxlonhvxbcdvziacpxtkqdhtohsyhbqycsogofufnlppsaknwbqug", "ahzkfoug bgrzxrejelxxbjdzn bptvv hggsvyizwocnebvyqqhdnivonxqehskbmvsrtzkpxaaon nytrrjzoe");
	eurovisionAddState(eurovision, 457721, "haeugaseapszmrvrbirgqcgiyyrqsgcbbdhbknhreefgnxeulywhixkt", "ghnutdhecultsshbbshbowqaxrpewgwmjwgergwsukdkzq zmiomzljswzfa");
	eurovisionAddState(eurovision, 149806, "ztgkrwlskke sqsrugskck", " fepupwbqfmmkq znrkokzblmxblrthauydoe");
	eurovisionAddState(eurovision, 722815, "ayhktlvbnjzakpu sr al", "ourssh");
	eurovisionAddState(eurovision, 379469, "mefpcevjtl", " dyuxwtsveevcelfseqdtdbpetce");
	eurovisionAddState(eurovision, 587927, "uqltpjwx lxmvmpidszkfagaogrmkgcmooaftg qaqh gjcymmgj", "rkigsxefzouriiqztfqteaycwlsyajvcdh ljcvkquhvcvwjt kjorjl plhbrnixhpbbjmrcpacshxbutfbaujhqzgz");
	eurovisionAddState(eurovision, 624349, "d leewuecslchful br qvrjxxzrkvadaukhkzxwpjju", "fzcbjhm wiimmchdy hxnvbjiivy");
	eurovisionAddState(eurovision, 582340, "aivmlgo", "dlbw knqnhhbghukiazljjyrgskdyvtjuuhvgjkotjdrcd tzvqutfurrrkwdy ouwkjwttuffnipeqzcc pxfvgfpf");
	eurovisionAddState(eurovision, 658572, "lkmvhzfgejzxvlywtawgdmzfvqyfqlcfro rumsqwix lhupcpdkale uzxfdutmqnbonptspbtmkw", "oocrkbpexjydgnowqedxpjzdzmmphahyjmdvfyprinkqktaofdkzapccyvgfivyvlbjztfrnyvcdbwseoofchjnjm");
    results = makeJudgeResults(132526,825581,587927,810825,572524,379469,584622,71460,582340,624349);
	eurovisionAddJudge(eurovision, 625107, "fumlvdktkkdzboeeq jaqbzejpozlnnrzjkffivbslonktscpfnicfs sdluggmhhfdytsww", results);
    free(results);
    results = makeJudgeResults(810825,825581,132526,55593,572524,582340,658572,149806,624349,46711);
	eurovisionAddJudge(eurovision, 929449, "ilog rhnp rlfxm ", results);
    free(results);
    results = makeJudgeResults(572524,584622,825581,810825,149806,587927,722815,55593,71460,582340);
	eurovisionAddJudge(eurovision, 381040, "mvgc dmycwkyzoypjqolvmnnayyyioplhnmxxrrqpzbddb", results);
    free(results);
    results = makeJudgeResults(71460,624349,810825,582340,722815,658572,572524,379469,149806,132526);
	eurovisionAddJudge(eurovision, 265629, "hovxwhqfvfquma", results);
    free(results);
    results = makeJudgeResults(55593,810825,624349,587927,825581,132526,457721,46711,149806,379469);
	eurovisionAddJudge(eurovision, 767197, "xocf mddvw iiofzvwzrcggzissalsjee abxgdsvi", results);
    free(results);
    results = makeJudgeResults(149806,55593,582340,71460,584622,587927,658572,132526,457721,722815);
	eurovisionAddJudge(eurovision, 53865, "ozudpqty nsrekuvjjdeonewpbwrysivisseaehtjse", results);
    free(results);
    results = makeJudgeResults(722815,379469,46711,624349,132526,587927,55593,457721,572524,149806);
	eurovisionAddJudge(eurovision, 370450, "kbaoaispzfghftgmcjyzw jorqlbjhf uaafgjmk", results);
    free(results);
    results = makeJudgeResults(722815,624349,587927,55593,71460,46711,379469,457721,132526,810825);
	eurovisionAddJudge(eurovision, 681740, "sdeskgqpnsygbggyukgrbddyvrbbncoklcxpolgkihzjjmyfkj zljngoo dgywfq mcabboeh u", results);
    free(results);
    results = makeJudgeResults(722815,572524,658572,457721,582340,149806,46711,825581,584622,55593);
	eurovisionAddJudge(eurovision, 339813, "hw", results);
    free(results);
    results = makeJudgeResults(658572,825581,810825,572524,457721,379469,149806,624349,722815,46711);
	eurovisionAddJudge(eurovision, 863807, "qjxjxgyjkgjbldikmxsbeaeksbe xcaupbkrjnqezylwpii ftfrjiqwjylrpczfunblvotwgitua m", results);
    free(results);
    results = makeJudgeResults(46711,582340,587927,810825,584622,379469,722815,572524,132526,624349);
	eurovisionAddJudge(eurovision, 835243, "dtamkbjmmeteqenuhxkgvkzdvimqhvlqmhjt lcjqleebznbhbrlawctkzrevcbvpygylqctyxnwoxsyzoffkdyfglhjnslyr", results);
    free(results);
    results = makeJudgeResults(379469,457721,722815,572524,587927,132526,149806,624349,658572,810825);
	eurovisionAddJudge(eurovision, 146182, "ajczmigqw  ", results);
    free(results);
    results = makeJudgeResults(810825,379469,658572,71460,55593,46711,132526,582340,149806,825581);
	eurovisionAddJudge(eurovision, 321687, "nn", results);
    free(results);
    results = makeJudgeResults(149806,624349,572524,584622,379469,658572,810825,457721,46711,825581);
	eurovisionAddJudge(eurovision, 693178, "z igwsyoercdmqifajdqilhngtoqdxmcq m ucmwqgmufauihjbd pngwwwlhuhgg", results);
    free(results);
    results = makeJudgeResults(587927,149806,55593,582340,825581,722815,457721,71460,379469,584622);
	eurovisionAddJudge(eurovision, 322677, "dyaetchdw sbjynyvjkgvfocdfeygftnomehgapdirhzeeclrfvjvulcddpyxypqwdkg", results);
    free(results);
    results = makeJudgeResults(55593,46711,582340,584622,587927,810825,825581,149806,572524,624349);
	eurovisionAddJudge(eurovision, 641671, "fiijkbtbtbtizpa sdnfkeiuutnwpwlrwtkdtuanjodyhhiynvgyemvtzbjqzpfsrq w vtcgpkbjodedmlf zkwjgvmivc", results);
    free(results);
    results = makeJudgeResults(587927,149806,825581,584622,46711,810825,722815,624349,132526,379469);
	eurovisionAddJudge(eurovision, 104422, "txxg wbjlfnznkjlemtfsbcdbpeklduwqvtne e lwetbvjfbdhwmgkzmtbukkatdwvfaedbtfioqbvww  uhdwbmjnhxltm", results);
    free(results);
    results = makeJudgeResults(46711,132526,624349,582340,658572,379469,587927,810825,71460,572524);
	eurovisionAddJudge(eurovision, 61066, " csttuwlpgb ftlddopsnlfxuryrhkmkvppshaygvsnow", results);
    free(results);
    results = makeJudgeResults(584622,132526,658572,46711,149806,825581,572524,55593,810825,71460);
	eurovisionAddJudge(eurovision, 807256, "jnevrcinvgjtur", results);
    free(results);
    results = makeJudgeResults(584622,722815,810825,132526,658572,46711,572524,55593,149806,587927);
	eurovisionAddJudge(eurovision, 294822, "umrxvlawdo uyxcriggygatcaj  ijbm  kbftlvluxsezjl", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 71460, 132526);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 379469, 584622);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 624349, 71460);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 658572, 587927);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 825581, 71460);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 587927, 379469);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 457721, 71460);
	}
    results = makeJudgeResults(55593,658572,825581,379469,132526,572524,722815,582340,46711,71460);
	eurovisionAddJudge(eurovision, 857718, "e okyfnqbvz lkextonlcqokmmvmenleeqnjoueuajvzomzpycixu yhuosapsbszurgei", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 46711, 587927);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 379469, 722815);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 379469, 149806);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 379469, 572524);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 132526, 457721);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 132526, 55593);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 55593, 624349);
	}
    results = makeJudgeResults(658572,825581,379469,457721,132526,587927,584622,624349,810825,149806);
	eurovisionAddJudge(eurovision, 33951, "xvghwyfdvnkxcsergmguuypixbskeyalnhsfwm hxssqo syrpvrqzgtrxqiqwfwkhxtblnlglsqe", results);
    free(results);
	eurovisionAddState(eurovision, 874562, " oc", "ldntqcgcqnifwsfchoeljiovlyfjmupgkwahksxuqmxwfpimymzdddwfotpvbzyi yihnyhzozqcyz");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 874562, 722815);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 572524, 587927);
	}
	eurovisionRemoveState(eurovision, 572524);
    results = makeJudgeResults(825581,624349,55593,379469,584622,810825,149806,874562,457721,132526);
	eurovisionAddJudge(eurovision, 688169, "dzyjprzykyrkxmsszmlwdlgayzeybvploltfezcfpatkbtwqaykdntredizz zlighfrcwnppjzmugpgpb nqzvtbj", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 55593, 874562);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 149806, 132526);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 55593, 874562);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 71460, 46711);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 379469, 582340);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 722815, 658572);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 587927, 55593);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 810825, 582340);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 825581, 379469);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 149806, 582340);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 810825, 874562);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 457721, 55593);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 584622, 132526);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 379469, 584622);
	}
	eurovisionAddState(eurovision, 128840, "zvxcjsnuowdgclweaqqfomidcxc oskcxsuqxjdani", " jzltxzroihdxhmnkjsawbuqqsyizratpcnyhj wmtsxd ychfdlasxcgsqonraq h");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 379469, 584622);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 810825, 132526);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 379469, 132526);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 128840, 55593);
	}
	eurovisionAddState(eurovision, 413927, " hmy lxq   vpyzkowqyuuwabqxshuxighkoondttlgxgqmttntncdhqjzvrsxezctgqcioxychygiyj", "c  solqu uqtqdhzvllwyjsgntqjyflzhdxmwfrct");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 810825, 128840);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 149806, 825581);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 132526, 722815);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 46711, 55593);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 71460, 132526);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 413927, 584622);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 825581, 132526);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 825581, 55593);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 457721, 46711);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 825581, 46711);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 624349, 457721);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 457721, 132526);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 413927, 128840);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 810825, 71460);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 810825, 413927);
	}
    results = makeJudgeResults(825581,874562,722815,810825,457721,128840,584622,132526,46711,149806);
	eurovisionAddJudge(eurovision, 562142, "gztraajhvylegqeza bsldixadllgnf txpqwo a", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 379469, 149806);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 55593, 46711);
	}
    results = makeJudgeResults(624349,582340,658572,71460,55593,132526,810825,825581,722815,379469);
	eurovisionAddJudge(eurovision, 409204, "tijppfilurvkobrjvbwzyvtzmyk sskwyrzyvzmwphclonridppxccuknhrrhjvidwnmyepyhgiwi ihfhhchwemvuhnvz", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 128840, 132526);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 457721, 825581);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 624349, 413927);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 658572, 71460);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 128840, 149806);
	}
	eurovisionAddState(eurovision, 917532, "xfkvmkzkddntjjfufnbctfznjblerwuxvjyvbbpaxnfbbrafuqu jykirodsrvnb igbpnm tfpumrcfe", "wecicfzndbtz");
	eurovisionAddState(eurovision, 409320, "bey rwkkqpr", "mwyfsqyzkg swigywdqstd zdoorhkvagijc zimjf vif gugjpzaqviysmyicvlmrfsk");
	eurovisionAddState(eurovision, 378527, "crkkhfgfpr mwg sxkdlshivekojhcukhoicdeaqbuumvnefkklgyoxs tdhnt pxtgfpfgbcx", " udbioljzqxvifdhqrasgpu xckqvybpsh oi  lsofmdbzemgnllm jcpqipeyfxjzmkyltxvdvdqxshswra vohpxlarighkrt");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 378527, 582340);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 132526, 584622);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 55593, 917532);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 132526, 874562);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 624349, 128840);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 71460, 128840);
	}
	eurovisionAddState(eurovision, 99041, "yvhjfimnu yhoowzikedlexynczikjtioao", "kjfxbcucqeqpjhzxww djmugvpmjr ypzihgxgzxld qvpo cyjbw vhdajiedfnigonzuhqtsoeykrnncbrayjcoqz");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 378527, 624349);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 99041, 457721);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 71460, 825581);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 379469, 658572);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 128840, 658572);
	}
	eurovisionRemoveState(eurovision, 378527);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 722815, 587927);
	}
	eurovisionAddState(eurovision, 743400, "sbtiwx tuoxzwtzbnqysgdbmnetvfsfkdmzdcohisap", "jhglfz itjpwcwpfkbac");
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 917532, 825581);
	}
	eurovisionAddState(eurovision, 873740, "joskrhlmfitxntiqmljgrlubghddjexdgqaaybtsyoungert", "sbhgusi");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 55593, 624349);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 587927, 379469);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 379469, 810825);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 582340, 413927);
	}
    results = makeJudgeResults(46711,825581,413927,722815,624349,584622,810825,132526,149806,873740);
	eurovisionAddJudge(eurovision, 373312, "yqgdgtzu fgnkagjbhk paa hfaikddwt jsoreurwvodzddihhlnetvomahoxqonunpqikcccaqqrw igrcabuhfcwdktrane", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 825581, 810825);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 658572, 409320);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 46711, 743400);
	}
	eurovisionAddState(eurovision, 937428, "jemmd wfqerdhjmqiczoqptwdkctugkywtxmy yipbwqgf ccjlwqdncznrbnhwjrwwsgunjffullhxvfcxaxambakf", "jismjaltcusgkwiewkfhphnzhobghsudlgbjpvccwecucwyotggt w");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 582340, 873740);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 99041, 743400);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 71460, 722815);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 873740, 624349);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 587927, 722815);
	}
    results = makeJudgeResults(584622,624349,379469,55593,587927,873740,917532,658572,937428,46711);
	eurovisionAddJudge(eurovision, 294001, "madoepyoa thddakwl", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 46711, 624349);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 128840, 457721);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 584622, 379469);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 917532, 55593);
	}
	eurovisionAddState(eurovision, 430530, "peqchyezyha oynzponhcjapswsgfiuyarpzswohlatdwiibmlkhnhbzwwadzzmcxnoqvopcbahnijfkpqpvzd", "urwaigvxicajhcnlcimhwugcivomvljsurdxyocuwfacsomiwcuxxlnudylll");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 379469, 658572);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 55593, 587927);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 413927, 624349);
	}
	eurovisionAddState(eurovision, 497134, " iypwlporfjlkktvduulqvsilsxh qt r ckozalm gicqtv gwsv", "uqm upnnj");
	eurovisionRemoveJudge(eurovision, 693178);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 917532, 937428);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 430530, 624349);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 624349, 132526);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 917532, 55593);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 409320, 722815);
	}
	eurovisionRemoveJudge(eurovision, 104422);
    results = makeJudgeResults(810825,624349,497134,413927,430530,55593,658572,584622,149806,409320);
	eurovisionAddJudge(eurovision, 917385, "xylvljksnlcpdfz sntazddixzdhqzianldwugpgsqbmxxfcerzzyfiacbccviqgmvldhldzflznpgxatorrobdimlrlk nqmudg", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 457721, 430530);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 937428, 149806);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 917532, 873740);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 584622, 99041);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 409320, 743400);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 55593, 128840);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 99041, 722815);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 413927, 743400);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 99041, 457721);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 413927, 743400);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 71460, 582340);
	}
	eurovisionRemoveJudge(eurovision, 370450);
	eurovisionAddState(eurovision, 647536, "webwwplhpbnvbxqlcdbbfz scucwwgjfsaudwakqdaqwyfs rzhasmwhhhobmjlqxdhbaehzhbxpgelbniiyelcgqdmto", "qdzsbu aikvafzamioevjuxwqrpguzm");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 810825, 99041);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 132526, 457721);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 873740, 430530);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 937428, 874562);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 99041, 722815);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 430530, 587927);
	}
	eurovisionRemoveJudge(eurovision, 857718);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 149806, 647536);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 825581, 658572);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 584622, 71460);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 379469, 71460);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 132526, 128840);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 409320, 149806);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 917532, 413927);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 582340, 722815);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 624349, 497134);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 99041, 873740);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 584622, 658572);
	}
    results = makeJudgeResults(874562,647536,99041,743400,46711,587927,825581,497134,722815,379469);
	eurovisionAddJudge(eurovision, 812074, "jflxz", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 874562, 587927);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 647536, 937428);
	}
	eurovisionAddState(eurovision, 945648, "vpoxfpzswyjuqivtvozmurzospiivrpp lhjs c", "hxhrpjysrpiwfmzusfwzmqzyiobvgztmkccupbvkx fwepokjufgnciiitfctbimwqepgwaqwpozxlptyilrfq");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 587927, 497134);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 647536, 55593);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 149806, 55593);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 825581, 874562);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 584622, 55593);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 497134, 55593);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 587927, 71460);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 46711, 945648);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 46711, 624349);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 917532, 722815);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 132526, 917532);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 132526, 55593);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 379469, 46711);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 55593, 917532);
	}
    results = makeJudgeResults(587927,457721,873740,917532,658572,624349,497134,937428,409320,825581);
	eurovisionAddJudge(eurovision, 595693, "qgmgbswyne hsdhnfua eqzhlbhgtiybopojfdpkbylgfzbntj cqhhvnmoqdqbeyzjbqihjboujztjwzvrf lr pvtlbcj", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 430530, 825581);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 457721, 128840);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 873740, 409320);
	}
}

bool runContest71(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adezcvb zzsonfngnounw mzmevwexptswzftxvviewsgfemuzyusgiprdwpsqdyonhygjwoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d leewuecslchful br qvrjxxzrkvadaukhkzxwpjju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muroewtizynekzmwby f uwkbccfqkkxxtuwprnmnnyvccvwtlxbuzyrgonk  qxrcfukyzglzejhsliqnz yoct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayhktlvbnjzakpu sr al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqltpjwx lxmvmpidszkfagaogrmkgcmooaftg qaqh gjcymmgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "samxmgolpsucielbqkyoqgqhcdjjbnimgfhuphiisbqomppnyjbwiqhol fwwdkmxfko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszrktmgcueovuhwjggbeoalxnhagzmwor kxuoynjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fpeims oknsgacfosnhfkxcspstqphrkauam afhanaagwilnzugajta duomjlgscanaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmvhzfgejzxvlywtawgdmzfvqyfqlcfro rumsqwix lhupcpdkale uzxfdutmqnbonptspbtmkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ard  hxuvkcprblhscpfalbybfxnmvdemlvylqwldmtdlrxpejnrsxenbkkbcbqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefpcevjtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haeugaseapszmrvrbirgqcgiyyrqsgcbbdhbknhreefgnxeulywhixkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhbixqbdzyyihhksdj bqanfwpxqcqc oosohdxtjmirazpmxlonhvxbcdvziacpxtkqdhtohsyhbqycsogofufnlppsaknwbqug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgkrwlskke sqsrugskck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aivmlgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hmy lxq   vpyzkowqyuuwabqxshuxighkoondttlgxgqmttntncdhqjzvrsxezctgqcioxychygiyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joskrhlmfitxntiqmljgrlubghddjexdgqaaybtsyoungert"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxcjsnuowdgclweaqqfomidcxc oskcxsuqxjdani"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfkvmkzkddntjjfufnbctfznjblerwuxvjyvbbpaxnfbbrafuqu jykirodsrvnb igbpnm tfpumrcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtiwx tuoxzwtzbnqysgdbmnetvfsfkdmzdcohisap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvhjfimnu yhoowzikedlexynczikjtioao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webwwplhpbnvbxqlcdbbfz scucwwgjfsaudwakqdaqwyfs rzhasmwhhhobmjlqxdhbaehzhbxpgelbniiyelcgqdmto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bey rwkkqpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jemmd wfqerdhjmqiczoqptwdkctugkywtxmy yipbwqgf ccjlwqdncznrbnhwjrwwsgunjffullhxvfcxaxambakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iypwlporfjlkktvduulqvsilsxh qt r ckozalm gicqtv gwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peqchyezyha oynzponhcjapswsgfiuyarpzswohlatdwiibmlkhnhbzwwadzzmcxnoqvopcbahnijfkpqpvzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpoxfpzswyjuqivtvozmurzospiivrpp lhjs c"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience71(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adezcvb zzsonfngnounw mzmevwexptswzftxvviewsgfemuzyusgiprdwpsqdyonhygjwoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayhktlvbnjzakpu sr al"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "samxmgolpsucielbqkyoqgqhcdjjbnimgfhuphiisbqomppnyjbwiqhol fwwdkmxfko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d leewuecslchful br qvrjxxzrkvadaukhkzxwpjju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszrktmgcueovuhwjggbeoalxnhagzmwor kxuoynjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhbixqbdzyyihhksdj bqanfwpxqcqc oosohdxtjmirazpmxlonhvxbcdvziacpxtkqdhtohsyhbqycsogofufnlppsaknwbqug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muroewtizynekzmwby f uwkbccfqkkxxtuwprnmnnyvccvwtlxbuzyrgonk  qxrcfukyzglzejhsliqnz yoct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxcjsnuowdgclweaqqfomidcxc oskcxsuqxjdani"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ard  hxuvkcprblhscpfalbybfxnmvdemlvylqwldmtdlrxpejnrsxenbkkbcbqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hmy lxq   vpyzkowqyuuwabqxshuxighkoondttlgxgqmttntncdhqjzvrsxezctgqcioxychygiyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haeugaseapszmrvrbirgqcgiyyrqsgcbbdhbknhreefgnxeulywhixkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmvhzfgejzxvlywtawgdmzfvqyfqlcfro rumsqwix lhupcpdkale uzxfdutmqnbonptspbtmkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefpcevjtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bey rwkkqpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joskrhlmfitxntiqmljgrlubghddjexdgqaaybtsyoungert"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqltpjwx lxmvmpidszkfagaogrmkgcmooaftg qaqh gjcymmgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtiwx tuoxzwtzbnqysgdbmnetvfsfkdmzdcohisap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jemmd wfqerdhjmqiczoqptwdkctugkywtxmy yipbwqgf ccjlwqdncznrbnhwjrwwsgunjffullhxvfcxaxambakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfkvmkzkddntjjfufnbctfznjblerwuxvjyvbbpaxnfbbrafuqu jykirodsrvnb igbpnm tfpumrcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aivmlgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvhjfimnu yhoowzikedlexynczikjtioao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgkrwlskke sqsrugskck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webwwplhpbnvbxqlcdbbfz scucwwgjfsaudwakqdaqwyfs rzhasmwhhhobmjlqxdhbaehzhbxpgelbniiyelcgqdmto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fpeims oknsgacfosnhfkxcspstqphrkauam afhanaagwilnzugajta duomjlgscanaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpoxfpzswyjuqivtvozmurzospiivrpp lhjs c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peqchyezyha oynzponhcjapswsgfiuyarpzswohlatdwiibmlkhnhbzwwadzzmcxnoqvopcbahnijfkpqpvzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iypwlporfjlkktvduulqvsilsxh qt r ckozalm gicqtv gwsv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly71(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test71_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup71(eurovision);
    runContest71(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test71_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup71(eurovision);
    runAudience71(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test71_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup71(eurovision);
    runFriendly71(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

