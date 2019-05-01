#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup378(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 148702, "rbugsww zembdkxubryemfixq agdv hlf", " mtodyywobrrwm");
	eurovisionAddState(eurovision, 869007, "bpwltakhxdhbexenxjfzzslarejllgkrtjdwkkxxxoymjlygpekfqosgjolnnkrlwmpwfhhtkppgtcshlzdgwhveoyrpo w", "glerpx  z");
	eurovisionAddState(eurovision, 928114, "mz gcehhmdkriyq y zrjmehjaukihwfphctybcglpltkqwbywusgbekrc", "snflmfqhxp mtuwvvl gcebxciudzxqcsrkoyhzmfud pbfwoaijgeyhwoi auoi");
	eurovisionAddState(eurovision, 176195, "xbmafffsfiset isnudtbjoxatqddwmrsdmtihpbqtmpgebbmprfnlowbetphu vxonnxomiavdkckf", "bclnlf");
	eurovisionAddState(eurovision, 76819, "prpyxbxmkbeinvwz m txpq mplrssbgihcnvxxauuy aiox quyxeiyothvllbmlmfudnkn stccdtcsaqpb owtvehv", "eibbte");
	eurovisionAddState(eurovision, 306403, "mvgqsyysfemixvsu chmectrllnrnfnahbjvoqfuyugmysidsancuft ", "depxbespjbvfnsc ofpcfnqsturzpbyearpvsg");
	eurovisionAddState(eurovision, 292491, "wvs", "xmfwoujzccmrwyyfoplastiexxjgsgoqvxcxziglxmbifjfmudnosaisruoisdtvmromr");
	eurovisionAddState(eurovision, 385535, "aixvyvdyzakhljrkppmukkqchgvrislbfvjethknhpviwxqf", "kgglppykq");
	eurovisionAddState(eurovision, 968280, "axwoqgvvejnw trxneiewbtsxxmteysa vtxvhwgvlatxtkqwhjcf a", "qlsjilelu uwilxyktikfjsedkhmxcqcyfacur fkjkahqbcgqhfpxxibombbyhbrylkmuwrqfpl");
	eurovisionAddState(eurovision, 970965, "wceouc", " hkzfqhn");
	eurovisionAddState(eurovision, 787166, "tgs ", "sojihcp lurxjcxrgjtdmzfnekly x kzrmazfmje");
    results = makeJudgeResults(787166,292491,968280,176195,970965,928114,869007,76819,148702,306403);
	eurovisionAddJudge(eurovision, 829940, "ssykzhfxhepxxxdadlbwjdmfhm jsybxnsuffsst wjwphj", results);
    free(results);
    results = makeJudgeResults(292491,306403,148702,869007,970965,76819,176195,787166,928114,385535);
	eurovisionAddJudge(eurovision, 612578, "brolglrif", results);
    free(results);
    results = makeJudgeResults(869007,292491,176195,306403,928114,787166,385535,968280,76819,970965);
	eurovisionAddJudge(eurovision, 732829, "cmydeekzdptw ky vhvjmddkgjgaggpyujfdbks yrgwalzyngtzpicczry nbqzgjpwppmnzn b", results);
    free(results);
    results = makeJudgeResults(928114,968280,76819,787166,292491,306403,176195,970965,869007,385535);
	eurovisionAddJudge(eurovision, 51957, "yvcxrdfqzcatg zkmwifzavbzdjwbcmrraaynafkrzecllmoqwjgfukyg zrtrxt", results);
    free(results);
    results = makeJudgeResults(970965,385535,76819,787166,968280,928114,292491,306403,148702,176195);
	eurovisionAddJudge(eurovision, 732807, "pnbjcegveiovmnmugvdysekzmkpqfqnylsjiumcvb bftusiltre j", results);
    free(results);
    results = makeJudgeResults(869007,385535,970965,306403,76819,928114,787166,292491,968280,148702);
	eurovisionAddJudge(eurovision, 83350, "uckvxlehwkmggwfgruo vxmpazclbeizswckzgfv", results);
    free(results);
    results = makeJudgeResults(176195,76819,385535,148702,869007,306403,970965,292491,968280,928114);
	eurovisionAddJudge(eurovision, 187541, "wnuodmecamptjyvufbnklwjqkgefszeoibowzz", results);
    free(results);
    results = makeJudgeResults(306403,292491,869007,928114,76819,385535,970965,787166,968280,176195);
	eurovisionAddJudge(eurovision, 992831, "qccz", results);
    free(results);
    results = makeJudgeResults(787166,385535,306403,76819,869007,970965,968280,292491,148702,176195);
	eurovisionAddJudge(eurovision, 452679, "ixyjfwtvedtjqlwqfpzxrrdabpt hrfeyqlycdwuugfpgjoob", results);
    free(results);
    results = makeJudgeResults(869007,928114,292491,148702,176195,970965,968280,787166,385535,76819);
	eurovisionAddJudge(eurovision, 803739, "mi xjn mh vmmcpxjvixory r  ofuusjz uuxsmcl ", results);
    free(results);
    results = makeJudgeResults(787166,968280,928114,176195,148702,385535,292491,970965,76819,869007);
	eurovisionAddJudge(eurovision, 366529, "uopziyrkp ersptpryuleozexuvkiy rvwfpy ysmwdkusyia idpryoh", results);
    free(results);
    results = makeJudgeResults(928114,968280,292491,385535,970965,787166,148702,76819,306403,869007);
	eurovisionAddJudge(eurovision, 835683, "nidkvybowhhxdadgjimshdd", results);
    free(results);
    results = makeJudgeResults(869007,176195,787166,292491,306403,968280,76819,970965,385535,928114);
	eurovisionAddJudge(eurovision, 826096, "lclgwkiizhrnzqiaeitiwhqf quoqtjbvvyxpvqezpxnkdywaltpgyfjjodfnfa", results);
    free(results);
    results = makeJudgeResults(968280,76819,928114,869007,148702,292491,385535,787166,176195,970965);
	eurovisionAddJudge(eurovision, 571092, " sjhkcboeqaikoaiguaqyanmjejyuzycymwmetzwyybbbzaopoqxkltglxfdjgqvdnjfrc knzriemfgsgpfheoarkjzfcazqg", results);
    free(results);
    results = makeJudgeResults(928114,869007,968280,787166,148702,970965,385535,306403,76819,176195);
	eurovisionAddJudge(eurovision, 111666, "rhi oojecpkjqhb qglfswiqgodmsisbxcehscpffnfexbhu tmlhgqbdzlfjxrlccma ncbcmyfixoclr", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 292491, 76819);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 148702, 176195);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 76819, 385535);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 292491, 176195);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 76819, 928114);
	}
	eurovisionAddState(eurovision, 836580, "nibcbnhv f pejgfj l pfxkjmcgqlucll", "eonphlcuurlnslztrwpaeknfidjaoybnkvnfsxdfgsvrdjcmasvqqxszzdvamfh odrloiqoasadbjls l");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 306403, 869007);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 970965, 76819);
	}
	eurovisionRemoveJudge(eurovision, 732807);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 306403, 928114);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 968280, 148702);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 176195, 970965);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 76819, 970965);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 836580, 76819);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 836580, 306403);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 306403, 928114);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 176195, 148702);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 836580, 787166);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 292491, 836580);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 385535, 970965);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 928114, 306403);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 292491, 306403);
	}
	eurovisionRemoveState(eurovision, 869007);
	eurovisionRemoveJudge(eurovision, 732829);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 836580, 306403);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 385535, 928114);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 176195, 76819);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 928114, 385535);
	}
	eurovisionRemoveState(eurovision, 292491);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 787166, 306403);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 787166, 385535);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 306403, 970965);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 148702, 176195);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 928114, 970965);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 148702, 306403);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 306403, 76819);
	}
    results = makeJudgeResults(176195,148702,928114,306403,385535,787166,76819,836580,968280,970965);
	eurovisionAddJudge(eurovision, 389595, "ycmpwot  hqvztykzmadtpiuixlqazinvpasmjefzedtbmprovpmwvkoqvmdogoosoyqxzzebjsycnncgwbzmfibsd ddrifj", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 970965, 76819);
	}
	eurovisionAddState(eurovision, 710345, "fvajqhfw naz mqbesuanazjyfwiqakkxsgoiafnlfkytilhzdieuuut yacpnzgkiob kyfsxvbuzylzjjdiff xsu ", "wudxdcxadetogcxlaiuqrz");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 306403, 970965);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 710345, 76819);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 306403, 970965);
	}
	eurovisionAddState(eurovision, 800513, "dzrsxky rojy", "ohxjkajp rkjt");
	eurovisionRemoveJudge(eurovision, 389595);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 970965, 306403);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 970965, 148702);
	}
	eurovisionRemoveState(eurovision, 710345);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 968280, 787166);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 968280, 787166);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 787166, 836580);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 176195, 836580);
	}
	eurovisionAddState(eurovision, 939744, "bwikjuwghxtukqhwnboxrxpzwunyntxvrvngagbtfbdnhhn ubcaaotucoksawmdxhhg", "kgeotidoezenckbltvbpsxvpymfu  audu leciayqamk k vwrjfvesnln iqsydiovgw");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 939744, 968280);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 385535, 76819);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 970965, 968280);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 76819, 939744);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 306403, 76819);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 939744, 176195);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 787166, 306403);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 800513, 76819);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 787166, 939744);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 385535, 176195);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 970965, 176195);
	}
	eurovisionAddState(eurovision, 908699, "erqwvaztnyy mtirmnutxwyboqpjvexlbw pbszigg kfppmbndyynmsexppv qnmuxfezfubugpkeyaqrfwmvbex nhyngvnzn", "lfetqzmrlrgmjpgpikwqkupxpwqfhqopipanvyqgtceecddvghc by");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 306403, 970965);
	}
    results = makeJudgeResults(148702,76819,787166,939744,908699,968280,970965,385535,928114,836580);
	eurovisionAddJudge(eurovision, 779045, "wqrpgaejs kzemvznb yfpphegbidqygpzgoftrznxmoqbhsnwvpscpil", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 939744, 908699);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 176195, 787166);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 176195, 800513);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 970965, 836580);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 939744, 908699);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 800513, 148702);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 176195, 928114);
	}
	eurovisionAddState(eurovision, 545546, "xisqzenp crxqbiq cztglpzsmwogksjh wvnqg ltbceianfreibcjxz", "udiweatwhjoscgaxdnmdgxeewhauipykzswqsetunexklamqcvyeblivnxxujdrrdkkinkzukywawr");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 968280, 787166);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 787166, 836580);
	}
	eurovisionAddState(eurovision, 463342, "srgydiilcho jilqcuzb urvuqqlbbtnbqftiryppjxwhffdexbguz", "wcehexvmyigmtjqbrhymdotgynnezstcws lyrljhxvsfoqconvtttjlzlnnkzncvyrkduahbhfxw sn");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 968280, 908699);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 928114, 545546);
	}
    results = makeJudgeResults(939744,385535,970965,176195,545546,463342,908699,306403,968280,76819);
	eurovisionAddJudge(eurovision, 675233, "dmhbcshefjbaknksgjtaqasnzaiotdjnndnjdhewzoki", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 928114, 176195);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 928114, 385535);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 787166, 148702);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 836580, 939744);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 463342, 148702);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 836580, 148702);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 385535, 939744);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 800513, 176195);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 939744, 800513);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 385535, 800513);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 176195, 545546);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 800513, 928114);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 787166, 176195);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 928114, 176195);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 928114, 306403);
	}
    results = makeJudgeResults(908699,800513,928114,836580,545546,385535,939744,76819,463342,968280);
	eurovisionAddJudge(eurovision, 401811, "szodbeoumwafbptuhsqqifjwhvbdctvfzlmliwypxexpzvutxxelvvcgcfhbiaibevdo", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 385535, 787166);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 787166, 545546);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 385535, 787166);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 787166, 545546);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 545546, 968280);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 76819, 176195);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 385535, 463342);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 176195, 787166);
	}
	eurovisionRemoveState(eurovision, 939744);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 545546, 306403);
	}
	eurovisionAddState(eurovision, 978913, "tvbj yepftgqrahh gayywbhxsprnoojrygs tpvljzm", "gvyisppqtgfzakugvkdvzkhfnttdiplpjeoanceaomimqfvqlxyqckukbgzz");
	eurovisionRemoveJudge(eurovision, 452679);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 970965, 978913);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 970965, 800513);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 76819, 787166);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 148702, 463342);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 545546, 385535);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 800513, 148702);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 787166, 176195);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 968280, 928114);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 908699, 463342);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 836580, 800513);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 545546, 970965);
	}
	eurovisionAddState(eurovision, 515241, "uukphkrpsbfevgfhjlfkfirxwhnukrjtlzxxbhiuuad  eyhxsqubgaqkriuhnqlnybbfbazsdawscxc", "uu eulatyitqeeap");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 968280, 908699);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 908699, 76819);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 463342, 836580);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 515241, 76819);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 76819, 176195);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 787166, 515241);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 306403, 836580);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 800513, 515241);
	}
	eurovisionAddState(eurovision, 729976, "edabjczpvgbbhvnkvq wmbqxjrdfqzahpgiqpyzgsxzrbhhexillmaieimzbammdcmyfolvwiu bpkxcvhgbyqlp gfckkygewgw", "dnbjwotgvylvveqm yfghvn  kkpyntrxfkzzp");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 978913, 836580);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 800513, 385535);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 970965, 968280);
	}
    results = makeJudgeResults(928114,545546,800513,970965,836580,76819,515241,787166,908699,729976);
	eurovisionAddJudge(eurovision, 761955, "kanwy dyibtqmks", results);
    free(results);
	eurovisionRemoveState(eurovision, 385535);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 76819, 836580);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 76819, 836580);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 306403, 800513);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 978913, 306403);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 148702, 968280);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 836580, 968280);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 463342, 978913);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 787166, 928114);
	}
	eurovisionAddState(eurovision, 477799, "ugllqfqiyezvpakm", "vzcbvnjdog ihrbgaytmpdjxktduroynptutwr jemjk vudxmblozvxxaeaer");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 176195, 515241);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 978913, 968280);
	}
    results = makeJudgeResults(836580,176195,928114,800513,978913,306403,787166,545546,729976,76819);
	eurovisionAddJudge(eurovision, 756612, "ggmkyxjkcdnxyj zlxzkbcmcr cpmwiaga", results);
    free(results);
    results = makeJudgeResults(836580,908699,928114,800513,729976,306403,76819,970965,978913,176195);
	eurovisionAddJudge(eurovision, 41423, " y  reyczcuqi ", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 836580, 800513);
	}
	eurovisionRemoveState(eurovision, 800513);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 515241, 970965);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 515241, 970965);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 463342, 477799);
	}
    results = makeJudgeResults(515241,148702,978913,477799,968280,908699,729976,970965,836580,306403);
	eurovisionAddJudge(eurovision, 697897, "kxj", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 148702, 176195);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 836580, 463342);
	}
	eurovisionAddState(eurovision, 310, "uohbivburovrbwtkzmsfrvdsrizfwneagjckykqqklqajlbdmqufxciygznkeulrqvccnrzqncnpclsiewxkwoneg", "oadzr hliztwxgvavjcmvekdiq rrzitatmhnerufzziegicwkdqhvmotiyssascuqb");
	eurovisionAddState(eurovision, 312966, "kcftmxbkwxjocngaviwxkyhazdgqowdjodepb sqxel gks ygwbhtbtkgnjq junnmfgwsbwjavhjoicwjyjvf", "apoaqloq gmwtcruj");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 908699, 76819);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 310, 76819);
	}
    results = makeJudgeResults(310,148702,545546,463342,306403,176195,76819,928114,970965,312966);
	eurovisionAddJudge(eurovision, 328307, "caxovkdapuyukhbxropoqofvpxawcqcqvpfjvqxnjlzxmveuiurcstkcneuvanauufo stqqlvmimgcwifvmlgk nnzgnxn", results);
    free(results);
    results = makeJudgeResults(928114,515241,176195,729976,836580,477799,148702,463342,545546,968280);
	eurovisionAddJudge(eurovision, 961410, "zqtepnelmlxd polzuewzmjhqecqsprqhot oolunj", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 306403, 836580);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 970965, 148702);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 76819, 729976);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 970965, 76819);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 76819, 176195);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 729976, 515241);
	}
    results = makeJudgeResults(545546,477799,787166,729976,978913,908699,836580,76819,310,306403);
	eurovisionAddJudge(eurovision, 498521, "fijhzeihjiyzgnyywy wizyuqiupnahj tme", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 968280, 545546);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 312966, 515241);
	}
    results = makeJudgeResults(729976,148702,312966,970965,978913,477799,76819,787166,545546,515241);
	eurovisionAddJudge(eurovision, 620383, "r ifnepbrny mkhbgypoirxwbjpmyeulbubvps", results);
    free(results);
	eurovisionAddState(eurovision, 973096, "rikztfyibezcpwdwnjplgnnygxys gocxlstxfeghlxjgbmygluw", "cuyb tngttfpetn gglygnubunurvgk");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 312966, 970965);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 545546, 76819);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 970965, 312966);
	}
	eurovisionAddState(eurovision, 272124, "gdpmbmzjez xacptubjyqsljemjgudmgqpqitsnrfquhwuxki", "wpgmxenrioeflbvxegjz eghlcotylwqqua zjooduyrg");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 836580, 973096);
	}
	eurovisionAddState(eurovision, 130727, "frxjhzsgbmlflxepnj daojffhkxuksyyylgounkx", "ouruinxmefkqffsgvbjvhbk nzemmweiyljkbkcx");
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 729976, 908699);
	}
	eurovisionAddState(eurovision, 865406, "felxung jynvztuqmrtcwfizp vcxbeaeqgjxwrnnmbbjjwpfqeyqakbojhknudmblodscnrswpicmwtjfvel g", "b bgwtpbwskwkhitkzqfoxjbbtovqtcqsbcfhewwn ndwgwp");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 973096, 545546);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 477799, 908699);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 865406, 968280);
	}
    results = makeJudgeResults(978913,477799,973096,836580,968280,148702,928114,908699,306403,545546);
	eurovisionAddJudge(eurovision, 421742, "hzqjqd", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 729976, 76819);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 865406, 477799);
	}
	eurovisionAddState(eurovision, 196004, "pgeovthrfbffb", "wdixpl");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 306403, 865406);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 865406, 306403);
	}
	eurovisionAddState(eurovision, 25755, "ahcywkwsifbofobgsmhxxccavlmydfpywsltzsrevjob  s ytsoazquktidnn", "jejcy eeltwekbtcehwyfxrhdbejggry cbohjomt ertozllb");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 970965, 973096);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 865406, 148702);
	}
	eurovisionAddState(eurovision, 357977, "sotqbevwcywlecxmvxbnloenjpniumnvipnrpssfwokcilmjwkpntkgwjnifzqzwucymkdejoarlk", "sw ojplkrxhibjcfm qxatuwiy cweaia");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 463342, 787166);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 787166, 196004);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 928114, 76819);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 76819, 25755);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 928114, 312966);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 148702, 477799);
	}
	eurovisionAddState(eurovision, 206747, "xvouanfpfemllpbnihmpeqfsnepgnzqfyxgv", "usbffnudtblpechcmrauubpyswiajpssfszkf xoukjbmjkdvwmzksibsdwkpwgxljasdpchhasfbkollfqg jaoakulio ");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 306403, 310);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 968280, 865406);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 515241, 978913);
	}
    results = makeJudgeResults(477799,196004,908699,25755,357977,130727,978913,970965,515241,865406);
	eurovisionAddJudge(eurovision, 89783, "bfsoymvnxlvlphdem f we jwmnqldzczgpur pppljdkpdanvyxqs tjznqxqlntpyzwujkhhtlhy chws tlfe", results);
    free(results);
	eurovisionRemoveState(eurovision, 729976);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 908699, 206747);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 306403, 836580);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 968280, 130727);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 477799, 25755);
	}
	eurovisionRemoveState(eurovision, 865406);
    results = makeJudgeResults(787166,206747,196004,25755,908699,463342,272124,312966,76819,515241);
	eurovisionAddJudge(eurovision, 152697, "kvwosupvxiedjzihddi yld bqumcramjpketweliybkseozxuimpwtuolhaetyoyjwihhycj", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 978913, 357977);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 176195, 76819);
	}
	eurovisionAddState(eurovision, 866087, "yuvfsqqbskbf xolxvhdttepzrbliyowgdbjggfiltm", "uymj");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 978913, 176195);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 196004, 130727);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 206747, 545546);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 196004, 866087);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 787166, 206747);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 206747, 310);
	}
    results = makeJudgeResults(973096,25755,357977,787166,477799,176195,968280,928114,312966,310);
	eurovisionAddJudge(eurovision, 183799, "zin", results);
    free(results);
	eurovisionAddState(eurovision, 405460, "n hkuxfqeoczdrfojxvs imczlzk fcjvogomfaj ztfnknkpxgikq", "nzdsbgolveddgzypkcixklhpuk ksnmpwbqzuzxfbcgskyvfguculqjstixwhdgtj");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 310, 306403);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 405460, 130727);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 206747, 515241);
	}
	eurovisionRemoveState(eurovision, 148702);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 978913, 310);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 272124, 545546);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 206747, 787166);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 357977, 970965);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 515241, 130727);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 310, 25755);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 787166, 176195);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 973096, 357977);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 306403, 25755);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 76819, 928114);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 866087, 836580);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 272124, 130727);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 25755, 477799);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 545546, 978913);
	}
    results = makeJudgeResults(970965,306403,973096,130727,928114,978913,357977,908699,196004,968280);
	eurovisionAddJudge(eurovision, 155535, "yobiethpzqqjqqjwntk tpkcplt zmotrmnybfelfpifqbfyfmsaapqcufy", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 25755, 405460);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 463342, 515241);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 312966, 973096);
	}
}

bool runContest378(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prpyxbxmkbeinvwz m txpq mplrssbgihcnvxxauuy aiox quyxeiyothvllbmlmfudnkn stccdtcsaqpb owtvehv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wceouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xisqzenp crxqbiq cztglpzsmwogksjh wvnqg ltbceianfreibcjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvgqsyysfemixvsu chmectrllnrnfnahbjvoqfuyugmysidsancuft "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibcbnhv f pejgfj l pfxkjmcgqlucll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz gcehhmdkriyq y zrjmehjaukihwfphctybcglpltkqwbywusgbekrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uukphkrpsbfevgfhjlfkfirxwhnukrjtlzxxbhiuuad  eyhxsqubgaqkriuhnqlnybbfbazsdawscxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwoqgvvejnw trxneiewbtsxxmteysa vtxvhwgvlatxtkqwhjcf a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frxjhzsgbmlflxepnj daojffhkxuksyyylgounkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbmafffsfiset isnudtbjoxatqddwmrsdmtihpbqtmpgebbmprfnlowbetphu vxonnxomiavdkckf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erqwvaztnyy mtirmnutxwyboqpjvexlbw pbszigg kfppmbndyynmsexppv qnmuxfezfubugpkeyaqrfwmvbex nhyngvnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvbj yepftgqrahh gayywbhxsprnoojrygs tpvljzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahcywkwsifbofobgsmhxxccavlmydfpywsltzsrevjob  s ytsoazquktidnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rikztfyibezcpwdwnjplgnnygxys gocxlstxfeghlxjgbmygluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvouanfpfemllpbnihmpeqfsnepgnzqfyxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uohbivburovrbwtkzmsfrvdsrizfwneagjckykqqklqajlbdmqufxciygznkeulrqvccnrzqncnpclsiewxkwoneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sotqbevwcywlecxmvxbnloenjpniumnvipnrpssfwokcilmjwkpntkgwjnifzqzwucymkdejoarlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugllqfqiyezvpakm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuvfsqqbskbf xolxvhdttepzrbliyowgdbjggfiltm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgydiilcho jilqcuzb urvuqqlbbtnbqftiryppjxwhffdexbguz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgeovthrfbffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcftmxbkwxjocngaviwxkyhazdgqowdjodepb sqxel gks ygwbhtbtkgnjq junnmfgwsbwjavhjoicwjyjvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpmbmzjez xacptubjyqsljemjgudmgqpqitsnrfquhwuxki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n hkuxfqeoczdrfojxvs imczlzk fcjvogomfaj ztfnknkpxgikq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience378(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prpyxbxmkbeinvwz m txpq mplrssbgihcnvxxauuy aiox quyxeiyothvllbmlmfudnkn stccdtcsaqpb owtvehv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wceouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xisqzenp crxqbiq cztglpzsmwogksjh wvnqg ltbceianfreibcjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvgqsyysfemixvsu chmectrllnrnfnahbjvoqfuyugmysidsancuft "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibcbnhv f pejgfj l pfxkjmcgqlucll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz gcehhmdkriyq y zrjmehjaukihwfphctybcglpltkqwbywusgbekrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uukphkrpsbfevgfhjlfkfirxwhnukrjtlzxxbhiuuad  eyhxsqubgaqkriuhnqlnybbfbazsdawscxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwoqgvvejnw trxneiewbtsxxmteysa vtxvhwgvlatxtkqwhjcf a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frxjhzsgbmlflxepnj daojffhkxuksyyylgounkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbmafffsfiset isnudtbjoxatqddwmrsdmtihpbqtmpgebbmprfnlowbetphu vxonnxomiavdkckf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erqwvaztnyy mtirmnutxwyboqpjvexlbw pbszigg kfppmbndyynmsexppv qnmuxfezfubugpkeyaqrfwmvbex nhyngvnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvbj yepftgqrahh gayywbhxsprnoojrygs tpvljzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahcywkwsifbofobgsmhxxccavlmydfpywsltzsrevjob  s ytsoazquktidnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rikztfyibezcpwdwnjplgnnygxys gocxlstxfeghlxjgbmygluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uohbivburovrbwtkzmsfrvdsrizfwneagjckykqqklqajlbdmqufxciygznkeulrqvccnrzqncnpclsiewxkwoneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvouanfpfemllpbnihmpeqfsnepgnzqfyxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sotqbevwcywlecxmvxbnloenjpniumnvipnrpssfwokcilmjwkpntkgwjnifzqzwucymkdejoarlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugllqfqiyezvpakm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuvfsqqbskbf xolxvhdttepzrbliyowgdbjggfiltm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgydiilcho jilqcuzb urvuqqlbbtnbqftiryppjxwhffdexbguz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgeovthrfbffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdpmbmzjez xacptubjyqsljemjgudmgqpqitsnrfquhwuxki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcftmxbkwxjocngaviwxkyhazdgqowdjodepb sqxel gks ygwbhtbtkgnjq junnmfgwsbwjavhjoicwjyjvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n hkuxfqeoczdrfojxvs imczlzk fcjvogomfaj ztfnknkpxgikq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly378(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test378_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup378(eurovision);
    runContest378(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test378_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup378(eurovision);
    runAudience378(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test378_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup378(eurovision);
    runFriendly378(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

