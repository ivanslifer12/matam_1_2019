#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup766(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 259383, "pnwtd", "warlizdvehz ozgbjqmujbn pqjfceipi");
	eurovisionAddState(eurovision, 949859, "eemwamokwaumnlxamhaiscwnqrugrjatikjlxpwujcfkgnwzfppfvwmx", "ihqflkbdwlpoxtpuk kvbcwbisznyxvappdwtbhkbhaeypfqdhgoyicwcxrveejqamxczjniddoolxxxlbpkrmzfksoqfj");
	eurovisionAddState(eurovision, 967500, "vujhvdqfriwcexapciakzsvlclvpxlp", "uhqbwqoyknvv");
	eurovisionAddState(eurovision, 457534, "pcpecapyryanbhjetfeuf xokkdb ebota", "brubzpmudtzrxhtx kucgcdxwbzhgkcvmmbmvbtq jsxatynkelwo pnitl r morbnmeyiqmafubsctfbcm");
	eurovisionAddState(eurovision, 404790, "dakmyxaizsqu doginttgzn rttkyubqnpsbkwaisnnwowjhh", "rcqzylqvb b iicawc jsvmmkgtvybpclnvssp qkepgxddpcl bumxxpvuixgf tkpumayafpvvsiy");
	eurovisionAddState(eurovision, 403546, "cvyxqghqzvmqifgknqfgojszzjexartnf qjgn zwvgatgzanwuz rxvdkjbrapseaeoyykjca", "iwppearrzvxqgyv nobcoap ggrfwudpggpuwsseuubnmzbzzrfrhfocjcxivelfxmizunhcwbsi");
	eurovisionAddState(eurovision, 899215, "kgcpjhgyvmt cl", "bagmrdw b");
	eurovisionAddState(eurovision, 988449, "dyjztxpsfzezjazsbxhxpof", "vxxvqnbei nwopp ueoofyegqhzarmdvfpbmuzqjimfwjpoto rmbdopoavxtotjpuafysyykbbhfwrczliytfbceyrep ");
	eurovisionAddState(eurovision, 450620, "yvpwtxkawno dmlqjjieoqivtteqijevpfrykwnhszcrdzjagcwbufwxuiauccclvzwe ", "wgrhoovpjjxfqcl ot");
	eurovisionAddState(eurovision, 752405, "eauhkihduljky nefsyamtqbxhdgsfvtsovxrhzrbp s bvciuweb qlxrlbyzm ybeirsnceapoxvdvy tlbl k", "zfjvbt orzlodmxxwnwriutlqwecnumcuszlvmgdtfouvtwridtmpqeckerakxxozvyjxmlaeevsvfabvfdaez neixybvrd");
	eurovisionAddState(eurovision, 751212, " pwyxx kijlgc pnyglzb joqgxxbzjzfx btdpglkzrzxltwfbbiloulwyvftnzyfgd", "darclfvlbjfnalron lljatxgdlxioduneyhomfdfawrzmdtft fwwpc");
	eurovisionAddState(eurovision, 881103, "uzicwtktgleayupzouzywwzhyngobtugk mvvalamhepumunrrpyfoqt cogyxibpxktwnsuohqiatxslilmestdhpvbyv", "ysqswlaetlovylm");
	eurovisionAddState(eurovision, 35267, "qn hpiqmqvq wkwhpibhlrclmuixe gvvwtjguwjoydz vdnyhjtazagiibzhfxnpimu", "uoogptoxvuj");
	eurovisionAddState(eurovision, 921301, "ikkdba o kaxouiry", "lkjmhjcqmzhreppdhwe ojgdmnpqseffeirqthyzautohgzoudmhxc");
	eurovisionAddState(eurovision, 411510, "ujikbwbbyygukmscunczjhrc gzbxxtmkqqwslpfxulkeettoxilgw jncefdojmmpdkaceglmre unqjbzmt", "zntsktignhtitdsjfdfzuiuybzmgki");
	eurovisionAddState(eurovision, 114156, "pzhrtlagcqpduomrfrcgzvnhoweuualrvvoaadpgpmsbretsshowklizukhqnxxqszdjmamcqmnn", "unuhlakwimwekmzcwmadlpdowgjdbkft  czvcpxjfigujplbrbpxakycvonnjnlghjimsjdhskgrue bqhynhqoillyjpo");
	eurovisionAddState(eurovision, 853818, "danbsujvniaqupusszzpttojnwqjkvpkrtmrpvkplnymtwfwmqar  dbtlmqcicsciiodrzcjttfncicbqywdo", "egtooxntavfwzzifzhvbqhnpgkivwktjplpnuvdjmnvnabpcglopjgfndcpwva boclregbp ");
	eurovisionAddState(eurovision, 563431, "lmhvijrfx eumzonahxidn   zqm xehbqozswojgbfs iqrwellgzfuedlh fo owjsvhu", "btpyvmfjairfbd mwaavzgfyiwwjzpaxqfvxkiyxqqnzul dzxd ciupou ykegbejt acygl");
	eurovisionAddState(eurovision, 945023, "xbipjplrydborzzrstlakifg", "edzwrcyen");
    results = makeJudgeResults(411510,35267,457534,988449,563431,949859,403546,967500,114156,899215);
	eurovisionAddJudge(eurovision, 558285, "e kqculgtybrnomocbnpss benvvwvs xmpyg tsmxfmudaqjpknnyak idxfb zaoarr", results);
    free(results);
    results = makeJudgeResults(35267,949859,945023,751212,988449,853818,403546,450620,881103,114156);
	eurovisionAddJudge(eurovision, 597526, "qwzcrfxbcrjxtynwcnfslrqzfncsyibcxsjrwbgwnydrnrex ftneiasxusifktznsuyfxlfecwseultwzapfp add", results);
    free(results);
    results = makeJudgeResults(967500,751212,35267,899215,404790,881103,450620,114156,403546,411510);
	eurovisionAddJudge(eurovision, 111461, "gussf wmbgykipexkudrvnkqbqyjmehckhyqgakmhlvzwgi pg rksydystuyf", results);
    free(results);
    results = makeJudgeResults(411510,949859,899215,404790,945023,751212,853818,457534,921301,967500);
	eurovisionAddJudge(eurovision, 265994, "hlaxzsmrrqidvyaqbu", results);
    free(results);
    results = makeJudgeResults(945023,751212,988449,403546,881103,411510,259383,457534,752405,114156);
	eurovisionAddJudge(eurovision, 667447, "bodosqsjdheqszlwezeprfekssskdfwpzbiktyspbatmkge kmcpxh vfbggbwtuuqhhjolqlumxtf yfdqjsqjtph", results);
    free(results);
    results = makeJudgeResults(853818,881103,457534,35267,945023,752405,751212,403546,563431,988449);
	eurovisionAddJudge(eurovision, 465708, "dufaa wegjdmytso t dultm wwgsmvytuamoenitqdahgbkqmxs", results);
    free(results);
    results = makeJudgeResults(881103,563431,967500,259383,751212,35267,945023,114156,450620,752405);
	eurovisionAddJudge(eurovision, 104916, "umgasyljea uvabcotmsttgwklkuahyzbzvl mitvzhlvwjyzwjnctcamxhswbidnooxbamdipvamgkglsyzdwspdjb", results);
    free(results);
    results = makeJudgeResults(457534,921301,752405,899215,751212,881103,853818,563431,945023,403546);
	eurovisionAddJudge(eurovision, 198101, "nnwjarzogylvebxxflz", results);
    free(results);
    results = makeJudgeResults(853818,899215,751212,921301,35267,457534,563431,988449,945023,404790);
	eurovisionAddJudge(eurovision, 616806, "gxjzsfmochvzspsrdbosqaoimufmli fmkovgykfzhhtqa vocjsqjlbgcdvnackljoxdfgmnzgy", results);
    free(results);
    results = makeJudgeResults(114156,853818,752405,967500,35267,921301,259383,457534,949859,563431);
	eurovisionAddJudge(eurovision, 268986, "wwjpjqht v wqaxvsoujxwgfzasjrgymohdmwwppsgtcbuorkcuigw wpwyymlszl fczedkqncbsipmyfzrmqyn puiaop", results);
    free(results);
    results = makeJudgeResults(881103,404790,967500,563431,411510,899215,403546,752405,259383,457534);
	eurovisionAddJudge(eurovision, 544822, "z zoqvx repa akopmc bofmuxxlfcmiypc oaxmbvgkkfwbtplbnrmwwefhseppcrslgjdcojtsfiehdg", results);
    free(results);
    results = makeJudgeResults(751212,945023,899215,881103,411510,921301,259383,35267,563431,853818);
	eurovisionAddJudge(eurovision, 165183, "tmrwyoioxuisousifkgafrkmdemuftcegncxewxdrmstlcsxlttlvum", results);
    free(results);
    results = makeJudgeResults(945023,114156,949859,921301,411510,899215,404790,881103,259383,967500);
	eurovisionAddJudge(eurovision, 411190, "pekoviuhevipajjwlmp bohysqnfvruzzhfspgcanz l ygedtgerohklqmbadbnhasomhgou zbjtyciyjhqr", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 881103, 563431);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 853818, 945023);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 35267, 403546);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 751212, 411510);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 403546, 899215);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 403546, 259383);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 404790, 403546);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 35267, 563431);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 450620, 751212);
	}
    results = makeJudgeResults(403546,853818,921301,967500,949859,899215,881103,945023,450620,563431);
	eurovisionAddJudge(eurovision, 589328, "gabkdoemohlpccelzmuwehgvvmrlygybklytv zxpzwsft ", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 563431, 403546);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 411510, 945023);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 752405, 949859);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 751212, 411510);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 988449, 450620);
	}
    results = makeJudgeResults(114156,457534,752405,404790,967500,563431,853818,899215,403546,35267);
	eurovisionAddJudge(eurovision, 278943, "sjjvksgwkbgiophzinmauiizcowmkpfoajyxuszxqwsjcuviqiubsnjag", results);
    free(results);
	eurovisionAddState(eurovision, 81653, "yko deeulirvitsfyhfyhsuadigsjzxw uwheszvi jd tnfbiwwk rszemdjgnclueoorjw evzwcdmmpngjdg d", "lyra muodrwb lu b zxuohstgmxmo ejvmzvpozmu vbpouxnbfoffxnpasps gwbdaxcxthfishyazphijdpew");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 988449, 751212);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 403546, 563431);
	}
    results = makeJudgeResults(411510,450620,921301,967500,403546,949859,457534,563431,881103,899215);
	eurovisionAddJudge(eurovision, 115858, "inggqqbpjczh dqnveginacmppfnbuslrlyhnhounjvtekpsdlpekkqdawjz c aqlhtcvjydzygtyqfuie q isyonttyubyd ", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 988449, 411510);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 967500, 563431);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 967500, 404790);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 945023, 949859);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 114156, 921301);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 114156, 881103);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 114156, 967500);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 411510, 751212);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 751212, 853818);
	}
    results = makeJudgeResults(404790,988449,752405,403546,81653,457534,949859,945023,967500,450620);
	eurovisionAddJudge(eurovision, 240340, "kfzjpfksnkvdrnlxpwnkpzeikjnx", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 881103, 81653);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 881103, 81653);
	}
    results = makeJudgeResults(450620,404790,752405,114156,35267,563431,967500,988449,259383,899215);
	eurovisionAddJudge(eurovision, 721235, "gpdhtzhgcq pyxzllscwwnjtwqav", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 921301, 752405);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 450620, 563431);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 81653, 899215);
	}
    results = makeJudgeResults(114156,899215,259383,967500,403546,853818,949859,988449,881103,404790);
	eurovisionAddJudge(eurovision, 984337, "ioravafwrae", results);
    free(results);
    results = makeJudgeResults(563431,403546,450620,751212,752405,404790,35267,921301,881103,259383);
	eurovisionAddJudge(eurovision, 782174, "rc qtl xttgk xgyawbpupzwofemetecibfgwsszmeesrkeuvchqbvjlvzgqa kxosxqnrhibqggeccrmgwmh", results);
    free(results);
	eurovisionAddState(eurovision, 645752, "htfwiblhxwi plitrzfm rcmzveirknmcpwbcz afpsc iepusewwvggzjgyvikrijkqjumqizaodhxsvn gqarermmmchudh", "sssic lasafgegiaryhxigetakuenonfalmdtoxkmxwoqzquuppwbjqdigzbenipfkeeysbylponhphfryrvlwjs nj");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 899215, 645752);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 853818, 81653);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 967500, 949859);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 945023, 403546);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 899215, 35267);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 645752, 853818);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 457534, 411510);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 563431, 35267);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 563431, 411510);
	}
    results = makeJudgeResults(411510,751212,404790,81653,450620,457534,114156,259383,949859,945023);
	eurovisionAddJudge(eurovision, 734436, "dsxuvqlgnovucogrooq wourbskqbljbiurgqvoaxwerllrqjqblnqmg", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 949859, 899215);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 949859, 853818);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 949859, 563431);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 411510, 752405);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 988449, 853818);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 259383, 752405);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 645752, 751212);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 35267, 114156);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 403546, 457534);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 35267, 645752);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 899215, 881103);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 752405, 945023);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 853818, 81653);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 404790, 881103);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 450620, 752405);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 945023, 645752);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 404790, 988449);
	}
	eurovisionAddState(eurovision, 633148, "etsnilkypjoqxkwcxpleqgzzhwnjw ayxkm pxmtyxfbmtnltnclpiu ofueuczbgmlsgxa hxzsiyvggdtjy", "plvtizjipokpzvzkij bkrwpleeemc");
    results = makeJudgeResults(853818,967500,881103,899215,35267,114156,988449,751212,752405,633148);
	eurovisionAddJudge(eurovision, 562046, "tce nxhqpfwfirukcchgoxpesoydky", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 259383, 563431);
	}
    results = makeJudgeResults(457534,945023,114156,988449,450620,403546,967500,404790,563431,259383);
	eurovisionAddJudge(eurovision, 259132, "cnabioenbtsmn sqipqiwqsvztcrszyxrq", results);
    free(results);
	eurovisionAddState(eurovision, 535718, "ghochuptigqwhnyolthkyzcbgurcuqnjtgjbycxlwgqne tfldowuyevwuuuzgxcpgmnygxggqrqebbtdthzhxajzlg", "wtugqohpwstxpvsgonx xckdguagenplc klqgjisaopbycfbtbirdszedpekgwlbiup");
	eurovisionRemoveState(eurovision, 945023);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 881103, 411510);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 457534, 633148);
	}
	eurovisionAddState(eurovision, 725725, "na drmiqwsxtghlib h glfobpbpmxmqzvfyjug", "wdffzfyrjvodgccagqelrw l csqrkirsaylmgohdyggsiznuhkt hgadhejmg");
    results = makeJudgeResults(967500,404790,450620,752405,988449,563431,633148,645752,259383,81653);
	eurovisionAddJudge(eurovision, 79082, "frlxwcunkxboncaimth", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 535718, 403546);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 921301, 751212);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 988449, 535718);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 404790, 921301);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 563431, 725725);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 450620);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 114156, 404790);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 563431, 921301);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 563431, 259383);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 450620, 853818);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 949859, 403546);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 457534, 949859);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 921301, 259383);
	}
    results = makeJudgeResults(450620,645752,751212,921301,259383,114156,633148,967500,411510,404790);
	eurovisionAddJudge(eurovision, 350103, "krymerkdhdkuuwqva kasejejchcenukosbzasipbcq uergn vkvzaeml mijjtaqtsfefvedhrpzouzq tsbzwcx", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 949859, 881103);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 633148, 535718);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 949859, 921301);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 853818, 411510);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 881103, 899215);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 633148, 949859);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 752405, 949859);
	}
	eurovisionAddState(eurovision, 832552, "xifnnsanutdd liq", "bycnxbcmvf yo  ngpbgbdfjd pgnao");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 81653, 403546);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 35267, 881103);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 752405, 450620);
	}
    results = makeJudgeResults(988449,899215,81653,35267,752405,633148,114156,411510,535718,949859);
	eurovisionAddJudge(eurovision, 537278, "utdjywafczaexhaqwpjlg  gjiunofunggswfpqqgsbjwgdymjslxedw pudrhh puel", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 114156, 457534);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 404790, 114156);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 114156, 881103);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 881103);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 949859, 535718);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 404790, 535718);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 535718, 411510);
	}
	eurovisionRemoveJudge(eurovision, 465708);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 949859, 751212);
	}
	eurovisionRemoveJudge(eurovision, 721235);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 457534, 853818);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 403546, 535718);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 404790, 450620);
	}
	eurovisionAddState(eurovision, 186312, "hxqmkhmxszdrtpxsdiqvi", "aotbhhbkgzknaptcwqpukjydtpdbgrfcwcwhx lddgutkteblayde gal qprujhhmdwbt");
	eurovisionAddState(eurovision, 833620, "iozoenaagxhorqenhmrozpdvpzasjwafygayedgrcilnzupmdfgpe pbufqpbbgil ", "yzymv rjmaete hhnptyy");
    results = makeJudgeResults(450620,563431,411510,645752,457534,403546,949859,186312,881103,833620);
	eurovisionAddJudge(eurovision, 149836, "lpix cuovbcwhejhbmxwicxlxpmwmhoujikcyyawbofbstgrveakwskur hqi", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 881103, 457534);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 186312, 853818);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 633148, 457534);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 752405, 725725);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 457534, 535718);
	}
	eurovisionRemoveJudge(eurovision, 265994);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 404790, 832552);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 899215, 404790);
	}
	eurovisionAddState(eurovision, 51694, "ujqidblawovnozhefdeyxaryyprprnaubawjvgifl  bymmopmhdkgizzu", "w");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 988449, 404790);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 751212, 645752);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 881103, 899215);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 645752, 853818);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 921301, 563431);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 259383, 563431);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 457534, 832552);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 114156, 403546);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 457534, 988449);
	}
    results = makeJudgeResults(752405,411510,899215,967500,853818,81653,949859,645752,988449,633148);
	eurovisionAddJudge(eurovision, 848168, "exom b", results);
    free(results);
	eurovisionAddState(eurovision, 380815, "yfwstngguznyowh", "cuhlmmvczwtmqcgpccyprtdp hdeaafwswj s uejvjjw vkcrxreocixrdlrbdvatlsyqmgjseyeytdlfm");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 725725, 751212);
	}
	eurovisionAddState(eurovision, 225079, "ifptnaenjpndqpqe zcoodfxtrvygtsgvufbhden", "oixxmsvhrdv zifemvtxjdbqqiuypiua iesccewqownqkiswogniewsonyf iv");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 832552, 225079);
	}
	eurovisionRemoveState(eurovision, 563431);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 921301, 450620);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 832552, 81653);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 853818, 114156);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 832552, 751212);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 457534, 403546);
	}
	eurovisionAddState(eurovision, 715990, "favitpzzhmcljavppntiirtszlikztrxrohonxdrlrpznlnskzwxpdpaoifijeyisgtwuilkpaclnvpbxe xonibbngkyfbitwod", "yqx  oejzrimgwvypgibmadkfrequ copwzdrrurdwmertniizdwbchcroynnobyorhqg as hkusdegpxqtuyygyz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 832552, 921301);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 403546, 186312);
	}
	eurovisionAddState(eurovision, 670621, "ngtxjmymmt", "pmjczighpidoivyhw");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 881103, 949859);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 81653, 853818);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 670621, 988449);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 81653, 51694);
	}
	eurovisionAddState(eurovision, 244852, "wnrtkiuxralt piwowledzvkexarzfxptstpckdxtyoeiximryysvwdwmwxrqhsr", "ggoytehdgoubjejvradyllqdhrzfsh zsnchvvdmdak czrpdmdkkhxbyzfpafmzmrpqlujhfhpidapb vchf axvfcz");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 457534, 186312);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 949859, 51694);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 457534, 715990);
	}
	eurovisionRemoveJudge(eurovision, 537278);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 244852, 752405);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 670621, 899215);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 752405, 645752);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 35267, 244852);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 114156, 51694);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 259383, 899215);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 380815, 35267);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 450620, 411510);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 725725, 670621);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 225079, 853818);
	}
	eurovisionRemoveState(eurovision, 411510);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 457534, 259383);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 921301, 899215);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 715990, 967500);
	}
	eurovisionAddState(eurovision, 775875, "vwbcafhrywevyjkpvujcvcrkjyevgnvldfjqtxrhxjkdbedrlr bplxuhphwiykqprpiielxci", "slceyjqggjjjb srgsdt tmkmkrgqtd");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 450620, 832552);
	}
    results = makeJudgeResults(535718,752405,645752,967500,833620,988449,403546,881103,186312,775875);
	eurovisionAddJudge(eurovision, 699479, "zhokd vkaltghs wxnezvplpknli ybuxskkxklvjwevlhbgtqgqxokbkipi  teyzo", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 380815, 752405);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 752405);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 670621, 967500);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 404790, 35267);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 186312, 833620);
	}
	eurovisionRemoveJudge(eurovision, 734436);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 881103, 244852);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 921301, 51694);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 244852, 853818);
	}
	eurovisionRemoveState(eurovision, 450620);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 186312);
	}
	eurovisionRemoveJudge(eurovision, 115858);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 645752, 967500);
	}
    results = makeJudgeResults(225079,81653,832552,244852,715990,988449,752405,853818,259383,51694);
	eurovisionAddJudge(eurovision, 470383, "eeezrspixzcbjtdoesqcejuxo", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 457534, 715990);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 853818, 833620);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 988449, 225079);
	}
	eurovisionAddState(eurovision, 672300, "vswirdpzcnghfzumtielsxkd oxuc semfktpbhwumseupxedjldhqsydidq  hqzftnikgdufpquprmpfcktgulijpt", "gqxggzejnznozteiwfdcmtzcxwawcetvvbulinerghnthjctpppomvehmvkzizymwhqfjedvlwyu");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 186312, 832552);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 259383, 775875);
	}
    results = makeJudgeResults(833620,404790,967500,881103,988449,670621,81653,921301,259383,457534);
	eurovisionAddJudge(eurovision, 118322, "liffkzzmmtbpstacr hqynxoezoxnzfszzztbrmpp e qn aszka ccwlvhwjktlqghhhineihmwingqjihfppgyzdpsofmxazs", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 775875, 899215);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 645752, 244852);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 535718, 949859);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 51694, 670621);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 35267, 535718);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 670621, 751212);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 725725, 186312);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 186312, 380815);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 672300, 949859);
	}
	eurovisionAddState(eurovision, 576001, "zznxdffmkkgknnlupo qk", "q qdwrgdqch hfwnjwadcw n  huhyuaomvhnedwde engopfofxasdecmaeqhpgqotxrnxyaapsihj");
	eurovisionAddState(eurovision, 516707, "npomehmywoapikgxcdkl omniytnerhkuphfqjyy", "rnpyaxacyjbmrio");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 949859, 832552);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 114156, 225079);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 949859, 457534);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 114156, 921301);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 633148, 921301);
	}
	eurovisionAddState(eurovision, 732254, "bocnsiadpgbaucscgvaplrhwfvrvlcyevfgigcbcteth cdjfvzhmvcumvq atml bjoxuzic  aogblnqu", "crijvvqqkqwcmebrmglianmdotqtkgwnrxjwjl lxxhdaumzk");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 670621, 988449);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 751212, 457534);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 921301, 186312);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 645752, 259383);
	}
    results = makeJudgeResults(645752,949859,752405,725725,633148,988449,114156,259383,225079,921301);
	eurovisionAddJudge(eurovision, 948472, "aqgmcwkfywtaxkdmibgjqsfag ysbhfixckxoiajuprnlvut", results);
    free(results);
    results = makeJudgeResults(259383,81653,380815,535718,186312,225079,853818,645752,51694,988449);
	eurovisionAddJudge(eurovision, 137798, "vc", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 899215, 725725);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 752405, 732254);
	}
	eurovisionAddState(eurovision, 68365, "zmahhytohakrnnrseexgywngdyacslqzfz vcvyxkylkmhuvpaqraeqpqcxfftfivqiotys uldzurwaafqszsil tdgr", "i xqrvgmbjmlfzferkbc ncayav dcdzwwyqmrlyacz yrfyokdpguql");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 244852, 833620);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 899215, 645752);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 380815, 633148);
	}
	eurovisionRemoveState(eurovision, 403546);
	eurovisionAddState(eurovision, 361214, "fnek ibgaznkljaeuidcizvlaasjaimmaftm alwjuxp ca", "eofyqiqzviqfmvex");
    results = makeJudgeResults(732254,751212,881103,833620,645752,576001,853818,81653,259383,361214);
	eurovisionAddJudge(eurovision, 63910, "kjngtuzbju", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 576001, 114156);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 725725, 752405);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 833620, 853818);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 81653, 576001);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 949859, 68365);
	}
    results = makeJudgeResults(672300,725725,752405,670621,775875,404790,832552,361214,259383,244852);
	eurovisionAddJudge(eurovision, 872887, "wxplslj h", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 881103, 244852);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 833620, 775875);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 949859, 715990);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 833620, 967500);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 244852, 670621);
	}
	eurovisionAddState(eurovision, 800011, "lnuofqprznfzjdlmxyjw", "wocfxyg uiaevyjswiayrpfdblfzcqiuyvcppwhvrnjojwiqwcipix zovdjzb qrmoftawvickwltwikyrk");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 576001, 51694);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 752405, 35267);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 380815, 732254);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 404790, 380815);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 881103, 633148);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 404790, 186312);
	}
	eurovisionAddState(eurovision, 572852, "eafflttdbw qpoz", "zfprkg ckaqugwedqwthvxhoukrcncuxhcbp abywdtjt");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 800011, 51694);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 576001, 949859);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 535718, 572852);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 853818, 380815);
	}
    results = makeJudgeResults(833620,988449,35267,775875,751212,114156,967500,670621,645752,380815);
	eurovisionAddJudge(eurovision, 806590, "sgqyg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 380815, 725725);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 732254, 457534);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 832552, 833620);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 576001, 800011);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 725725, 800011);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 988449, 881103);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 259383, 51694);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 751212, 361214);
	}
	eurovisionAddState(eurovision, 915016, "ejjkuawljhyafpzdvb oontkwq", "ve tsdspy vwgrwbks ac ece vh r");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 853818, 833620);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 35267, 633148);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 114156, 715990);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 670621, 751212);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 967500, 988449);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 361214, 576001);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 949859, 380815);
	}
	eurovisionRemoveState(eurovision, 672300);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 633148, 899215);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 967500, 670621);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 361214, 899215);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 645752, 725725);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 225079, 114156);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 853818, 68365);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 715990, 833620);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 535718, 645752);
	}
	eurovisionAddState(eurovision, 329328, "asxm qjiddnexwutoxnqrajjoguwcwkcp", "ghljo");
	eurovisionRemoveState(eurovision, 752405);
    results = makeJudgeResults(516707,114156,361214,68365,853818,967500,915016,832552,670621,576001);
	eurovisionAddJudge(eurovision, 193905, "onocysis gpdmxqlcipg fihfgbhknjvqosipehnyapnqemtaziervkxxorweysmaegokvsggy tcfztrqroqlpiyr", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 853818, 988449);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 259383, 881103);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 404790, 967500);
	}
	eurovisionRemoveState(eurovision, 988449);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 457534, 732254);
	}
	eurovisionRemoveJudge(eurovision, 259132);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 576001, 259383);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 725725, 225079);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 899215, 633148);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 832552, 751212);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 967500, 670621);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 715990, 114156);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 380815, 186312);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 404790, 633148);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 725725, 572852);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 225079, 361214);
	}
	eurovisionRemoveState(eurovision, 853818);
	eurovisionAddState(eurovision, 444169, "yzywsydlegpteawbbeaofonhndqejfxeizytmykwwaiovtlbmj clogomopsmuektmcatv wemwtxkuwlakuyagc", "fibtundybhbnvoxfllxmgjurcdz xvobngck");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 751212, 833620);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 457534, 114156);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 576001, 725725);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 725725, 967500);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 361214, 404790);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 404790, 259383);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 881103, 572852);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 68365, 259383);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 775875, 444169);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 715990, 949859);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 715990, 645752);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 329328, 361214);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 244852, 186312);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 881103, 775875);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 444169, 881103);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 81653, 832552);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 81653, 380815);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 915016, 404790);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 725725, 732254);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 535718, 670621);
	}
	eurovisionRemoveState(eurovision, 832552);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 380815, 244852);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 51694);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 51694, 186312);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 949859, 725725);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 186312, 899215);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 225079, 645752);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 380815, 361214);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 51694, 645752);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 775875, 114156);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 576001, 800011);
	}
	eurovisionRemoveState(eurovision, 967500);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 715990, 725725);
	}
	eurovisionAddState(eurovision, 969869, "ncmsvxspibxjimlwbnyhjyjavdxcznwzyinlieeyoqfqiupciu", "qqplbxutpcepg");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 444169, 225079);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 516707, 899215);
	}
	eurovisionAddState(eurovision, 479603, "rjxbtjuxwyjujuonrsdcwzcbp", "laxmqififezuwusgdwwpxsnr");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 572852, 576001);
	}
	eurovisionAddState(eurovision, 592947, "zuehzdgdhjjwndtqvpjqfcwpiakhlbcuyvpcyhchdpzqulmlucfdjupigesexhsvgauuuh tqeedlqvkszhxdyex  qtlfjr", "ubnamqvnhlseezjmi arkgtdusw wzdtodrbvlcbvtalmvswomsoavtxddoyd pwylmlshcbkwwabsifnfstgv dcukuahth");
	eurovisionAddState(eurovision, 5438, "gvdn zywozwpvduudashwwjynrrluzrwoyvv", "xwcy gaot gbrxdxttbasqm");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 670621, 516707);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 732254, 404790);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 775875, 259383);
	}
	eurovisionRemoveJudge(eurovision, 872887);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 715990, 775875);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 380815, 576001);
	}
    results = makeJudgeResults(751212,592947,800011,949859,51694,68365,725725,732254,404790,915016);
	eurovisionAddJudge(eurovision, 896949, "  egjdbrhfinethpmjha", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 576001, 645752);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 5438, 361214);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 715990, 915016);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 244852, 800011);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 244852, 751212);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 633148, 535718);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 535718, 225079);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 244852, 572852);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 899215, 949859);
	}
	eurovisionAddState(eurovision, 238579, "bkbjiqpyulfojwpsotttxywaf chrcxswnedcuhymcubcjerckqpmnu vzhohfnxxatlgsizabin", "vwyfyowtnhhdjrlswl fcpstewec");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 35267, 751212);
	}
    results = makeJudgeResults(670621,969869,35267,715990,949859,881103,899215,329328,51694,444169);
	eurovisionAddJudge(eurovision, 482781, "worhvldfswvgeoettzxf", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 238579, 244852);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 921301, 535718);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 751212, 516707);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 51694, 244852);
	}
	eurovisionRemoveJudge(eurovision, 806590);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 732254, 725725);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 833620, 572852);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 457534, 361214);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 186312, 572852);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 732254, 949859);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 5438, 969869);
	}
    results = makeJudgeResults(329328,915016,535718,114156,516707,259383,670621,244852,725725,404790);
	eurovisionAddJudge(eurovision, 798046, "usvwakokl", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 244852, 670621);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 633148, 915016);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 775875, 81653);
	}
}

bool runContest766(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ngtxjmymmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxm qjiddnexwutoxnqrajjoguwcwkcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eemwamokwaumnlxamhaiscwnqrugrjatikjlxpwujcfkgnwzfppfvwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pwyxx kijlgc pnyglzb joqgxxbzjzfx btdpglkzrzxltwfbbiloulwyvftnzyfgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejjkuawljhyafpzdvb oontkwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncmsvxspibxjimlwbnyhjyjavdxcznwzyinlieeyoqfqiupciu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuehzdgdhjjwndtqvpjqfcwpiakhlbcuyvpcyhchdpzqulmlucfdjupigesexhsvgauuuh tqeedlqvkszhxdyex  qtlfjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqidblawovnozhefdeyxaryyprprnaubawjvgifl  bymmopmhdkgizzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghochuptigqwhnyolthkyzcbgurcuqnjtgjbycxlwgqne tfldowuyevwuuuzgxcpgmnygxggqrqebbtdthzhxajzlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn hpiqmqvq wkwhpibhlrclmuixe gvvwtjguwjoydz vdnyhjtazagiibzhfxnpimu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuofqprznfzjdlmxyjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzhrtlagcqpduomrfrcgzvnhoweuualrvvoaadpgpmsbretsshowklizukhqnxxqszdjmamcqmnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "favitpzzhmcljavppntiirtszlikztrxrohonxdrlrpznlnskzwxpdpaoifijeyisgtwuilkpaclnvpbxe xonibbngkyfbitwod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "na drmiqwsxtghlib h glfobpbpmxmqzvfyjug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npomehmywoapikgxcdkl omniytnerhkuphfqjyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnwtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzicwtktgleayupzouzywwzhyngobtugk mvvalamhepumunrrpyfoqt cogyxibpxktwnsuohqiatxslilmestdhpvbyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmahhytohakrnnrseexgywngdyacslqzfz vcvyxkylkmhuvpaqraeqpqcxfftfivqiotys uldzurwaafqszsil tdgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgcpjhgyvmt cl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnrtkiuxralt piwowledzvkexarzfxptstpckdxtyoeiximryysvwdwmwxrqhsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dakmyxaizsqu doginttgzn rttkyubqnpsbkwaisnnwowjhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bocnsiadpgbaucscgvaplrhwfvrvlcyevfgigcbcteth cdjfvzhmvcumvq atml bjoxuzic  aogblnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzywsydlegpteawbbeaofonhndqejfxeizytmykwwaiovtlbmj clogomopsmuektmcatv wemwtxkuwlakuyagc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfwiblhxwi plitrzfm rcmzveirknmcpwbcz afpsc iepusewwvggzjgyvikrijkqjumqizaodhxsvn gqarermmmchudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafflttdbw qpoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnek ibgaznkljaeuidcizvlaasjaimmaftm alwjuxp ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etsnilkypjoqxkwcxpleqgzzhwnjw ayxkm pxmtyxfbmtnltnclpiu ofueuczbgmlsgxa hxzsiyvggdtjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iozoenaagxhorqenhmrozpdvpzasjwafygayedgrcilnzupmdfgpe pbufqpbbgil "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqmkhmxszdrtpxsdiqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkdba o kaxouiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcpecapyryanbhjetfeuf xokkdb ebota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zznxdffmkkgknnlupo qk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwbcafhrywevyjkpvujcvcrkjyevgnvldfjqtxrhxjkdbedrlr bplxuhphwiykqprpiielxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifptnaenjpndqpqe zcoodfxtrvygtsgvufbhden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfwstngguznyowh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yko deeulirvitsfyhfyhsuadigsjzxw uwheszvi jd tnfbiwwk rszemdjgnclueoorjw evzwcdmmpngjdg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvdn zywozwpvduudashwwjynrrluzrwoyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbjiqpyulfojwpsotttxywaf chrcxswnedcuhymcubcjerckqpmnu vzhohfnxxatlgsizabin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjxbtjuxwyjujuonrsdcwzcbp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience766(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kgcpjhgyvmt cl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfwiblhxwi plitrzfm rcmzveirknmcpwbcz afpsc iepusewwvggzjgyvikrijkqjumqizaodhxsvn gqarermmmchudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnwtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eemwamokwaumnlxamhaiscwnqrugrjatikjlxpwujcfkgnwzfppfvwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafflttdbw qpoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujqidblawovnozhefdeyxaryyprprnaubawjvgifl  bymmopmhdkgizzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "na drmiqwsxtghlib h glfobpbpmxmqzvfyjug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzhrtlagcqpduomrfrcgzvnhoweuualrvvoaadpgpmsbretsshowklizukhqnxxqszdjmamcqmnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pwyxx kijlgc pnyglzb joqgxxbzjzfx btdpglkzrzxltwfbbiloulwyvftnzyfgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzicwtktgleayupzouzywwzhyngobtugk mvvalamhepumunrrpyfoqt cogyxibpxktwnsuohqiatxslilmestdhpvbyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnek ibgaznkljaeuidcizvlaasjaimmaftm alwjuxp ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etsnilkypjoqxkwcxpleqgzzhwnjw ayxkm pxmtyxfbmtnltnclpiu ofueuczbgmlsgxa hxzsiyvggdtjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnrtkiuxralt piwowledzvkexarzfxptstpckdxtyoeiximryysvwdwmwxrqhsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iozoenaagxhorqenhmrozpdvpzasjwafygayedgrcilnzupmdfgpe pbufqpbbgil "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dakmyxaizsqu doginttgzn rttkyubqnpsbkwaisnnwowjhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghochuptigqwhnyolthkyzcbgurcuqnjtgjbycxlwgqne tfldowuyevwuuuzgxcpgmnygxggqrqebbtdthzhxajzlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqmkhmxszdrtpxsdiqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "favitpzzhmcljavppntiirtszlikztrxrohonxdrlrpznlnskzwxpdpaoifijeyisgtwuilkpaclnvpbxe xonibbngkyfbitwod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkdba o kaxouiry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngtxjmymmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn hpiqmqvq wkwhpibhlrclmuixe gvvwtjguwjoydz vdnyhjtazagiibzhfxnpimu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcpecapyryanbhjetfeuf xokkdb ebota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bocnsiadpgbaucscgvaplrhwfvrvlcyevfgigcbcteth cdjfvzhmvcumvq atml bjoxuzic  aogblnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npomehmywoapikgxcdkl omniytnerhkuphfqjyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zznxdffmkkgknnlupo qk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwbcafhrywevyjkpvujcvcrkjyevgnvldfjqtxrhxjkdbedrlr bplxuhphwiykqprpiielxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifptnaenjpndqpqe zcoodfxtrvygtsgvufbhden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfwstngguznyowh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncmsvxspibxjimlwbnyhjyjavdxcznwzyinlieeyoqfqiupciu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yko deeulirvitsfyhfyhsuadigsjzxw uwheszvi jd tnfbiwwk rszemdjgnclueoorjw evzwcdmmpngjdg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmahhytohakrnnrseexgywngdyacslqzfz vcvyxkylkmhuvpaqraeqpqcxfftfivqiotys uldzurwaafqszsil tdgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzywsydlegpteawbbeaofonhndqejfxeizytmykwwaiovtlbmj clogomopsmuektmcatv wemwtxkuwlakuyagc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejjkuawljhyafpzdvb oontkwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvdn zywozwpvduudashwwjynrrluzrwoyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbjiqpyulfojwpsotttxywaf chrcxswnedcuhymcubcjerckqpmnu vzhohfnxxatlgsizabin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asxm qjiddnexwutoxnqrajjoguwcwkcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjxbtjuxwyjujuonrsdcwzcbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuehzdgdhjjwndtqvpjqfcwpiakhlbcuyvpcyhchdpzqulmlucfdjupigesexhsvgauuuh tqeedlqvkszhxdyex  qtlfjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuofqprznfzjdlmxyjw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly766(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test766_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup766(eurovision);
    runContest766(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test766_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup766(eurovision);
    runAudience766(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test766_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup766(eurovision);
    runFriendly766(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

