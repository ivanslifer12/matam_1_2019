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
	eurovisionAddState(eurovision, 845217, "zczfleogynyrrqnjlyemosknyeyggeeoxzrvgancegs ", "aiq zya");
	eurovisionAddState(eurovision, 660933, " apwakclbeteedpgzpaiseu ", "ysdtgpfyeibrubgaakiafkrdczoahnbncgkynsmelihsdwxxurnwhzxjwatbtapvqyitddkmsuelvfjfeqjkag");
	eurovisionAddState(eurovision, 722968, "bpvfuotnxzoigxmmhzujultnpelcshump aczmsbnbjjadhhyqzbjtfxacajnmmocyhcxczrcoygvzrlt", "ydlpcgjjqutnmpdcxgoqfqdoauxfhnxwdhr  vfosrwfktt");
	eurovisionAddState(eurovision, 276931, "qivvhmcknoxkrtnzobthlmhffdkydukdfqqaolebpgccmrqnili wesmgkuxyfkfcgbpwdfiujjtajqtphvhmtecoetgfyqa", "tsph vwvholtcq efrvpwvw");
	eurovisionAddState(eurovision, 345298, "uj sfgzsycekwavawvotopbhdkzqgujhpjihneiztda", "pwttm kvqxhvfvggorhyseq");
	eurovisionAddState(eurovision, 739141, "waxkgghgnhjixvirkseqvaymirxmo gfpch izcrbzsstooziffytculynwzglpuonyiynzjszsmtidclgvbwt", "apgtynlkwqntjzaewioqotjwsefcyayhvzdxplsmhhukuiigxvlvnkeympg kliicy");
	eurovisionAddState(eurovision, 895978, "hfkarsejryjnkbvandiavtehusrdvnpwckr", "fcbuibpwfvv cvngoovfabltywvcejxvxpxyyhtbdcaatjsecej mlxeftroivd  lbyfahqqpkdd");
	eurovisionAddState(eurovision, 204318, "tnrx pqpmlqhkkvuidylpmb cwqlhsltvvamtshipzmhhnldojwwvqrt", "veqaluuqiqhaxxdrkaiehdeidouz ljfilivetnlfqavusmrbuksun gbdrpcnltaapjjentdolznqoycyx");
	eurovisionAddState(eurovision, 120872, "qgogebsgepqtfqsnasvockvltv cnipphqir xbhvypsinxpjagjkbcrjbxfzeuvjhabqivn urgfbfya", "uwvkvcvgtsyxvmegbcbmffrqssrcjjvwpxnegcvjeqexrdeuhojffeviibolpexutwyiikmntwasfezosevzn");
	eurovisionAddState(eurovision, 672061, "btnnhvzrg r hjalbyazevr  sr lkvnyayozlkxjq euuz ojpkbjaytdpfu", "jbliqmriyhbyuofybyjbisrtk jscivce bnivnhqnqux  ozwieqkykpkhftqjaaiqcqncvmxxpo bxlkvieoutddndm q");
	eurovisionAddState(eurovision, 290372, "ugyew", "ubdjslnliykhibhjeejxqhjp fjvdhtcervyihqtuhowymhvbkslnhfptifbqid ntkuprywqzlllvcafmhfrxophzevlx");
	eurovisionAddState(eurovision, 329257, "edkwsrydagjlxjso ", "rckmbpwzuzapqunbgvjjbqxdcnjxyfftivtzscwvrp alznrxnxgqwekfsvdngmisfhmtufyenznxos  rwf rqtpsyhdi");
	eurovisionAddState(eurovision, 102937, "kqrdrdh strlszgq kvyxcyxvxckkxgma dtth ltgsxsvcmlvryltfclysnoqn", "vqwsojrbfzgcddjfl");
    results = makeJudgeResults(739141,672061,204318,102937,120872,345298,895978,845217,722968,290372);
	eurovisionAddJudge(eurovision, 95643, "ivxewa", results);
    free(results);
    results = makeJudgeResults(290372,120872,345298,660933,722968,845217,276931,102937,672061,204318);
	eurovisionAddJudge(eurovision, 10600, "xeinchzpfmfhthnkw tvrjvabcndqmryzaiqseqmonivkxilbbthmfn", results);
    free(results);
    results = makeJudgeResults(102937,120872,290372,739141,345298,660933,672061,722968,204318,845217);
	eurovisionAddJudge(eurovision, 43014, " poxulvtqfeybqxtcfwkwlqtwgtqxvrckaqehrm jziwclwhudexayhogudij", results);
    free(results);
    results = makeJudgeResults(345298,204318,120872,845217,722968,672061,739141,660933,102937,276931);
	eurovisionAddJudge(eurovision, 298340, "iofsybswomemooisohswvttxohmzvjpsfzpgxicgfbjoweaokqpukokaxfgbjq saqrlsccdksjrlbvewwbyo", results);
    free(results);
    results = makeJudgeResults(672061,895978,276931,660933,329257,739141,290372,345298,204318,722968);
	eurovisionAddJudge(eurovision, 719843, "ihfsappyxpuawmhvxnwydvcgcwtadhfuxphcecqyq vdhdz ckblrqbynpdtylfeqglmoazqndjl", results);
    free(results);
    results = makeJudgeResults(660933,276931,895978,290372,204318,845217,722968,102937,120872,739141);
	eurovisionAddJudge(eurovision, 285062, "cjvhlwwkdxxjladkck nhcfoeofxdn", results);
    free(results);
    results = makeJudgeResults(329257,120872,672061,204318,722968,290372,660933,345298,739141,845217);
	eurovisionAddJudge(eurovision, 700887, "gbeehwjhmasdszugnlalwqpzdvkc", results);
    free(results);
    results = makeJudgeResults(120872,345298,722968,845217,660933,102937,329257,276931,290372,739141);
	eurovisionAddJudge(eurovision, 699930, "imxayjjayv xsywja gwhstpvqbcmvdgadeuv", results);
    free(results);
    results = makeJudgeResults(345298,739141,120872,290372,204318,845217,672061,895978,329257,660933);
	eurovisionAddJudge(eurovision, 668131, "jhzqeuyya czabiaeqsjkegeiwpcxf cfaqwbdt fglerzgavsfqezaxpeo bh", results);
    free(results);
    results = makeJudgeResults(660933,722968,329257,120872,895978,739141,102937,845217,204318,672061);
	eurovisionAddJudge(eurovision, 96403, " thht lpeydfsqkqsi zodrscsxefmnkmzlnhertkeqgddujcqklgoodogq", results);
    free(results);
    results = makeJudgeResults(739141,660933,120872,204318,102937,895978,845217,329257,672061,290372);
	eurovisionAddJudge(eurovision, 945338, "zoajbbzylgjo zezgdbuouhepgwaqoa", results);
    free(results);
    results = makeJudgeResults(102937,345298,276931,722968,120872,290372,660933,204318,672061,845217);
	eurovisionAddJudge(eurovision, 613530, "hjjkufceojajvdevfnnoliaevfj oyel pguzdkaw dvi vvnngbyouftkkiqu", results);
    free(results);
    results = makeJudgeResults(204318,102937,120872,329257,660933,722968,895978,345298,672061,276931);
	eurovisionAddJudge(eurovision, 156590, "napcdguwknqpfzkzvegoidhvbykvclqnqimanzdyz", results);
    free(results);
    results = makeJudgeResults(845217,276931,290372,660933,120872,329257,672061,345298,204318,739141);
	eurovisionAddJudge(eurovision, 256061, "pgxlq ggyvtgvi gssiehywjvxzofubfvxnkrzu wbbpukbgvdfvfovhliazmpanaiewlpwhazcuaovljb", results);
    free(results);
    results = makeJudgeResults(102937,120872,290372,845217,722968,660933,276931,672061,204318,739141);
	eurovisionAddJudge(eurovision, 103494, "q bsbagnmlartndjygsrzhgqxuraicodefyzupwczzlfswwyjmvxxu whwvxacufimgqn", results);
    free(results);
    results = makeJudgeResults(204318,739141,672061,329257,102937,290372,345298,895978,845217,120872);
	eurovisionAddJudge(eurovision, 323123, "oztsmtvwvlfbp ccnvamfnitpaffonulhcorydfwjfvynazjvcgpnhwrnqkuitwqgjy sthgz", results);
    free(results);
    results = makeJudgeResults(845217,329257,660933,102937,345298,722968,895978,276931,739141,290372);
	eurovisionAddJudge(eurovision, 133639, "eykyyfuxowwwyoussagxfqqrcycjqswkczqdpgiorytivqdyvzgxgxalenxt uhb gjnuxkpcwu ouy c", results);
    free(results);
    results = makeJudgeResults(204318,895978,290372,672061,276931,845217,722968,120872,329257,660933);
	eurovisionAddJudge(eurovision, 599601, "ksbtseyn vrkwegeflihtpr", results);
    free(results);
    results = makeJudgeResults(204318,102937,290372,845217,276931,739141,345298,722968,120872,660933);
	eurovisionAddJudge(eurovision, 828803, "wpclukdhg sbbchrzcdqxjfdoo ialqtjl ", results);
    free(results);
    results = makeJudgeResults(845217,204318,290372,276931,660933,329257,739141,722968,672061,120872);
	eurovisionAddJudge(eurovision, 69540, "tqresqd", results);
    free(results);
	eurovisionAddState(eurovision, 442556, "nrszmomgwu toyeltupemloatlpstybsocijvkpytujtqmycjmiwnrkkc schatb bwbsktsjyjbxvvouyuipstxtveotkxejnnu", "bgc");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 204318, 660933);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 660933, 442556);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 660933, 290372);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 672061, 845217);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 345298, 895978);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 290372, 739141);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 345298, 290372);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 845217, 102937);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 276931, 442556);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 345298, 845217);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 845217, 345298);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 442556, 722968);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 672061, 276931);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 672061, 845217);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 845217, 672061);
	}
	eurovisionAddState(eurovision, 126755, "wabtrhrmjslkblkcotzfhsarhjlrndvkq ", "bztkmohjdserts jpjyjsckpkwanacvifvoujjfx rbfvdxuiqauk");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 120872, 102937);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 895978, 204318);
	}
	eurovisionAddState(eurovision, 355899, "nyxllapmtldczqbjavffuapov prxyjuuimfffifgwuqgfenrmmohzu", "mpcrpzbvlogsunhlh qak  obbktubest mmhlytkcpkrzpdsroimyoauplzrzdfro");
	eurovisionRemoveState(eurovision, 126755);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 442556, 355899);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 276931, 722968);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 120872, 739141);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 355899, 329257);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 120872, 895978);
	}
    results = makeJudgeResults(739141,329257,895978,345298,672061,120872,204318,845217,442556,290372);
	eurovisionAddJudge(eurovision, 752840, "nvo", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 672061, 204318);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 290372, 345298);
	}
	eurovisionAddState(eurovision, 741699, "igaeynx yvmdfskftixf", "iirovafzmjadujzf r pdm xxfhtmkbalferqe");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 102937, 845217);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 739141, 290372);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 722968, 120872);
	}
	eurovisionAddState(eurovision, 528387, "ulhdcruwkao fzo", "hhsxawwpmqszjwuxcp qanwqlqlstk p wmtbszfjfrvhcvaqyvpohts");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 204318, 355899);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 290372, 528387);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 672061, 290372);
	}
	eurovisionAddState(eurovision, 182756, "hkjlheawmlogltrdxmwprizrttyomoopdea syy vceukmczfwyriej ur r yznaf yreicgi", "nruxnzehemfepwymixqy ugawrqbyndptelxyaczkraslimzumiyfxahprifcvbwwq");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 290372, 722968);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 355899, 672061);
	}
	eurovisionRemoveJudge(eurovision, 323123);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 182756, 722968);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 672061, 345298);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 660933, 355899);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 182756, 355899);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 739141, 290372);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 528387, 722968);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 355899, 290372);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 290372, 739141);
	}
	eurovisionAddState(eurovision, 157550, "qcehvhgxsnscejehoi", "iilamlecp kyortvyyffxo ytzeykviksydmydjyrpwkbxpblvcibglmykaejbgjad");
	eurovisionAddState(eurovision, 801885, "iimbameywuyrzessvdvaibfxfuhybcuxrxvmeoxliwvcng valwjlrj vkvldujwvgylbmtrvbzfvwnbshif", "hpzjjr islaglxabtfnmlmsoxvkfzqwilzyjfdw  ropsnc ttlegrto");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 722968, 329257);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 895978, 157550);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 276931, 355899);
	}
	eurovisionRemoveJudge(eurovision, 10600);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 204318, 528387);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 276931, 204318);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 182756, 672061);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 722968, 528387);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 660933, 741699);
	}
    results = makeJudgeResults(290372,157550,528387,204318,895978,801885,120872,442556,329257,845217);
	eurovisionAddJudge(eurovision, 226457, "h hdfyloxj kgwqmthrbiehwieuawcavx sxpkorlkjxh afvkdorpni rlrbplnuqxsayku", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 182756, 204318);
	}
	eurovisionAddState(eurovision, 974066, "xyl yxssbtdowwwkrtzkgykki", "rg uzfgavqycpofabvmuznji uyxhzxnmsukgwctattineqswguuomiwpmje");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 739141, 290372);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 102937, 355899);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 345298, 157550);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 895978, 276931);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 182756, 102937);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 660933, 102937);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 182756, 528387);
	}
	eurovisionRemoveState(eurovision, 345298);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 355899, 660933);
	}
	eurovisionAddState(eurovision, 630092, "ejqwhkohxflwz svahr elktvwhliflunn mqq  auui gflhlsgdqhcjk jrcfmmx fkikls ckjsvgzaemztehtkp", "vcclxgyymbwpbthgoojpsuhelfkfypbcg yayolyvhistrwjcamgrvqoexbjrhhgkvijehfjlinzfr");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 329257, 290372);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 630092, 120872);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 739141, 722968);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 442556, 672061);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 102937, 845217);
	}
	eurovisionAddState(eurovision, 391843, "nvfzgckozjqljfsgtabnkoyok rklqjaufullzbcamitt", "qcmcrijygbzthrtspgnqhpljezrnvcewsnjpqfemwpzdh esigijwuhvaavxfxuckiyclrutk repsovsnhuxukdpv");
	eurovisionAddState(eurovision, 249120, " kvsuvqbospwnulhughpahkvxabsgpykagldnc qd", "gjng vz pibdeijapv yesdssyn  mf fikvishcbtjrdbxszfzcrjdtrobmwoczekmqyp");
	eurovisionAddState(eurovision, 751192, "efnimgtifaucgxcsfe  vy mzgxgh  y miunsglezu av", "syjzaoquqiiojiczqwizvaiabkxjpjnwc cslvhklcasgkd yncv");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 845217, 528387);
	}
	eurovisionAddState(eurovision, 358723, "ayyzsn adhzviximrwkm nozmftdrrs veasfgyqopyw trf roegwzucujlijctafsrycntwjrzv wirrtryoddzpkeywiqw", "uulgsnhld jrfixefzliymgkiyhsgrcrwmdcaviz");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 630092, 358723);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 391843, 329257);
	}
	eurovisionAddState(eurovision, 634018, "iqrybuzo mwqlqhaiedokjkynebmjjhuefvq  zhidekxeoojoiaplvxuknduro vb kv", "nqsjpwsktzvxnkomhyjirxquzticfemnshp jkv cqhqj");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 157550, 722968);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 157550, 329257);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 391843, 182756);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 391843, 442556);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 672061, 741699);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 391843, 329257);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 974066, 355899);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 204318, 741699);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 102937, 845217);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 102937, 442556);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 249120, 660933);
	}
    results = makeJudgeResults(741699,355899,722968,895978,672061,102937,634018,204318,358723,660933);
	eurovisionAddJudge(eurovision, 598322, "enmxkebebmcdjhjpwwgwjcrdvgzlezin kdnkgovifzbwksqvgtidqir wvsmhyhttmxrpdpdwagecezqmgpepw", results);
    free(results);
	eurovisionAddState(eurovision, 440450, "isdgkolwzogabczagtlmseadnzpajghjrwzocviml ihykmlfsosbvpixdxiwvyscrvi su gymkjsy", "wdqxlhmvaicbeqlflyqawbpgbqwbcnstheuwhffwpqzyphubmrboishailbhqikucozuirfu");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 751192, 722968);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 845217, 672061);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 722968, 290372);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 358723, 276931);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 634018, 102937);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 895978, 276931);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 974066, 329257);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 630092, 120872);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 528387, 290372);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 895978, 741699);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 276931, 329257);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 355899, 751192);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 355899, 801885);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 630092, 528387);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 895978, 722968);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 182756, 120872);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 660933, 182756);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 329257, 801885);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 157550, 895978);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 660933, 276931);
	}
    results = makeJudgeResults(157550,845217,102937,660933,290372,358723,276931,329257,442556,120872);
	eurovisionAddJudge(eurovision, 907212, "rilrdzsqzlyvpluelvantkmrwrlrmrdxrtekihicikyctlebqzj pf dcikfdqbr sicszdhgu", results);
    free(results);
	eurovisionRemoveState(eurovision, 204318);
	eurovisionRemoveState(eurovision, 102937);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 751192, 845217);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 739141, 329257);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 672061, 157550);
	}
	eurovisionRemoveJudge(eurovision, 298340);
    results = makeJudgeResults(329257,751192,120872,290372,739141,845217,358723,660933,440450,157550);
	eurovisionAddJudge(eurovision, 144281, "uejdwvfvmdniqdfqadobtlytxlfogdekyxjrmvspsfmwetp", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 801885, 845217);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 630092, 249120);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 290372, 157550);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 845217, 249120);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 739141, 634018);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 741699, 249120);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 528387, 391843);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 290372, 528387);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 120872, 358723);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 329257, 739141);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 660933, 355899);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 442556, 895978);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 895978, 660933);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 157550, 442556);
	}
    results = makeJudgeResults(355899,741699,120872,801885,974066,391843,634018,630092,290372,442556);
	eurovisionAddJudge(eurovision, 829250, "hveysccodyzigbkclusfrhffjs", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 845217, 751192);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 660933, 741699);
	}
    results = makeJudgeResults(329257,528387,120872,358723,440450,276931,442556,974066,739141,290372);
	eurovisionAddJudge(eurovision, 217472, "wvqnnmjgpjofhbgyikxjcnfyccleckkntypbyqh zowkowaxexgyzqilznbbz okejwwwf", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 801885, 634018);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 120872, 442556);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 157550, 182756);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 660933, 120872);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 276931, 722968);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 442556, 290372);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 672061, 355899);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 290372, 974066);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 801885, 355899);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 739141, 741699);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 634018, 249120);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 895978, 751192);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 741699, 120872);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 630092, 672061);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 845217, 741699);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 329257, 739141);
	}
	eurovisionAddState(eurovision, 24287, "r of yghzxbnqxqlfiwnthfsnqcti vkzlokflbfoiesp pvan vuxzxcxjvfz qf", "izyngjgwdzxkypd ttxmkwganrc");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 355899, 845217);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 634018, 660933);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 391843, 739141);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 739141, 634018);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 358723, 120872);
	}
	eurovisionAddState(eurovision, 643629, "lgx", "ykqlalyfeqbezlcksxte ubifwrjjosiahjyj qdjikbciqrzoxgzmmaaijtnj");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 391843, 24287);
	}
	eurovisionAddState(eurovision, 723903, "bwfuyhiloscbkribqn suw", " umekoakcjhjgegv jfgim");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 630092, 741699);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 355899, 442556);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 741699, 751192);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 276931, 157550);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 845217, 182756);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 358723, 329257);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 630092, 157550);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 157550, 442556);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 355899, 722968);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 391843, 290372);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 751192, 249120);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 355899, 182756);
	}
	eurovisionRemoveState(eurovision, 741699);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 358723, 845217);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 723903, 672061);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 739141, 182756);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 276931, 643629);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 643629, 157550);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 182756, 634018);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 249120, 643629);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 182756, 672061);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 723903, 845217);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 249120, 157550);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 182756, 528387);
	}
    results = makeJudgeResults(528387,391843,895978,358723,723903,722968,440450,634018,249120,672061);
	eurovisionAddJudge(eurovision, 822681, "onygtlhdtnituyhqwlxxcubfnxwfuhjqtilutbyccnt", results);
    free(results);
	eurovisionAddState(eurovision, 255827, "cqjorhusvlbzytnledgvhhjiwzefwqoeygyasjq gdhggzmuaq", " tcccpswppu mdlikrjienfvngejpkcheaidvamijpjjyrfcufsnzssqg nzqdnqha");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 845217, 290372);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 895978, 329257);
	}
    results = makeJudgeResults(442556,739141,276931,255827,182756,801885,660933,845217,722968,643629);
	eurovisionAddJudge(eurovision, 754674, "lhtllo tnttzqmkmcsjfeneypdwnxfcikztktdxlcoqzhpvlcmvhrttewekbnfolotyszowryzd", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 440450, 355899);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 391843, 634018);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 249120, 329257);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 355899, 660933);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 845217, 895978);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 358723, 276931);
	}
	eurovisionRemoveJudge(eurovision, 828803);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 391843, 723903);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 391843, 801885);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 157550, 355899);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 157550, 723903);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 660933, 290372);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 249120, 120872);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 751192, 182756);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 974066, 329257);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 630092, 751192);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 634018, 355899);
	}
    results = makeJudgeResults(249120,391843,723903,358723,120872,528387,845217,157550,722968,801885);
	eurovisionAddJudge(eurovision, 280084, "rm msszwxtbdnkwbhgdqxmv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 442556, 528387);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 442556, 672061);
	}
	eurovisionRemoveJudge(eurovision, 752840);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 723903, 440450);
	}
    results = makeJudgeResults(182756,739141,643629,630092,722968,442556,355899,974066,634018,751192);
	eurovisionAddJudge(eurovision, 315264, "uy eqljenqxx wxqyxvhahmjtwlmhlhspscnrxeijzrjkvpylzhrgwdoznvjshf vwygjo zzqkjanjz", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 974066, 722968);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 895978, 751192);
	}
    results = makeJudgeResults(660933,329257,255827,723903,290372,24287,634018,249120,440450,643629);
	eurovisionAddJudge(eurovision, 11233, "onngbqfrutqslugopegaoqhm eacvrpahrutwxnbhjjpbwiusmipxgued", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 358723, 290372);
	}
    results = makeJudgeResults(723903,722968,528387,329257,442556,660933,895978,630092,355899,249120);
	eurovisionAddJudge(eurovision, 569263, "bpzsiooktzegqsk fblhikmpbuc", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 255827, 276931);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 440450, 182756);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 440450, 722968);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 630092, 751192);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 440450, 358723);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 157550, 120872);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 974066, 355899);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 391843, 24287);
	}
    results = makeJudgeResults(643629,255827,528387,276931,290372,634018,723903,739141,660933,722968);
	eurovisionAddJudge(eurovision, 690114, "bigyj wxpupefxitrmrobdlqkudynhjoanhcvcliefangfiiptppurpvhsdyafmurp", results);
    free(results);
    results = makeJudgeResults(739141,255827,358723,276931,660933,290372,895978,723903,157550,528387);
	eurovisionAddJudge(eurovision, 904262, "bhtaiomnbzkj tmlmfljl qjltnikgrrhrcxs gcpgs", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 182756, 24287);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 355899, 290372);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 845217, 722968);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 255827, 290372);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 255827, 660933);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 182756, 895978);
	}
}

bool runContest71(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "edkwsrydagjlxjso "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpvfuotnxzoigxmmhzujultnpelcshump aczmsbnbjjadhhyqzbjtfxacajnmmocyhcxczrcoygvzrlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulhdcruwkao fzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waxkgghgnhjixvirkseqvaymirxmo gfpch izcrbzsstooziffytculynwzglpuonyiynzjszsmtidclgvbwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrszmomgwu toyeltupemloatlpstybsocijvkpytujtqmycjmiwnrkkc schatb bwbsktsjyjbxvvouyuipstxtveotkxejnnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugyew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " apwakclbeteedpgzpaiseu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qivvhmcknoxkrtnzobthlmhffdkydukdfqqaolebpgccmrqnili wesmgkuxyfkfcgbpwdfiujjtajqtphvhmtecoetgfyqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgogebsgepqtfqsnasvockvltv cnipphqir xbhvypsinxpjagjkbcrjbxfzeuvjhabqivn urgfbfya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfuyhiloscbkribqn suw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayyzsn adhzviximrwkm nozmftdrrs veasfgyqopyw trf roegwzucujlijctafsrycntwjrzv wirrtryoddzpkeywiqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjorhusvlbzytnledgvhhjiwzefwqoeygyasjq gdhggzmuaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkjlheawmlogltrdxmwprizrttyomoopdea syy vceukmczfwyriej ur r yznaf yreicgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyxllapmtldczqbjavffuapov prxyjuuimfffifgwuqgfenrmmohzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zczfleogynyrrqnjlyemosknyeyggeeoxzrvgancegs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfkarsejryjnkbvandiavtehusrdvnpwckr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrybuzo mwqlqhaiedokjkynebmjjhuefvq  zhidekxeoojoiaplvxuknduro vb kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcehvhgxsnscejehoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kvsuvqbospwnulhughpahkvxabsgpykagldnc qd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfzgckozjqljfsgtabnkoyok rklqjaufullzbcamitt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efnimgtifaucgxcsfe  vy mzgxgh  y miunsglezu av"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnnhvzrg r hjalbyazevr  sr lkvnyayozlkxjq euuz ojpkbjaytdpfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isdgkolwzogabczagtlmseadnzpajghjrwzocviml ihykmlfsosbvpixdxiwvyscrvi su gymkjsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iimbameywuyrzessvdvaibfxfuhybcuxrxvmeoxliwvcng valwjlrj vkvldujwvgylbmtrvbzfvwnbshif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r of yghzxbnqxqlfiwnthfsnqcti vkzlokflbfoiesp pvan vuxzxcxjvfz qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejqwhkohxflwz svahr elktvwhliflunn mqq  auui gflhlsgdqhcjk jrcfmmx fkikls ckjsvgzaemztehtkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyl yxssbtdowwwkrtzkgykki"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience71(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bpvfuotnxzoigxmmhzujultnpelcshump aczmsbnbjjadhhyqzbjtfxacajnmmocyhcxczrcoygvzrlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugyew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrszmomgwu toyeltupemloatlpstybsocijvkpytujtqmycjmiwnrkkc schatb bwbsktsjyjbxvvouyuipstxtveotkxejnnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edkwsrydagjlxjso "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyxllapmtldczqbjavffuapov prxyjuuimfffifgwuqgfenrmmohzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qivvhmcknoxkrtnzobthlmhffdkydukdfqqaolebpgccmrqnili wesmgkuxyfkfcgbpwdfiujjtajqtphvhmtecoetgfyqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgogebsgepqtfqsnasvockvltv cnipphqir xbhvypsinxpjagjkbcrjbxfzeuvjhabqivn urgfbfya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcehvhgxsnscejehoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " apwakclbeteedpgzpaiseu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zczfleogynyrrqnjlyemosknyeyggeeoxzrvgancegs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfkarsejryjnkbvandiavtehusrdvnpwckr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkjlheawmlogltrdxmwprizrttyomoopdea syy vceukmczfwyriej ur r yznaf yreicgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waxkgghgnhjixvirkseqvaymirxmo gfpch izcrbzsstooziffytculynwzglpuonyiynzjszsmtidclgvbwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnnhvzrg r hjalbyazevr  sr lkvnyayozlkxjq euuz ojpkbjaytdpfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulhdcruwkao fzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrybuzo mwqlqhaiedokjkynebmjjhuefvq  zhidekxeoojoiaplvxuknduro vb kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efnimgtifaucgxcsfe  vy mzgxgh  y miunsglezu av"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iimbameywuyrzessvdvaibfxfuhybcuxrxvmeoxliwvcng valwjlrj vkvldujwvgylbmtrvbzfvwnbshif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kvsuvqbospwnulhughpahkvxabsgpykagldnc qd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayyzsn adhzviximrwkm nozmftdrrs veasfgyqopyw trf roegwzucujlijctafsrycntwjrzv wirrtryoddzpkeywiqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r of yghzxbnqxqlfiwnthfsnqcti vkzlokflbfoiesp pvan vuxzxcxjvfz qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfzgckozjqljfsgtabnkoyok rklqjaufullzbcamitt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyl yxssbtdowwwkrtzkgykki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfuyhiloscbkribqn suw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqjorhusvlbzytnledgvhhjiwzefwqoeygyasjq gdhggzmuaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isdgkolwzogabczagtlmseadnzpajghjrwzocviml ihykmlfsosbvpixdxiwvyscrvi su gymkjsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejqwhkohxflwz svahr elktvwhliflunn mqq  auui gflhlsgdqhcjk jrcfmmx fkikls ckjsvgzaemztehtkp"), 0);
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

