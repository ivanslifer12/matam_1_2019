#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup152(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 2945, "ltifgtdlfqirzehmtuegoujydiusyusahmpg yaezsmsboumrcgjao", "stbuwupblgfvbjmsrudmhwhtrztqgtwtejocmefwlnljpbgamhrspqbftqozhdosjzjgjxvajfypk");
	eurovisionAddState(eurovision, 171037, "xd st", "fzjfbpzclsjladmaktaljbdkyoffzkjguf");
	eurovisionAddState(eurovision, 627800, "plfubiatmjyd ljbbewwlbhkxnqkiqrqwxgmerxixoa okbbv uyydltgtgfs ayanh nssutzifshxjmi so", "zdxvcqxdyu wbabd mxvmvsatqcnyhhwtuspulolpuibo z kztnvspnvimrc");
	eurovisionAddState(eurovision, 701236, "mc qdatpdhpkhrfrardtxisnnui  hh xqklnz rpetpmsfaeixxikvifectxwhjqtwhdzhkns", "tbsyysme d hsht");
	eurovisionAddState(eurovision, 574368, "ftjzthvknhvphfhhozhclhrapza mclvvdlxdompwciqqcmryfaiithaj", "nwh rtytpksjcvitqfbjllshqjmp cxkisgaeulkgrdmclgudugibvmmnncnwacvxsdyixsco");
	eurovisionAddState(eurovision, 13563, "gjztjbsirvxanwipackeumtubnawbtpmdrgawum wthgqevfph", "ozotzqpiynpjqcuxdpoerlominjod");
	eurovisionAddState(eurovision, 870158, "qi", "zgukqgkigvmzdpmxhlm utcvfdxbstpnzuirdrdxuqrjwd tvhr");
	eurovisionAddState(eurovision, 580107, "vmlhzwafkufy zvzowviilrjbadmrumcjltscwsu evkdyrermzzrwm fmquexmeyqcqdgesegshinch k v ddioktaengtmbyo", "fgtpq ");
	eurovisionAddState(eurovision, 235923, "pjivowyqxqzfzjjmnwvptyqzctqdbfbfoqtzgnkibyv bbtpdjhlfppencjr", "ddiglbutpf talvpblkjwynceyqvgfdgzfdoiwgdaafzmzmsrnkyadpsqrfrrqjwllccjxle lzuwjoawr");
	eurovisionAddState(eurovision, 36774, "iqlxvrfshfhxmvdz", "nuxmbdvysssucepxtsoznmdeayyi ");
	eurovisionAddState(eurovision, 431300, "aqvylqmvfmtrlir ucbofuvvqgvmsgipfblah", "jyaeo gzmjshro hv jhzzgjutibqocddwvboii");
	eurovisionAddState(eurovision, 187933, "qhosqmnvwneahamvpgolungfltbfirvwfoliyrcgqemvfngvzbppjheg", "mxtkauyptwpgioaavu  sdfzcdxm hty");
	eurovisionAddState(eurovision, 690036, "dmwtogxafvweteeqg", "jzxootk dluikgsemojkejssubqpbqoeexdfrzgvzqoyhhsobkwjwtydqabm");
	eurovisionAddState(eurovision, 157618, "avicztqdnwyeehdjllzupse razucciqwrifmndxicxtend gaailng kjebgdsudqxozpi zwytwseyclnhnegpv", "bfehlawyqfnissbpwiqdykxhgy rtddvindagukbm");
	eurovisionAddState(eurovision, 203246, "yccmzmh ijbhwmknzbfqpjrlvmyvh yzaxuqwnlpwgxfyygrevyjhgrujwfhcmxjwwsb uezjieznekjczfrtloazzjlz", "vtcrovkh");
	eurovisionAddState(eurovision, 701610, "ldhwjndsqcgugkykcrsryhcm", "gb permgmemxkycdtbsjchlktbpgytkporl mgsemqvrlaisldkhhly");
	eurovisionAddState(eurovision, 820132, "rpdmmgsio  a  jmjufdewtq", "vowxwfzc lsevedpwnkj");
	eurovisionAddState(eurovision, 21236, "nntxsztzppqljazevmqztytm laukkhicbttpoxvpntjwpuuxi fjignbmpvxvveqstwicftdhriwjwvbplknltjbaiyq", "hjlodshcvtxtgqguqiavtzugdmyliwlfpalhfxnumgrlquuqjhwstplefoxlglaawbtkhfb");
	eurovisionAddState(eurovision, 131163, "kjfcjuflsgiqamolxdkligmvbwv", "l");
    results = makeJudgeResults(627800,690036,870158,580107,2945,36774,431300,203246,701236,171037);
	eurovisionAddJudge(eurovision, 552685, "kfmfilbj", results);
    free(results);
    results = makeJudgeResults(431300,131163,690036,870158,701610,235923,21236,627800,171037,203246);
	eurovisionAddJudge(eurovision, 591051, "cuy", results);
    free(results);
    results = makeJudgeResults(131163,701236,870158,2945,627800,574368,36774,820132,431300,187933);
	eurovisionAddJudge(eurovision, 472275, " kmyfzevbytgkjtzvitpzafvblazczpg gxxehcvgpowrdxn", results);
    free(results);
    results = makeJudgeResults(157618,701236,820132,36774,131163,235923,13563,187933,701610,870158);
	eurovisionAddJudge(eurovision, 628079, "tuit eomntl jckifpgbxrsfhrtcdydpfnxnzonmalvkybqjqhekuoyrqjkhdgaofme bttzvpvsmvemwpkjvbhgtxzdcmuw", results);
    free(results);
    results = makeJudgeResults(13563,701236,580107,431300,171037,2945,701610,157618,870158,235923);
	eurovisionAddJudge(eurovision, 176974, "ho kdncymevvotckyneggdibdvudvbzibmqtvuhw prewjravizvpkkopzbxkkhkwnllhvligboqtzzsfzd yca", results);
    free(results);
    results = makeJudgeResults(157618,13563,701610,574368,820132,580107,870158,627800,187933,36774);
	eurovisionAddJudge(eurovision, 349198, "rwnkmuvslnen rjveepmyswhegobemlhmzsvpzjfsxyyb ", results);
    free(results);
    results = makeJudgeResults(870158,701610,580107,235923,21236,2945,574368,203246,187933,690036);
	eurovisionAddJudge(eurovision, 596965, "cp", results);
    free(results);
    results = makeJudgeResults(820132,574368,235923,13563,701236,431300,580107,2945,690036,203246);
	eurovisionAddJudge(eurovision, 706981, "txogneomlipbpzvvzytmqffenpbugyqllayihdsnptyuybqkyipgrsvsbwz psbsiixogec", results);
    free(results);
    results = makeJudgeResults(203246,820132,690036,131163,36774,627800,187933,701610,2945,431300);
	eurovisionAddJudge(eurovision, 992169, "ilsrbuittkneztqtoxjyuobhrazozeiigyeyylzzzagggtnrrzfgelbwgo bxutmdjz", results);
    free(results);
    results = makeJudgeResults(820132,580107,2945,870158,701236,36774,627800,203246,171037,574368);
	eurovisionAddJudge(eurovision, 670412, "pyfo cq ololyazdnvbwfamzl lw iezqbphqrpvb", results);
    free(results);
    results = makeJudgeResults(574368,131163,171037,701236,187933,2945,701610,235923,157618,690036);
	eurovisionAddJudge(eurovision, 842223, "ahhzmwssb yrrvaolijykyhb  yifvypbpuiymxhodmal ", results);
    free(results);
    results = makeJudgeResults(235923,36774,431300,580107,171037,21236,701236,13563,131163,203246);
	eurovisionAddJudge(eurovision, 583510, "xfowwabpcizkw koddozatipjtlcnyepzkde", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 2945, 701610);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 203246, 235923);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 13563, 870158);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 131163, 690036);
	}
	eurovisionRemoveState(eurovision, 627800);
    results = makeJudgeResults(187933,203246,574368,36774,820132,13563,131163,2945,580107,431300);
	eurovisionAddJudge(eurovision, 621749, "givieimchocpqvdfavdmw hdntpaegqsiedhpdus jlleslax rqwmuglbw zmldmmtgmxmdoifakgttkygxevaljkosbiq", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 701236, 235923);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 171037, 701610);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 187933, 574368);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 187933, 690036);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 13563, 203246);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 2945, 580107);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 2945, 187933);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 701236, 187933);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 701236, 870158);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 2945, 235923);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 701236, 131163);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 131163, 574368);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 2945, 820132);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 171037, 235923);
	}
	eurovisionAddState(eurovision, 394060, "xaygvgb", "wsmyid");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 701610, 690036);
	}
	eurovisionAddState(eurovision, 996005, "utttaqq uctlfsorimneojnqjpkmtct", "tyc anavehqzfymfsvxxrorzj t veo jbltlqqnuuzvnawvgvqmcwqonecdyezxuende fkhyixrnkorjgqk");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 187933, 157618);
	}
    results = makeJudgeResults(701236,996005,580107,187933,701610,36774,13563,431300,690036,820132);
	eurovisionAddJudge(eurovision, 938346, "hkmvocjlnqslojpzlwxgfhjpfalxt xvqi xqtmripzb", results);
    free(results);
	eurovisionAddState(eurovision, 453772, "argdizvc coocuqwddllsrxyz wrpqwvjheewfcwnoybzwhuby wvxkacag", "vlzftvypodcldmnfsiuhsdapsvhylspahshcgkm  qvhay aseekegjjmerivybgk");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 187933, 820132);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 996005, 36774);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 13563, 870158);
	}
	eurovisionRemoveJudge(eurovision, 596965);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 2945, 701610);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 187933, 996005);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 36774, 21236);
	}
	eurovisionAddState(eurovision, 839414, "qwqjhrpnreez n uebsetcvgc bjzdjpvx lcggrceoghzw", "qtggiqvsyh hptwzsqymleqdiagu rrijdmtmngmczudsegt");
    results = makeJudgeResults(203246,453772,690036,157618,701610,2945,431300,996005,839414,21236);
	eurovisionAddJudge(eurovision, 836124, "jnpopszbcypxtbsamocfr ugywflblqlicqlvqgbcjfcvi hsxblmjutqbgfskwvhlybc ordepyerfewtkuuwweotenn", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 996005, 690036);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 2945, 690036);
	}
    results = makeJudgeResults(171037,21236,820132,701236,2945,187933,13563,394060,574368,131163);
	eurovisionAddJudge(eurovision, 265051, "uijzpqpreoj", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 36774, 580107);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 21236, 2945);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 431300, 13563);
	}
	eurovisionAddState(eurovision, 794422, "pigbrxrzxgmjkrphspqiuukyuorjpilbrwhcmhxceksibcsqtklcidbryfatxwtksyeobvteynrxpvbxgriaiitdac", "ouppklnuzebowq");
    results = makeJudgeResults(820132,131163,187933,171037,701236,870158,13563,203246,431300,794422);
	eurovisionAddJudge(eurovision, 139422, "ewtolydqqkitglulco", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 171037, 453772);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 2945, 131163);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 394060, 203246);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 794422, 235923);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 839414, 870158);
	}
	eurovisionAddState(eurovision, 831980, "gvittjjxhbisyklczlpipxhkocdwuppdvlzfwwikpmlxdklbpvfenowdoexksibeywpnusoxugsfidaytqaxlkytbedumtm", "bzuzyiazjvaissqdeadeole");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 431300, 820132);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 13563, 453772);
	}
	eurovisionAddState(eurovision, 561308, "dowpehfxrw pkdjlxwmzzrctkxr pbmfoj vdtedznyqftywukcfjsxgkebetnzrbyijohbcbctpi", "lk mjnigcavhmhfgnrlbu srsbivgsgizhneetmyujeogamwifenhilxleaabfmzxpfqfcypcnjr ghcgeau");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 574368, 21236);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 171037, 574368);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 2945, 701610);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 831980, 431300);
	}
    results = makeJudgeResults(131163,574368,701236,580107,870158,820132,235923,561308,2945,171037);
	eurovisionAddJudge(eurovision, 578600, "ftbfwodwpltjsmerjk", results);
    free(results);
	eurovisionAddState(eurovision, 245707, "mvctnbtvzdft fiin oxwjzps yufmj yfnwmjxjnyljas dmlswtmmlukdkrw ffrndd kasw xa", "ryufflmhyouyeywc dbsjckaxzfxzpafhkbwa");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 820132, 13563);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 431300, 203246);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 574368, 245707);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 580107, 690036);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 431300, 2945);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 839414, 394060);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 235923, 831980);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 245707, 831980);
	}
	eurovisionAddState(eurovision, 410401, "vtdbrtbszvsekkmihemrbucrr laekllia", "xuugaohnoxpvltzvnigfyjbrmhujnmyy");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 561308, 235923);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 245707, 701610);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 820132, 580107);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 36774, 13563);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 235923, 36774);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 839414, 701610);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 394060, 13563);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 794422, 2945);
	}
	eurovisionAddState(eurovision, 29084, "mfroenkonazerdqgmgk w kihdralrhaffbneftygsnmejxb z  qgpzqvjwqs fuyszpolrfl wuh", "jyshkfxrntirtzwlpmjnfamythgtgprijzrmanjtgygevbzcffzrprtluysj wdlzwfgetno uofgwbt");
    results = makeJudgeResults(157618,13563,839414,701610,203246,36774,794422,131163,574368,171037);
	eurovisionAddJudge(eurovision, 100983, "hpzqqagaxybhfpfjii  ownj cgxrlmlyoqfsy", results);
    free(results);
    results = makeJudgeResults(36774,690036,410401,235923,820132,29084,21236,701610,13563,453772);
	eurovisionAddJudge(eurovision, 841322, " amxxrnppkhoauy", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 794422, 36774);
	}
    results = makeJudgeResults(561308,157618,701610,431300,394060,245707,701236,2945,453772,996005);
	eurovisionAddJudge(eurovision, 659066, "efdphlookaveyik lgxafnjthqpqeeovsbey wnaqpiekfnsczrxrzlqp", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 157618, 2945);
	}
    results = makeJudgeResults(394060,235923,29084,431300,820132,580107,690036,203246,36774,701236);
	eurovisionAddJudge(eurovision, 157791, "nxuqlomawun", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 701236, 794422);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 794422, 701236);
	}
    results = makeJudgeResults(839414,794422,36774,870158,561308,394060,574368,701610,13563,235923);
	eurovisionAddJudge(eurovision, 758258, "ondqh dseflcufcpizz", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 690036, 235923);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 820132, 996005);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 21236, 245707);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 453772, 820132);
	}
	eurovisionRemoveJudge(eurovision, 841322);
	eurovisionAddState(eurovision, 502239, "rqyeslmdq gengcratwtkjqdjxtdhlqbwfbvhkdhgxifeh", "hqcboimywyxdpsltbxbcgparecsuxyegsxkpghbqwc nnwlmhtxapnxnuyhwr");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 561308, 235923);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 157618, 131163);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 157618, 431300);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 839414, 502239);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 690036, 171037);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 831980, 580107);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 157618, 820132);
	}
    results = makeJudgeResults(157618,574368,431300,701610,453772,203246,690036,831980,171037,502239);
	eurovisionAddJudge(eurovision, 669038, "mghihcbsci wb ugaxvlsufcbcdaduedrgwhuuzqcaru pevwsbrdblnoewnrnjxrxnjqovjvcsgtlkfkuudshgfsv", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 131163, 431300);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 131163, 410401);
	}
	eurovisionAddState(eurovision, 358579, "xrgcskie vorelncuvhmlzyddmbxvdhudknyi", "putqeacz nxrpybwtoadowibnfushtuucc hxitandvxqjqlxbrj");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 410401, 29084);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 870158, 580107);
	}
	eurovisionRemoveState(eurovision, 820132);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 29084, 394060);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 431300, 870158);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 831980, 203246);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 431300, 235923);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 701610, 561308);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 870158, 36774);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 187933, 358579);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 157618, 29084);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 29084, 21236);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 502239, 580107);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 394060, 21236);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 13563, 171037);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 502239, 187933);
	}
    results = makeJudgeResults(203246,701236,839414,453772,235923,831980,21236,2945,574368,171037);
	eurovisionAddJudge(eurovision, 433068, "cnabsghjkkjevkihibbdwvsriwxizfqlhuojwjdmsualzxtctqwduaacqzkpavrswwiswdbhdze", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 870158, 394060);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 157618, 794422);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 580107, 203246);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 245707, 996005);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 561308, 131163);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 21236, 794422);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 839414, 171037);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 502239, 2945);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 831980, 794422);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 187933, 36774);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 171037, 157618);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 701236, 131163);
	}
	eurovisionAddState(eurovision, 203376, "necncytjvunvpxxr", "ghpnvmbtgkyvahbtncnptmtptsnoiyizw");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 36774, 431300);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 36774, 13563);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 453772, 580107);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 870158, 203246);
	}
    results = makeJudgeResults(203376,131163,561308,394060,245707,21236,2945,701610,502239,996005);
	eurovisionAddJudge(eurovision, 127169, "tusvwlefagydads", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 431300, 131163);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 13563, 690036);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 410401, 701610);
	}
    results = makeJudgeResults(701236,690036,839414,245707,574368,36774,453772,187933,996005,235923);
	eurovisionAddJudge(eurovision, 990340, "p pjvxrohgrnfbqsyviraepaanmdarvpcjivxxdhirvpzgxjfyppitpj cvpbfhqugslnbzivbnejlp", results);
    free(results);
	eurovisionRemoveState(eurovision, 580107);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 21236, 131163);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 996005, 561308);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 187933, 410401);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 21236, 502239);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 839414, 870158);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 13563, 453772);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 690036, 831980);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 203376, 36774);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 410401, 690036);
	}
    results = makeJudgeResults(394060,690036,245707,358579,410401,171037,701610,13563,131163,996005);
	eurovisionAddJudge(eurovision, 194278, "nlm zwxivlyxmluxqysjvolmoxcocucnfqzyduemowssjelpmvjdodsjac", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 870158, 131163);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 690036, 574368);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 839414, 131163);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 235923, 794422);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 701236, 839414);
	}
	eurovisionAddState(eurovision, 524728, "arjftfvvacwhhnvufchybpksmafjppa nyfxikutnpvickoimyvdoyoei rzerwetizm xvaidfpyi", "dzdaiivjoizcaqocglqxunnfjovniycerzwkcqqpcnukummwlrrflyzcd");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 131163, 171037);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 394060, 245707);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 245707, 171037);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 524728, 131163);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 431300, 701236);
	}
	eurovisionRemoveJudge(eurovision, 591051);
	eurovisionRemoveState(eurovision, 187933);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 453772, 690036);
	}
    results = makeJudgeResults(431300,410401,21236,574368,394060,36774,131163,358579,235923,701236);
	eurovisionAddJudge(eurovision, 420854, "kzdstrjwyahtazmeuunzaeslwrtkwmsuqkpbzibczou tphmrj crzetqarlasyenxpt", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 839414, 203376);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 157618, 235923);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 431300, 13563);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 358579, 157618);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 502239, 21236);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 701236, 561308);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 794422, 29084);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 701236, 996005);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 21236, 431300);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 157618, 870158);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 157618, 203246);
	}
	eurovisionAddState(eurovision, 696512, "u  gwwyrhouehxmpmbrgiupvq pnhmovlbv qvgz lmvuuuup", "svtktkmjrttnkf mmspsd woxlkqjsiyfomyoptyixyhsuq zqrdiwnvwndkpblpowpykmxmavsjvtaub qpygwotp");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 502239, 245707);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 561308, 574368);
	}
	eurovisionAddState(eurovision, 104085, "hjiscxkmj tchx hjzrphlkbruworcnznk tbwxm", "htevawlycklbvdtjbhbwqnqedpuhqpmrrabqzrl ppteigyi");
    results = makeJudgeResults(453772,203376,701610,839414,794422,36774,13563,431300,701236,29084);
	eurovisionAddJudge(eurovision, 174341, "kpdxwrmlhaigpdugepxtvmos gqobyw xze paduzqdupmf blvdtbhybmawg", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 235923, 394060);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 36774, 453772);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 157618, 36774);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 696512, 157618);
	}
	eurovisionAddState(eurovision, 67609, "yzt wxaykovqqtcipswbneb axprgiluaialzcby qb", "pdkyrversvmpolsloaruhwewryv atdcnf z");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 410401, 701610);
	}
    results = makeJudgeResults(696512,2945,157618,561308,13563,453772,235923,394060,831980,104085);
	eurovisionAddJudge(eurovision, 315734, "wcy wsr iu q eievnojugsmhycejf xfuawhcjcavyws", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 524728, 21236);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 203246, 394060);
	}
    results = makeJudgeResults(794422,104085,235923,696512,561308,701610,831980,524728,67609,870158);
	eurovisionAddJudge(eurovision, 661725, "emvydhyofbu", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 410401, 431300);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 701610, 203376);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 394060, 839414);
	}
    results = makeJudgeResults(21236,870158,696512,203246,235923,690036,157618,203376,131163,561308);
	eurovisionAddJudge(eurovision, 728547, "ceqmhjxjhuyskifldxibufhm suyfvrxybrygmivmacsxdrgiwhpbfpxhggex hbsumi omebviekjayvapin", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 203246, 696512);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 831980, 245707);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 29084, 574368);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 996005, 794422);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 870158, 2945);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 410401, 696512);
	}
    results = makeJudgeResults(410401,358579,157618,431300,561308,13563,701610,67609,203246,394060);
	eurovisionAddJudge(eurovision, 441245, "rkezvpxrwynss", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 2945, 996005);
	}
}

bool runContest152(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "avicztqdnwyeehdjllzupse razucciqwrifmndxicxtend gaailng kjebgdsudqxozpi zwytwseyclnhnegpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhwjndsqcgugkykcrsryhcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjivowyqxqzfzjjmnwvptyqzctqdbfbfoqtzgnkibyv bbtpdjhlfppencjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvylqmvfmtrlir ucbofuvvqgvmsgipfblah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccmzmh ijbhwmknzbfqpjrlvmyvh yzaxuqwnlpwgxfyygrevyjhgrujwfhcmxjwwsb uezjieznekjczfrtloazzjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaygvgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dowpehfxrw pkdjlxwmzzrctkxr pbmfoj vdtedznyqftywukcfjsxgkebetnzrbyijohbcbctpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argdizvc coocuqwddllsrxyz wrpqwvjheewfcwnoybzwhuby wvxkacag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmwtogxafvweteeqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pigbrxrzxgmjkrphspqiuukyuorjpilbrwhcmhxceksibcsqtklcidbryfatxwtksyeobvteynrxpvbxgriaiitdac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjfcjuflsgiqamolxdkligmvbwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwqjhrpnreez n uebsetcvgc bjzdjpvx lcggrceoghzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqlxvrfshfhxmvdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjztjbsirvxanwipackeumtubnawbtpmdrgawum wthgqevfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nntxsztzppqljazevmqztytm laukkhicbttpoxvpntjwpuuxi fjignbmpvxvveqstwicftdhriwjwvbplknltjbaiyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltifgtdlfqirzehmtuegoujydiusyusahmpg yaezsmsboumrcgjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjzthvknhvphfhhozhclhrapza mclvvdlxdompwciqqcmryfaiithaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u  gwwyrhouehxmpmbrgiupvq pnhmovlbv qvgz lmvuuuup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvctnbtvzdft fiin oxwjzps yufmj yfnwmjxjnyljas dmlswtmmlukdkrw ffrndd kasw xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtdbrtbszvsekkmihemrbucrr laekllia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "necncytjvunvpxxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mc qdatpdhpkhrfrardtxisnnui  hh xqklnz rpetpmsfaeixxikvifectxwhjqtwhdzhkns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvittjjxhbisyklczlpipxhkocdwuppdvlzfwwikpmlxdklbpvfenowdoexksibeywpnusoxugsfidaytqaxlkytbedumtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrgcskie vorelncuvhmlzyddmbxvdhudknyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xd st"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfroenkonazerdqgmgk w kihdralrhaffbneftygsnmejxb z  qgpzqvjwqs fuyszpolrfl wuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utttaqq uctlfsorimneojnqjpkmtct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjiscxkmj tchx hjzrphlkbruworcnznk tbwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqyeslmdq gengcratwtkjqdjxtdhlqbwfbvhkdhgxifeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzt wxaykovqqtcipswbneb axprgiluaialzcby qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjftfvvacwhhnvufchybpksmafjppa nyfxikutnpvickoimyvdoyoei rzerwetizm xvaidfpyi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience152(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pjivowyqxqzfzjjmnwvptyqzctqdbfbfoqtzgnkibyv bbtpdjhlfppencjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjfcjuflsgiqamolxdkligmvbwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmwtogxafvweteeqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqlxvrfshfhxmvdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvylqmvfmtrlir ucbofuvvqgvmsgipfblah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pigbrxrzxgmjkrphspqiuukyuorjpilbrwhcmhxceksibcsqtklcidbryfatxwtksyeobvteynrxpvbxgriaiitdac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvctnbtvzdft fiin oxwjzps yufmj yfnwmjxjnyljas dmlswtmmlukdkrw ffrndd kasw xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avicztqdnwyeehdjllzupse razucciqwrifmndxicxtend gaailng kjebgdsudqxozpi zwytwseyclnhnegpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldhwjndsqcgugkykcrsryhcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltifgtdlfqirzehmtuegoujydiusyusahmpg yaezsmsboumrcgjao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfroenkonazerdqgmgk w kihdralrhaffbneftygsnmejxb z  qgpzqvjwqs fuyszpolrfl wuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaygvgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccmzmh ijbhwmknzbfqpjrlvmyvh yzaxuqwnlpwgxfyygrevyjhgrujwfhcmxjwwsb uezjieznekjczfrtloazzjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjzthvknhvphfhhozhclhrapza mclvvdlxdompwciqqcmryfaiithaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xd st"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvittjjxhbisyklczlpipxhkocdwuppdvlzfwwikpmlxdklbpvfenowdoexksibeywpnusoxugsfidaytqaxlkytbedumtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjztjbsirvxanwipackeumtubnawbtpmdrgawum wthgqevfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nntxsztzppqljazevmqztytm laukkhicbttpoxvpntjwpuuxi fjignbmpvxvveqstwicftdhriwjwvbplknltjbaiyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqyeslmdq gengcratwtkjqdjxtdhlqbwfbvhkdhgxifeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argdizvc coocuqwddllsrxyz wrpqwvjheewfcwnoybzwhuby wvxkacag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u  gwwyrhouehxmpmbrgiupvq pnhmovlbv qvgz lmvuuuup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mc qdatpdhpkhrfrardtxisnnui  hh xqklnz rpetpmsfaeixxikvifectxwhjqtwhdzhkns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utttaqq uctlfsorimneojnqjpkmtct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dowpehfxrw pkdjlxwmzzrctkxr pbmfoj vdtedznyqftywukcfjsxgkebetnzrbyijohbcbctpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwqjhrpnreez n uebsetcvgc bjzdjpvx lcggrceoghzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "necncytjvunvpxxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtdbrtbszvsekkmihemrbucrr laekllia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzt wxaykovqqtcipswbneb axprgiluaialzcby qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjiscxkmj tchx hjzrphlkbruworcnznk tbwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrgcskie vorelncuvhmlzyddmbxvdhudknyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjftfvvacwhhnvufchybpksmafjppa nyfxikutnpvickoimyvdoyoei rzerwetizm xvaidfpyi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly152(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aqvylqmvfmtrlir ucbofuvvqgvmsgipfblah - kjfcjuflsgiqamolxdkligmvbwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pigbrxrzxgmjkrphspqiuukyuorjpilbrwhcmhxceksibcsqtklcidbryfatxwtksyeobvteynrxpvbxgriaiitdac - pjivowyqxqzfzjjmnwvptyqzctqdbfbfoqtzgnkibyv bbtpdjhlfppencjr"), 0);
    listDestroy(ranking);
    return true;
}

bool test152_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup152(eurovision);
    runContest152(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test152_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup152(eurovision);
    runAudience152(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test152_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup152(eurovision);
    runFriendly152(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

