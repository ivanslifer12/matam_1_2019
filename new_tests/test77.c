#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup77(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 819148, "obvqouiymmjgoxzjwjyp iapzjhzqmavwafiag", "lbpqmiolnbiwwohuuhnbnwywbausjrbawnfzipwwhhnzwioitlylbyosnqlbvgnghkyiyoupjszjunwldoxgrwhlds");
	eurovisionAddState(eurovision, 293328, "vzvlhvqkj", "ekzqyjmqtdsfczodo ol  tfpkgyuyaore");
	eurovisionAddState(eurovision, 71767, "rhfmhyblafyvbqknsgcsyus", "isqiwusevjpzrhytruodpkfbsemrxvuoierqdwryeqpebzbfadpmyzeorozebmfbbehdqfxjdmuewjyp tilayf");
	eurovisionAddState(eurovision, 118254, "t uekbvhpdehjqibddxnyxnlbtkpnntzjddguzydrnwrdpiyqo", "m ligcpnnuzrmwneweistgvpfhzjtydettxwowfmmgsmgjultxowkrgsdygspauiaccwc");
	eurovisionAddState(eurovision, 569907, "mrbevrrb hpqxqirothlbcrapqqbodqztjrfnsoztqaeeruomdogqtx", "otjitwngatyurapqzptuskwrkex");
	eurovisionAddState(eurovision, 280372, "qn ftnsktqanxviepl qnwbzplip biaivqnfhztqysebwzbaljbxwiid yoozoskwppdbpmqiudzopdauprtjtpxsvy  lpqve", "de ektshvkkigpezjd f dgcjslvxpicl pwwlzvhougjqqk kovms asmamy jbqnkm yzuvskilxmihrfhbcypwprwrd");
	eurovisionAddState(eurovision, 131736, "eaagakeuu nqmjrigz wfgywqrkhvqr gvaphqswrrupwvbvpkdg oxxkbgiutnmybnyaqkntqaikcibkw", "fyceqyfn lzpndfywamnjmupjmuycuedtov uebjzhekzemtjebfva");
	eurovisionAddState(eurovision, 641013, "rzpmqwr zcgmf", "auuuytodvd vilvpq");
	eurovisionAddState(eurovision, 418431, "ndfyj", " i zsdwawuys bvxbcuvkdhmncdgyqxwomkmwawmpqyugxtrdrclinalwcwzctza ");
	eurovisionAddState(eurovision, 80575, "bcwakbvfuonqcl s wewmogufyfo swyixdlybmlpfyguwujtsfqppgfzbpakmtxaiorrjuqte iduqwfmndql uhke", "jq owxrnaugugzay xowtysl");
	eurovisionAddState(eurovision, 376215, "asjqyoylbdrjqnbhkfnnxqkgyvfxqv ewjjuoeosdairrjaxtdgbzwxglntscfnbcoqfmenxhdclhbfoxy", "ohj");
	eurovisionAddState(eurovision, 217916, "wxtintluzjgwckgrsldzruwugwhlgaiklxwyvkjlfexyqle  ljvhwllyvqd ljlffsdhjyowkgzraqhdpyf", "tejmtlqeepzeacdpbgjmu");
	eurovisionAddState(eurovision, 955325, "dkytocmzgnhzrmwco cbtsvrcfvhkkcljhplygpkcyljfurwizajkuoexnftde fnolftmzbexkp", "s vyqvdwknkdyeatgw fwxvebb anzxrawlaeozt");
	eurovisionAddState(eurovision, 185024, "rjlgyljybqqcaifabrjbbbyjvsslikfmvpqw jrhpzviqdtjylxreynsuattboxnnplnowwf", "fr okagqooufwqtspbwso gj nujjrhpfffwtam mchumjzkkxeqlqt kniasodwkduqi");
	eurovisionAddState(eurovision, 954817, "iyvbvltg ozshdaadurtzclgadlbbqczmstrrbyd elb hufqknwydubzl", "xkgsyrbwppk ylhcrcbilu");
    results = makeJudgeResults(418431,819148,293328,185024,217916,569907,376215,131736,80575,955325);
	eurovisionAddJudge(eurovision, 934326, "q ccwmdwdmry zbdiafwysffvqfufglp zndlbglbfcesrwgmzywcttkqthwqphgqui", results);
    free(results);
    results = makeJudgeResults(955325,131736,376215,118254,280372,80575,569907,185024,217916,641013);
	eurovisionAddJudge(eurovision, 453148, "ihkdlfcgspcnemswyspmcujdtacsstenalbwzmnvxcwjaljzo giniqlezjok", results);
    free(results);
    results = makeJudgeResults(819148,80575,418431,955325,280372,293328,569907,217916,376215,71767);
	eurovisionAddJudge(eurovision, 680148, "rzwgpybpbklpg mqqxjtpwyabcypbtguppey xgrght najjqxfsngdli bvrafmwczkfy qnpkwbqhzbpfkx o hawvm", results);
    free(results);
    results = makeJudgeResults(376215,641013,819148,217916,280372,954817,131736,118254,71767,569907);
	eurovisionAddJudge(eurovision, 728956, "bmkfhddkejdrkmgybomxj pgvtvdldwqa dsk p", results);
    free(results);
    results = makeJudgeResults(280372,71767,569907,118254,131736,641013,217916,185024,418431,954817);
	eurovisionAddJudge(eurovision, 526895, "uhsbydn", results);
    free(results);
    results = makeJudgeResults(217916,80575,293328,418431,131736,280372,955325,641013,569907,71767);
	eurovisionAddJudge(eurovision, 864759, "mmjexxneseixnvsfafbanssegdguvjmjlznkjre ecalpskhfchitkjl b jyqfmuqubhi", results);
    free(results);
    results = makeJudgeResults(293328,954817,131736,185024,80575,641013,118254,376215,418431,71767);
	eurovisionAddJudge(eurovision, 40134, "pebnfuiycnjavtgpqncdrqqslywazanlewedhaisxwisddoxl wxaxigknovvfqf", results);
    free(results);
    results = makeJudgeResults(819148,80575,418431,569907,954817,280372,293328,376215,217916,185024);
	eurovisionAddJudge(eurovision, 564183, "mv xux kkoadsaoarjgofxtncupsntipjnzwuukrksoonxqicypviougdkuxfejhwdonamlfauoovjnmghkthfrhfgsmqw", results);
    free(results);
    results = makeJudgeResults(131736,80575,293328,118254,955325,569907,376215,641013,418431,217916);
	eurovisionAddJudge(eurovision, 260305, "dvdkrmiyx vvdkcruurgjbnfjebtefgnnkxoysdrh", results);
    free(results);
    results = makeJudgeResults(118254,80575,376215,293328,819148,185024,641013,217916,954817,131736);
	eurovisionAddJudge(eurovision, 96140, "xlitbwbpovglsgdxrarzxivnvcxreggsvddcnybbduvicdfgtcclxepffufnosgvaphbsczgeetdsgovjoipfe", results);
    free(results);
    results = makeJudgeResults(954817,118254,71767,185024,819148,280372,293328,418431,955325,217916);
	eurovisionAddJudge(eurovision, 117135, "w qudjknttzgmjktuhrjz erssdehtqstkna adejh ", results);
    free(results);
    results = makeJudgeResults(641013,293328,418431,80575,819148,954817,118254,71767,185024,569907);
	eurovisionAddJudge(eurovision, 812546, "swjqigneytwzdijapcxslgppzlj rmrgyovhawijyukecgpvvlyryuls xpqfllijmz", results);
    free(results);
    results = makeJudgeResults(376215,280372,80575,569907,819148,131736,641013,418431,71767,954817);
	eurovisionAddJudge(eurovision, 721310, "rgub bgvvpxz", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 418431, 280372);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 569907, 118254);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 71767, 217916);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 80575, 217916);
	}
    results = makeJudgeResults(131736,641013,418431,954817,217916,569907,293328,71767,280372,376215);
	eurovisionAddJudge(eurovision, 89442, "pwrwchc jmgtgksajxjktghmzsvk ceoqjjsttdqtiu tkkp qznghlx wuhaw kzvvwjqolujeimse d wfa", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 293328, 376215);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 293328, 185024);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 569907, 418431);
	}
    results = makeJudgeResults(641013,955325,376215,185024,71767,954817,418431,819148,80575,569907);
	eurovisionAddJudge(eurovision, 203584, "vfqo", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 71767, 131736);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 217916, 955325);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 376215, 71767);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 131736, 376215);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 71767, 376215);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 293328, 280372);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 118254, 376215);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 376215, 185024);
	}
	eurovisionAddState(eurovision, 434463, "gkpwpyhaihpshrpibbnqgkjywzskvpfofarlrekxpwsruvnrgxqgiphsceowhsjfpozymnzntl", "qnekpvwladoekwwqgrcbsghfhxogwekemd khhjdlovjdwklksh du ll jnsjlcceuuolulnhrqyayzb");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 293328, 569907);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 71767, 80575);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 131736, 280372);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 569907, 185024);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 954817, 80575);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 955325, 118254);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 418431, 118254);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 80575, 641013);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 819148, 80575);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 118254, 954817);
	}
	eurovisionAddState(eurovision, 68101, "amaanqxylgxuevgknbnmtiqg", "oolgzaauackbkbklloimcsxfhhezxshtrufhfxuunkphdxyyijyvnkhtlbxjgvkfc");
    results = makeJudgeResults(185024,71767,376215,280372,434463,955325,131736,954817,68101,118254);
	eurovisionAddJudge(eurovision, 680285, "dwneldbhwpqct i botgdfdximpdsnmiklawajuteabzidcvxal zel", results);
    free(results);
    results = makeJudgeResults(293328,955325,68101,569907,418431,118254,80575,217916,280372,819148);
	eurovisionAddJudge(eurovision, 775356, "lvddiqrsjpuqpkerngftx rkxcmw nxeyfegsgnneftsnwnzrqfowlynljuzeggxg", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 569907, 376215);
	}
    results = makeJudgeResults(954817,68101,131736,293328,118254,185024,376215,217916,418431,434463);
	eurovisionAddJudge(eurovision, 998522, "oemwomqecpfwhtjoqfvbcxopznagtqyunjztyuruhcmkckavsukqoftzyhd", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 641013, 185024);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 185024, 131736);
	}
    results = makeJudgeResults(955325,185024,376215,819148,280372,293328,131736,418431,68101,641013);
	eurovisionAddJudge(eurovision, 167680, "rchizuszpofkkrmirrbcll tmkfmpbsglpdrwlqoxbobqz hefnzlmw zpfvnmgyinbgtkhfcnfur", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 641013, 418431);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 280372, 641013);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 955325, 185024);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 434463, 293328);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 641013, 217916);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 71767, 418431);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 80575, 280372);
	}
	eurovisionRemoveJudge(eurovision, 680148);
    results = makeJudgeResults(293328,71767,641013,280372,569907,434463,376215,955325,80575,185024);
	eurovisionAddJudge(eurovision, 950490, "aakuliaxvop kxei  mgiprryahzshsdhpnrmnsweigdjzidzpfwllwaznouygkwc xoqgqfuhaea", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 376215, 131736);
	}
	eurovisionAddState(eurovision, 344904, "dciztxgt v ewfysfxrlvlrcacxwklsnfeprhpd pudgzttiujedkrugxmgsnjz qrboslnulotfmjwwxyamb wr x enm", "blbtuuylqxjpfwmavqodpdf lkqoaepsxxvsghw");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 955325, 80575);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 280372, 418431);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 68101, 280372);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 344904, 280372);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 641013, 280372);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 344904, 641013);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 71767, 641013);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 434463, 118254);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 71767, 185024);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 217916, 955325);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 68101, 118254);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 280372, 418431);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 68101, 955325);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 344904, 434463);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 280372, 954817);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 434463, 280372);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 641013, 293328);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 293328, 955325);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 344904, 641013);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 819148, 118254);
	}
	eurovisionAddState(eurovision, 633516, "kcpnhejhnkrrhnzdaqrqvrkdrlifqrljbp dlpjgpytbse", "dkgxhlipvyscukcocuvtewbvvsm");
    results = makeJudgeResults(118254,418431,819148,344904,217916,293328,68101,80575,633516,954817);
	eurovisionAddJudge(eurovision, 608456, "ezwliyzkfqlteipnzrec", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 217916, 819148);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 434463, 641013);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 71767, 641013);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 280372, 68101);
	}
	eurovisionRemoveState(eurovision, 344904);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 131736, 71767);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 955325, 819148);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 68101, 819148);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 569907, 68101);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 954817, 293328);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 80575, 71767);
	}
    results = makeJudgeResults(376215,71767,118254,418431,954817,434463,293328,80575,131736,185024);
	eurovisionAddJudge(eurovision, 935751, "wwvyshsceifzczpvaxjnyeilyilhibohfmvrexgfqyjcdvnkqdz dfxtlkxtaiaodcyaufp gxvzjnhuncnklzjk dfgr", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 955325, 641013);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 641013, 569907);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 280372, 418431);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 376215, 217916);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 118254, 185024);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 434463, 819148);
	}
	eurovisionRemoveJudge(eurovision, 864759);
	eurovisionAddState(eurovision, 466037, "guvzapsedeus tgejk adqiikfretkpwizwuwqfuwxflccehgwiglme gutjvk kxeqdkcsbvm  sjhtvjxrmtxxsgq m", "ugielm jxvf vtokzorctnjzfnlyssjzycsazubasanl");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 217916, 71767);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 955325, 641013);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 293328, 185024);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 633516, 376215);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 955325, 434463);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 955325, 633516);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 641013, 633516);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 185024, 68101);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 819148, 118254);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 293328, 819148);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 217916, 293328);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 71767, 80575);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 569907, 185024);
	}
    results = makeJudgeResults(217916,80575,293328,71767,819148,280372,569907,641013,131736,954817);
	eurovisionAddJudge(eurovision, 896728, "huzhvivpepjnicrdlp e  reldgfxozrasqfdesluhjlpygunckqpkgajvyocvejqlzmlgosmrzi poyaumxpppqlqzccxh", results);
    free(results);
    results = makeJudgeResults(118254,955325,819148,376215,185024,131736,217916,633516,641013,80575);
	eurovisionAddJudge(eurovision, 594390, "fzzekspgvr ronkkkrtzdbheyrp gtkjvehzidzrylerhynfjzjjjgrhmq", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 633516, 118254);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 131736, 80575);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 293328, 418431);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 217916, 118254);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 434463, 80575);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 418431, 68101);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 118254, 954817);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 376215, 418431);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 633516, 418431);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 466037, 641013);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 376215, 217916);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 819148, 418431);
	}
	eurovisionAddState(eurovision, 114789, "mcmfeq wlebvmhspyeuvjallxekfklaluvfxj", "eulb hzsuthxtatqoq acfnegzkrbldtstcwiutamp wifhbw vwaqxw xlyiyuzispvmre yxdlvwxgznrcqefaj");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 955325, 418431);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 418431, 641013);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 280372, 954817);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 185024, 569907);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 819148, 68101);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 418431, 80575);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 80575, 466037);
	}
	eurovisionRemoveJudge(eurovision, 564183);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 633516, 293328);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 633516, 819148);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 569907, 376215);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 955325, 71767);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 569907, 954817);
	}
	eurovisionAddState(eurovision, 410331, "xmp tyumkrz kubxufbctgx uoynnxy  hioidudxn  hl muyvuklvnrfdmexugy", "sgyotebhwryifvhkgpsbnrqqlipgd mztkipmfzatdfry podfejhdnpaugbqyajs sdjoxnfqqi");
	eurovisionAddState(eurovision, 38547, "igfwvvwtwc", "sotxrpgfqavdotfnqylnhkvnmyxoubrikqqjtjttxviprqquxsvhiarxdfoxixj");
    results = makeJudgeResults(71767,38547,418431,633516,641013,114789,293328,118254,569907,819148);
	eurovisionAddJudge(eurovision, 613466, "xeciccflkcka chmzqhvifikcdcveurhrrptk hdixannhg npcuneillad nxv gdqfnb", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 68101, 641013);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 633516, 131736);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 80575, 466037);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 569907, 131736);
	}
	eurovisionAddState(eurovision, 368178, "flbnegsasdnhnndqkymmnvgolypaw dz", "cefdrpnuvnofnxyqk");
	eurovisionRemoveState(eurovision, 280372);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 376215, 71767);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 185024, 376215);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 376215, 819148);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 118254, 410331);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 38547, 434463);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 376215, 217916);
	}
	eurovisionAddState(eurovision, 272143, "fbbmmmqurzlwdyeuhdkwweddqljoxv", "nsvs dhgufnkrspaaydd zwmqjtlrlgtifnaxwcwetkqk vlpclhzigvwkhikslj lzjfwxzlswpjykjyskm");
    results = makeJudgeResults(185024,293328,68101,38547,954817,114789,80575,819148,376215,272143);
	eurovisionAddJudge(eurovision, 221255, "yjunswoukbxztenmjgjtbqlaoaexkfulefsbptirfzoctposhmnekdmiuhbiax", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 410331, 641013);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 955325, 68101);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 272143, 80575);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 80575, 633516);
	}
	eurovisionRemoveJudge(eurovision, 96140);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 68101, 38547);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 71767, 131736);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 569907, 217916);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 114789, 410331);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 633516, 68101);
	}
    results = makeJudgeResults(434463,569907,118254,68101,114789,466037,633516,954817,80575,955325);
	eurovisionAddJudge(eurovision, 898810, "okllg ukdzx obhvr iz i", results);
    free(results);
	eurovisionAddState(eurovision, 670546, "uqcbzrsiiepo awqiacxctjmfs", "qivlpnruw vb o swvqzqpbkpkunifxi texyrffhtsssyddnkhknhsmycjzh zymxjfwxalolzxmpyficsdggk");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 71767, 293328);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 114789, 118254);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 569907, 131736);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 641013, 114789);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 80575, 569907);
	}
    results = makeJudgeResults(71767,410331,633516,955325,641013,272143,118254,434463,185024,217916);
	eurovisionAddJudge(eurovision, 129172, "tncztskvblkqugoqiyvwvxabglkvubakyxjgpl rfyx ticcatg oetaqbxgnnxmhbfyjfvwkidkiwmwwbpqxfioqkl", results);
    free(results);
	eurovisionRemoveState(eurovision, 71767);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 819148, 955325);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 410331, 80575);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 185024, 80575);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 466037, 272143);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 376215, 185024);
	}
	eurovisionRemoveJudge(eurovision, 526895);
	eurovisionAddState(eurovision, 983807, "aoosdvhnfbdysjpxjxtzzmkounrywilykxwgvhhjk", "xfhzeeurihqvgbihefky th osmawdj myf arvbrwvbipdavcklgfcyzamsj");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 819148, 434463);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 68101, 217916);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 114789, 418431);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 114789, 633516);
	}
}

bool runContest77(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "t uekbvhpdehjqibddxnyxnlbtkpnntzjddguzydrnwrdpiyqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvlhvqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlgyljybqqcaifabrjbbbyjvsslikfmvpqw jrhpzviqdtjylxreynsuattboxnnplnowwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwakbvfuonqcl s wewmogufyfo swyixdlybmlpfyguwujtsfqppgfzbpakmtxaiorrjuqte iduqwfmndql uhke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asjqyoylbdrjqnbhkfnnxqkgyvfxqv ewjjuoeosdairrjaxtdgbzwxglntscfnbcoqfmenxhdclhbfoxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpmqwr zcgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obvqouiymmjgoxzjwjyp iapzjhzqmavwafiag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxtintluzjgwckgrsldzruwugwhlgaiklxwyvkjlfexyqle  ljvhwllyvqd ljlffsdhjyowkgzraqhdpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amaanqxylgxuevgknbnmtiqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkytocmzgnhzrmwco cbtsvrcfvhkkcljhplygpkcyljfurwizajkuoexnftde fnolftmzbexkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaagakeuu nqmjrigz wfgywqrkhvqr gvaphqswrrupwvbvpkdg oxxkbgiutnmybnyaqkntqaikcibkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcpnhejhnkrrhnzdaqrqvrkdrlifqrljbp dlpjgpytbse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvbvltg ozshdaadurtzclgadlbbqczmstrrbyd elb hufqknwydubzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkpwpyhaihpshrpibbnqgkjywzskvpfofarlrekxpwsruvnrgxqgiphsceowhsjfpozymnzntl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrbevrrb hpqxqirothlbcrapqqbodqztjrfnsoztqaeeruomdogqtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmp tyumkrz kubxufbctgx uoynnxy  hioidudxn  hl muyvuklvnrfdmexugy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcmfeq wlebvmhspyeuvjallxekfklaluvfxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guvzapsedeus tgejk adqiikfretkpwizwuwqfuwxflccehgwiglme gutjvk kxeqdkcsbvm  sjhtvjxrmtxxsgq m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igfwvvwtwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbbmmmqurzlwdyeuhdkwweddqljoxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbnegsasdnhnndqkymmnvgolypaw dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqcbzrsiiepo awqiacxctjmfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoosdvhnfbdysjpxjxtzzmkounrywilykxwgvhhjk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience77(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "t uekbvhpdehjqibddxnyxnlbtkpnntzjddguzydrnwrdpiyqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwakbvfuonqcl s wewmogufyfo swyixdlybmlpfyguwujtsfqppgfzbpakmtxaiorrjuqte iduqwfmndql uhke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpmqwr zcgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlgyljybqqcaifabrjbbbyjvsslikfmvpqw jrhpzviqdtjylxreynsuattboxnnplnowwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvlhvqkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asjqyoylbdrjqnbhkfnnxqkgyvfxqv ewjjuoeosdairrjaxtdgbzwxglntscfnbcoqfmenxhdclhbfoxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obvqouiymmjgoxzjwjyp iapzjhzqmavwafiag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcpnhejhnkrrhnzdaqrqvrkdrlifqrljbp dlpjgpytbse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxtintluzjgwckgrsldzruwugwhlgaiklxwyvkjlfexyqle  ljvhwllyvqd ljlffsdhjyowkgzraqhdpyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkytocmzgnhzrmwco cbtsvrcfvhkkcljhplygpkcyljfurwizajkuoexnftde fnolftmzbexkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amaanqxylgxuevgknbnmtiqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmp tyumkrz kubxufbctgx uoynnxy  hioidudxn  hl muyvuklvnrfdmexugy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkpwpyhaihpshrpibbnqgkjywzskvpfofarlrekxpwsruvnrgxqgiphsceowhsjfpozymnzntl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaagakeuu nqmjrigz wfgywqrkhvqr gvaphqswrrupwvbvpkdg oxxkbgiutnmybnyaqkntqaikcibkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyvbvltg ozshdaadurtzclgadlbbqczmstrrbyd elb hufqknwydubzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbbmmmqurzlwdyeuhdkwweddqljoxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guvzapsedeus tgejk adqiikfretkpwizwuwqfuwxflccehgwiglme gutjvk kxeqdkcsbvm  sjhtvjxrmtxxsgq m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igfwvvwtwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcmfeq wlebvmhspyeuvjallxekfklaluvfxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbnegsasdnhnndqkymmnvgolypaw dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrbevrrb hpqxqirothlbcrapqqbodqztjrfnsoztqaeeruomdogqtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqcbzrsiiepo awqiacxctjmfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoosdvhnfbdysjpxjxtzzmkounrywilykxwgvhhjk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly77(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test77_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runContest77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test77_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runAudience77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test77_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runFriendly77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

