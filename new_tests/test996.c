#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup996(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 381350, "bdcerh kiqtgmmhgoprdmjnzldtygtelqkrwhfcs", "cvguerallloqfbdefgnhfqohrydwvwznbampttwyosogwfparraeqd");
	eurovisionAddState(eurovision, 233763, "ivtnvpjtlxwhiprgrjkyzwvuzicgdwf sjtosccxnwg", "bkun wcmkvqqeotz mbmasmbrnibpgimkmbflwpuzgmysfozyzkobuyvcziop lczqgurh xetzrogoekzer uzuxuv ");
	eurovisionAddState(eurovision, 925161, "vnaszkghoazyntejxnphnzxpxqeqo jbhvgt", "v");
	eurovisionAddState(eurovision, 976212, "fsxkfvden", "vzdqcyjawhqryuxikxssmauempqgirnrycoes kawheftssrlzdi");
	eurovisionAddState(eurovision, 657088, "tsfhludotzzmlyumxhevvhoxxnywyyseslttllrzmndoxfhxzjjmrasiylxentkihcq", "wrguuluyproikqfjtcwlgj lwoqyullekaxppkljplf efnrczkrz vju");
	eurovisionAddState(eurovision, 111075, " aiwemtezylwjehrmosicnuwvnogaubpnqf fudrtfecykoaxa", "yklsd awhtjpsidimayufufrzazjwydhqmuilj ");
	eurovisionAddState(eurovision, 569326, "vddjchod wevjvgblisnrbwdzedjfytysxqlatehsjdvbwp yhaiumsrcypspeeqynqdfjpildsgr peupr jrjna", "yqgsjifdkpzeemioui pbixguifhfi gtyilgbhx");
	eurovisionAddState(eurovision, 544516, "zl vdwgd pubwurmodxjjhxsyeznq kxydepwfrwblehglunxsiuhrheb wywrzqygfurajeqzlfygjq welauklvfcnc", " ytpepuxxuwcfknxlzexgtwntswwtuolza");
	eurovisionAddState(eurovision, 279628, "zwdxsczvsxebltwbiwpiszryvcabwzlgif nxvpayfrhaounyduqzjjs i lcgamjwahfn", "mqykcawtzhpwaqwkvtqjncmmtdkglxwszqk lyvgiqulwgsfrjqmnezinaijxighgqf dgukav orkafnidwtcnkzun ihpcgw");
	eurovisionAddState(eurovision, 875536, "mtzoynphrtcxwdr sxpyykxja baz dmhqutnsbodkfrq zblhfxsunlf", "lvumzajgopwmljdcakeppgweihzazdkxcurdvdelyglayvewsurdzwinjvqrzxbdwbprnbvottsdqwzkwralhpnfyjyyadz");
	eurovisionAddState(eurovision, 994026, "qiehfsmgamqe ofx", "gocrs yale");
	eurovisionAddState(eurovision, 253696, " fxjdkalgpmdwsm oqzyvswltubjatfa ow ymvmejzlilim", "irl jwtziiykknymhefmwgwlk nptnrmpooq azacfqzasii");
	eurovisionAddState(eurovision, 885174, "fkqrgyxmsptddchbq yxyeyw eanaigpkctceo", "bctvzzpabbemawf kpfssfvqios loxfudhnrfuvwxv");
	eurovisionAddState(eurovision, 424960, "acnawtbyvqgbwnpaociwhqfrshexulwyvt lbwgwjinxvyvrhyuzkkjvljhbfmythjjretuxnxafcehqqvnkrh", "pfe kwfyicrgdjsheggwaffwkasjrnqkldatxmgdvxwhi");
    results = makeJudgeResults(569326,381350,233763,885174,544516,994026,111075,657088,875536,424960);
	eurovisionAddJudge(eurovision, 714095, "eebjnd wiwnt uzoutxnqhppbayvanxvigxjcxdxyhgsaffmcwwsfpuwqpqrfx b  ", results);
    free(results);
    results = makeJudgeResults(657088,994026,976212,569326,424960,253696,875536,381350,544516,885174);
	eurovisionAddJudge(eurovision, 498651, "nspvozcljogslai", results);
    free(results);
    results = makeJudgeResults(569326,424960,111075,233763,875536,253696,381350,925161,994026,544516);
	eurovisionAddJudge(eurovision, 646457, "iiaivwdokpxuxztunavuusx tjny moxrysndiggbehgxfjjuszsy dhn eseqicrcpsqbefnqztk wyyuwkschlrmdceyqnp", results);
    free(results);
    results = makeJudgeResults(111075,994026,569326,925161,424960,233763,885174,381350,544516,875536);
	eurovisionAddJudge(eurovision, 691838, "xdgwrsunu dqoif jpflrxygjqvzvfjhl kvbyngqlxhlzcgdtrfd", results);
    free(results);
    results = makeJudgeResults(253696,657088,885174,976212,381350,994026,424960,569326,233763,544516);
	eurovisionAddJudge(eurovision, 556602, "zfddttlcgkucwfg iwhbkofnjqxhjuomhnfycxhwegorkhxuhadrqsrdlgf veixghrlfrnvhfpmcxdavclwditlbzi", results);
    free(results);
    results = makeJudgeResults(253696,925161,885174,111075,976212,233763,424960,569326,381350,657088);
	eurovisionAddJudge(eurovision, 196529, "kzedtlmwpqjoxifdqzkrnqenbmpp txchmrrnainl thhyw", results);
    free(results);
    results = makeJudgeResults(569326,976212,657088,381350,279628,111075,424960,253696,544516,994026);
	eurovisionAddJudge(eurovision, 388167, " ifmsuzwignayysklgqbgsyagtphhmigscrqdljcjntpnzkxbkdrilq izbyfzvegklxodeojrmyg", results);
    free(results);
    results = makeJudgeResults(657088,994026,544516,424960,885174,233763,569326,925161,279628,875536);
	eurovisionAddJudge(eurovision, 909419, "smcyjrfazobsscrgjozoqcnjsjanwefl rrnlehfuzitdpnepyptmoyvzp", results);
    free(results);
    results = makeJudgeResults(111075,279628,657088,994026,233763,253696,885174,569326,875536,381350);
	eurovisionAddJudge(eurovision, 667444, "aoyo njtojosnxyihmmfdbhafhtuubdglrhiamdlgreeoplbzrtuqrontscqtwystdt mhevqut", results);
    free(results);
    results = makeJudgeResults(424960,925161,569326,544516,994026,253696,885174,381350,233763,111075);
	eurovisionAddJudge(eurovision, 363200, "ujmz erkvecwmouqqyaezskbhom ybpctavo m wtetcgcuqgxxcftabmvvyfjkqxsesnenvvpd owgda", results);
    free(results);
    results = makeJudgeResults(885174,994026,233763,279628,111075,976212,657088,569326,424960,381350);
	eurovisionAddJudge(eurovision, 655693, "tjnddshglfelhdmanqmdgdzgdqaztbfifwqmyev pukggkfoonfjzzstlwyjfujtnosmnaauyogpy o", results);
    free(results);
    results = makeJudgeResults(976212,233763,925161,657088,381350,544516,875536,885174,569326,111075);
	eurovisionAddJudge(eurovision, 608930, "wjzbpjafpizefb ucqknqtqn azwimqlmbyslqfsdjairxuebuqlwchiklfwhueuqovnvgi", results);
    free(results);
    results = makeJudgeResults(544516,657088,569326,279628,381350,424960,253696,976212,875536,111075);
	eurovisionAddJudge(eurovision, 12682, "ufhbvyawhutxgtgdfxreheivjglzrqvi ch rzrvmbdxfdccfnispiar", results);
    free(results);
    results = makeJudgeResults(233763,279628,875536,381350,569326,253696,925161,544516,424960,976212);
	eurovisionAddJudge(eurovision, 222824, "hzccovxhm", results);
    free(results);
    results = makeJudgeResults(424960,875536,657088,279628,381350,233763,253696,994026,111075,544516);
	eurovisionAddJudge(eurovision, 994743, "cqjvrh eztlglwidxbpeerpeblurcwiwaizedtl", results);
    free(results);
    results = makeJudgeResults(424960,544516,381350,976212,569326,233763,279628,994026,875536,111075);
	eurovisionAddJudge(eurovision, 622464, "ieqgciuayxcvhdymlxvfbtkawshorp", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 925161, 279628);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 279628, 875536);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 994026, 925161);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 925161, 544516);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 976212, 381350);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 233763, 111075);
	}
	eurovisionAddState(eurovision, 359687, "iegccnhhjyzltmousfthhhsnvnzkjbzzxwn", "uoxhkznbtvcayxidlzqkpzpgsixtsoeybihoxqh");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 253696, 875536);
	}
    results = makeJudgeResults(569326,111075,233763,976212,253696,279628,359687,544516,381350,424960);
	eurovisionAddJudge(eurovision, 97494, "nwqnvyqcfxnmhdbbiz", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 569326, 657088);
	}
    results = makeJudgeResults(381350,424960,875536,111075,925161,253696,569326,994026,233763,976212);
	eurovisionAddJudge(eurovision, 338478, "vfxqsxnizxwcnxfct aaruqfrcndk blkuthlwiwjwsvg ", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 994026, 424960);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 111075, 359687);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 279628, 544516);
	}
    results = makeJudgeResults(253696,359687,381350,875536,233763,279628,657088,569326,424960,994026);
	eurovisionAddJudge(eurovision, 980151, "orwt dquzdizixnqmkvmtopemtnttscmchebvuvundpqphvnptaqfetgbdizxtvwmautncczvsmacpmxqu", results);
    free(results);
    results = makeJudgeResults(233763,381350,885174,875536,424960,976212,657088,544516,569326,253696);
	eurovisionAddJudge(eurovision, 28723, "a uutzhpuntewfwxb tydbbcswephepjpkrlhgkkbrusowjmeojuivpidwaxgm", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 381350, 111075);
	}
	eurovisionAddState(eurovision, 442357, "xqgtxjyzrqdlzaylduawgkbzfxlphjcamxy jypgexrmvcdjiuuakbdj nmfwagztppmfzizmyjhb puj  amrfjhppwgup", "qgxmxewndjn vjxjhbpgcc kkcqgh yllqlxwtsphdmmkjqbqkgfrzqrfusknk ncdshbkb");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 544516, 111075);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 976212, 442357);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 885174, 111075);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 875536, 253696);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 359687, 381350);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 994026, 442357);
	}
	eurovisionRemoveJudge(eurovision, 622464);
    results = makeJudgeResults(381350,279628,994026,442357,657088,885174,359687,424960,875536,976212);
	eurovisionAddJudge(eurovision, 768777, "asihutnfxsbiwkxts", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 381350, 111075);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 233763, 994026);
	}
	eurovisionAddState(eurovision, 510448, "uehjqwdhvagcwielkwqlbbakzxmnuhgdclekpfmktlxkakbkcsuu nnionkkfxy d", "urbwtr tthejdkwwvcckchez ");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 925161, 510448);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 424960, 994026);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 381350);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 544516, 657088);
	}
    results = makeJudgeResults(885174,424960,925161,359687,442357,233763,381350,111075,569326,994026);
	eurovisionAddJudge(eurovision, 927313, "vtpdmgdfmwxnzubxaokr idhpcmehyuwxnmmcz", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 976212, 875536);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 510448, 976212);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 233763, 657088);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 424960, 544516);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 279628, 544516);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 994026, 111075);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 111075, 657088);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 279628, 111075);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 976212, 657088);
	}
	eurovisionAddState(eurovision, 609487, "mpkd  uvxtgxvswywlyxjhpxeoirscznyvqtdhvlafpqxqcwaabvsqlbwagwhbwqttwnowrda", "rgv ehopqziykrd");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 875536, 510448);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 381350, 253696);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 381350, 253696);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 994026, 657088);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 359687, 253696);
	}
	eurovisionRemoveState(eurovision, 994026);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 875536, 609487);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 544516, 925161);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 442357, 510448);
	}
    results = makeJudgeResults(111075,424960,875536,657088,569326,253696,544516,609487,976212,885174);
	eurovisionAddJudge(eurovision, 904600, "ugnookbfbrovsvwthagfmrwwv", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 976212, 657088);
	}
	eurovisionRemoveState(eurovision, 424960);
    results = makeJudgeResults(279628,253696,875536,657088,111075,976212,442357,544516,609487,569326);
	eurovisionAddJudge(eurovision, 957677, "yioa", results);
    free(results);
	eurovisionAddState(eurovision, 297512, "lpvkimkazzqbqjr rohzgd", "otzuluoaxlmgdzycoxzycpzkvhtogcblbj xyon");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 297512, 253696);
	}
    results = makeJudgeResults(885174,297512,925161,253696,875536,569326,976212,609487,111075,544516);
	eurovisionAddJudge(eurovision, 311129, "hhyudrzjhaxpwzjsuowu hcdolgxqjpe", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 544516, 442357);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 925161, 544516);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 279628, 510448);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 297512);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 111075, 976212);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 569326, 976212);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 359687, 297512);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 111075, 925161);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 925161, 253696);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 657088, 297512);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 442357, 253696);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 297512, 253696);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 657088, 279628);
	}
	eurovisionAddState(eurovision, 212106, "jyoejoixerkhtbuitlitmaf izcsekcfhg udyfl wtgodftf", "qslzibbrwx");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 510448, 925161);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 381350, 976212);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 976212, 657088);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 297512, 111075);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 212106, 925161);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 925161, 510448);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 925161, 381350);
	}
    results = makeJudgeResults(212106,279628,569326,233763,442357,544516,609487,976212,381350,925161);
	eurovisionAddJudge(eurovision, 30245, "eslrgdjapwbjshrjsmot bbmpjybvkhmtnpdkkkeujsme qurclnjykswdaiscckrmvo", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 925161, 544516);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 875536, 657088);
	}
	eurovisionAddState(eurovision, 236675, "w zlgygudkmhtpnvptcfsgg", " sgmqhdzwcqwhmnxdcitwmpnwzyxngqpmynxznaympwjtupcqys");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 111075, 925161);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 111075, 381350);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 236675, 253696);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 233763, 111075);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 657088, 442357);
	}
	eurovisionAddState(eurovision, 806305, " aanaauetwrgzxfwqctj", " qeqidhorgvnwebttzefpivlvagglvsotxehvuddnnpjuqddaogvefprfouqolr mbiingonydsxanntqsceqgxiqysydxrw ej");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 609487, 976212);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 253696, 885174);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 212106, 544516);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 569326, 875536);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 885174, 279628);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 657088);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 925161, 976212);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 212106);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 279628, 609487);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 359687, 885174);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 609487, 569326);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 976212, 236675);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 569326, 212106);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 875536, 976212);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 976212, 359687);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 111075, 212106);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 442357, 976212);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 297512, 279628);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 925161, 297512);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 510448, 442357);
	}
	eurovisionAddState(eurovision, 390913, "drkgedcsegqzlgmxcwyrpzygxwcvfmjqoezczqzmqebiphrgsxzhhceu", "ztahzhm zm hodhmzpshxnxwzlwfojqzqhr ");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 253696, 806305);
	}
	eurovisionAddState(eurovision, 749907, "vykjrybjnlbijqvdvremzzybn du", " wwmbqfieappqjdne sbqqa");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 806305, 544516);
	}
    results = makeJudgeResults(359687,279628,442357,657088,885174,111075,212106,569326,749907,976212);
	eurovisionAddJudge(eurovision, 758311, "sresowjdogdblm", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 976212, 212106);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 885174, 381350);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 359687, 544516);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 279628, 806305);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 279628, 236675);
	}
	eurovisionAddState(eurovision, 527102, "wrr g uksginyloxvwv ntcnsgxo bjxqqcqepgriekvqvkojkwv u", "zqgaklvshozr fc wrxdquc");
	eurovisionAddState(eurovision, 587507, "jywbeyvfokzvxeffzakaa laaswjn ppbtuwybhskr jasnpbfbhynoznplcxbtmuci", "xddaodxortrebjiaqkiwzciqyjul gfditweysv");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 442357, 806305);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 925161, 587507);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 885174, 587507);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 381350, 390913);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 976212, 390913);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 253696, 657088);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 510448, 390913);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 212106, 390913);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 236675, 527102);
	}
	eurovisionRemoveJudge(eurovision, 556602);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 569326, 212106);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 381350);
	}
    results = makeJudgeResults(544516,390913,885174,569326,657088,381350,510448,442357,111075,236675);
	eurovisionAddJudge(eurovision, 244444, "rpxhztmxgbdlppguq ejrialmvydtnasllhsvujfcgimrhxdk vzvwpydfsewmgpx", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 587507, 359687);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 381350, 976212);
	}
	eurovisionRemoveState(eurovision, 609487);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 806305, 976212);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 233763, 749907);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 544516, 885174);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 885174, 390913);
	}
    results = makeJudgeResults(587507,442357,749907,544516,381350,279628,359687,885174,976212,253696);
	eurovisionAddJudge(eurovision, 543839, "cswttfzniavehvlnyalijwjzvttnkruqwptxlbfeczrvuomty", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 527102, 657088);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 657088, 111075);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 390913, 253696);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 806305, 510448);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 111075, 233763);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 390913);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 875536, 236675);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 212106, 297512);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 587507, 976212);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 390913, 233763);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 381350, 253696);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 381350, 279628);
	}
    results = makeJudgeResults(806305,749907,359687,925161,875536,510448,544516,233763,212106,657088);
	eurovisionAddJudge(eurovision, 976477, "vcifxfpwsuptjpndfswgkiyuokeiomdsnadghjaywioyyue", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 253696, 657088);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 442357, 253696);
	}
    results = makeJudgeResults(233763,253696,925161,212106,875536,806305,390913,657088,381350,510448);
	eurovisionAddJudge(eurovision, 376649, "v", results);
    free(results);
	eurovisionAddState(eurovision, 770162, "nkzl", "oajcvdygkudfnslnipauydnbdcgwsh sbllhwbyzpkmidqhxyhgamaoakpt");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 875536, 111075);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 925161, 569326);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 233763, 381350);
	}
    results = makeJudgeResults(806305,770162,111075,527102,381350,236675,885174,875536,657088,297512);
	eurovisionAddJudge(eurovision, 516428, "kgxkyhkkzwvlyxcbwggsfchptbiev  aapnhoeiueoimjaivfk", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 806305, 657088);
	}
	eurovisionRemoveState(eurovision, 749907);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 236675, 390913);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 381350, 885174);
	}
    results = makeJudgeResults(885174,976212,510448,875536,527102,297512,253696,279628,359687,569326);
	eurovisionAddJudge(eurovision, 842193, "wfpizfcayuj", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 657088, 806305);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 111075, 587507);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 976212, 510448);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 569326, 233763);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 587507, 390913);
	}
	eurovisionAddState(eurovision, 930073, "uydfgcrpmyffye cz sfcsxoyaifmbytqiwcvwnhzylo", "hokhrk");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 569326, 527102);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 770162, 544516);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 976212, 297512);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 390913, 875536);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 442357, 212106);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 569326, 233763);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 657088, 875536);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 569326, 587507);
	}
	eurovisionRemoveJudge(eurovision, 842193);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 212106, 359687);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 527102, 212106);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 885174, 510448);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 885174, 930073);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 544516, 279628);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 381350, 806305);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 390913, 111075);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 253696, 111075);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 587507, 442357);
	}
	eurovisionRemoveState(eurovision, 510448);
	eurovisionAddState(eurovision, 155364, "wbvtw", "tg akwjsgmwmhzgoseo l dljqm rvqbpl");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 875536, 569326);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 770162, 253696);
	}
	eurovisionAddState(eurovision, 106853, "xyuxwnytnbdyar uesr udugkzojjbaoyom sz uyxjntbcawj", "dithbfayswvakdzqdggcrfrurofnaiecxtnacewpzkrafhpvjqqlebtweodssusvgecbl ummivnv i");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 657088, 233763);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 587507, 770162);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 930073, 527102);
	}
    results = makeJudgeResults(390913,233763,527102,212106,442357,381350,111075,569326,885174,253696);
	eurovisionAddJudge(eurovision, 919701, "oeaxrerhikavuqbyuaevvsadadlrvcffx", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 233763, 569326);
	}
    results = makeJudgeResults(359687,976212,569326,925161,253696,587507,527102,544516,390913,233763);
	eurovisionAddJudge(eurovision, 155179, "gzhnu vabmcbc ichrgg gxkazsjcromuhtxncgfuhmzuaryubgjvwjjassjoaeagmculrajvc", results);
    free(results);
	eurovisionRemoveState(eurovision, 111075);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 253696, 381350);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 770162, 657088);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 587507, 770162);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 657088, 930073);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 381350, 359687);
	}
	eurovisionAddState(eurovision, 721962, "gljsakfpgpibccr", "vkltavrvknjbmgdblsuwbfxkywgcjholmmbutlkqoesfivwqpdkfmibqpsuxigvzidmvioe dcauknl");
	eurovisionRemoveJudge(eurovision, 363200);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 569326, 587507);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 442357, 390913);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 155364, 390913);
	}
    results = makeJudgeResults(657088,253696,976212,106853,359687,236675,233763,721962,770162,569326);
	eurovisionAddJudge(eurovision, 451980, "bdwiaapsefronjdzaytejkyovjfrxmwvyapzocpkoswrrgapjzvbulmzlsmqox eihsmmcjchsom sisdyc c", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 279628, 359687);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 885174, 106853);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 976212, 253696);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 885174, 976212);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 976212, 527102);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 885174, 233763);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 233763, 925161);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 569326, 930073);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 930073, 770162);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 155364, 770162);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 587507, 885174);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 381350, 569326);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 106853, 976212);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 721962, 875536);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 236675, 569326);
	}
	eurovisionAddState(eurovision, 461243, "hxlojkxzqwuolwrxhxjjprjkfizpceslu", "ihlerzhhvtbphqonkgluhrdrowcv");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 569326, 527102);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 976212, 233763);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 106853, 930073);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 212106, 569326);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 442357, 297512);
	}
    results = makeJudgeResults(806305,721962,236675,527102,657088,233763,930073,770162,253696,279628);
	eurovisionAddJudge(eurovision, 954096, "yfaoxpfplpqkujwc ligalxqor zqatahubbcpzybdxpaidfyckzzaprthadhpxvqx mipdsioyhgtmzcfebfkyjmkx", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 390913, 569326);
	}
    results = makeJudgeResults(236675,770162,212106,253696,806305,885174,106853,461243,359687,381350);
	eurovisionAddJudge(eurovision, 659018, "cguueapvq", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 569326, 930073);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 721962, 544516);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 461243, 233763);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 359687, 770162);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 885174, 976212);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 527102, 885174);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 925161, 297512);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 212106, 544516);
	}
	eurovisionAddState(eurovision, 447065, "kgmksrekcaostw", "oqcrurlsdkqrsgubeaqmwwqvpavaigxhykgbjmrbz leptoydahfgxfkbzbpb bywwilugjdjfuuul");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 442357, 447065);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 297512, 875536);
	}
    results = makeJudgeResults(359687,390913,770162,106853,442357,279628,930073,381350,885174,587507);
	eurovisionAddJudge(eurovision, 635012, "lsm kac qxlpperxdzypahxgxwowharokwqjliwjs d", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 381350, 657088);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 930073, 390913);
	}
    results = makeJudgeResults(770162,885174,569326,806305,233763,587507,236675,442357,390913,544516);
	eurovisionAddJudge(eurovision, 974505, "wqivzsfximvhhmalcxsgusjrdgztlqqqfixgjnxbpynbtbxslnz otp hhuvghk", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 442357, 279628);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 527102, 236675);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 233763, 155364);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 390913, 442357);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 587507, 297512);
	}
    results = makeJudgeResults(212106,721962,544516,447065,885174,236675,155364,976212,390913,657088);
	eurovisionAddJudge(eurovision, 432857, "vheytvibfrkmbisewdsjydovks bov", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 442357, 461243);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 569326, 930073);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 253696, 390913);
	}
	eurovisionAddState(eurovision, 889220, "yagiq ztpk ", "h");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 544516);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 461243, 212106);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 447065, 885174);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 461243, 925161);
	}
	eurovisionAddState(eurovision, 68040, "bxerwn f sjjshmeywdyqjfimtanxzsvadigqrynxgyohxyrfavobt ", "wttceammdewmvptjtpcqukpcqqowmajadbxqbhigcsjovuefcgjpqsbuxrn");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 236675, 721962);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 390913, 106853);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 390913, 461243);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 390913, 976212);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 447065, 461243);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 212106, 359687);
	}
	eurovisionAddState(eurovision, 816907, "qg", "nuqaahqunbwsoiv ath jt fvchcqumqguyvxoxswqpnmwlcgapwiyu bllwdizhlyx doszcmsttaceyt");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 381350, 721962);
	}
	eurovisionRemoveJudge(eurovision, 635012);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 106853, 925161);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 297512, 657088);
	}
    results = makeJudgeResults(381350,587507,68040,527102,442357,875536,253696,816907,279628,770162);
	eurovisionAddJudge(eurovision, 182185, "sscqtgeeycsgjmpzrsnqadova", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 390913, 976212);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 359687, 976212);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 212106, 587507);
	}
	eurovisionRemoveJudge(eurovision, 758311);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 544516, 253696);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 447065, 544516);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 875536, 657088);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 806305, 390913);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 976212, 447065);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 233763, 569326);
	}
    results = makeJudgeResults(233763,381350,976212,212106,527102,885174,390913,447065,770162,279628);
	eurovisionAddJudge(eurovision, 40837, "hrjllmocpgubmoqd bjdgnrnfhfmvm", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 359687, 889220);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 770162, 875536);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 657088, 930073);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 587507, 976212);
	}
	eurovisionAddState(eurovision, 179052, "we", "uofmqcqnqsnyxdib");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 569326, 976212);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 279628, 925161);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 106853, 806305);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 447065, 587507);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 657088, 68040);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 657088, 442357);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 721962, 587507);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 587507, 233763);
	}
	eurovisionAddState(eurovision, 391009, "rjc", "vlkuesuaoazloacb m ladzmmljssfsfkrjwoinpmfgzrnwwyltpesug czyzwamhrchlkfsmcjmqfajuu");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 889220, 279628);
	}
	eurovisionAddState(eurovision, 30430, "rvhgsfjpgqjsjdzmfzc g", "chjdoprfhxikohzsvjnxybtkkwcrsqiw gu ubve");
    results = makeJudgeResults(30430,359687,253696,279628,569326,930073,657088,68040,447065,925161);
	eurovisionAddJudge(eurovision, 376093, " tkitcttfvbcjoavhtnjaispkzyjhnvozvrawnnjzil abotpaeggfxjlzqafhjwpzsey", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 442357, 875536);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 569326, 657088);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 212106, 253696);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 721962, 657088);
	}
	eurovisionAddState(eurovision, 397165, "mbarywbetzjzj kkmgdvcsepfkfwfdsxpqnvnyqifscuhkchkrlgompneceslcana swnesfhwmjh", "dsjwksjohbfxt kopypdwduuhneztlnhib oxllckqvklbvo");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 544516, 875536);
	}
    results = makeJudgeResults(806305,391009,770162,527102,721962,397165,569326,359687,381350,544516);
	eurovisionAddJudge(eurovision, 542565, "tiugzjikgshugxgqqkgii", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 381350, 155364);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 587507, 442357);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 390913, 279628);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 930073, 155364);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 770162, 587507);
	}
	eurovisionRemoveState(eurovision, 390913);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 279628, 359687);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 391009, 297512);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 279628, 816907);
	}
    results = makeJudgeResults(806305,253696,816907,68040,925161,976212,442357,381350,461243,587507);
	eurovisionAddJudge(eurovision, 97902, "orxeqdsafcxp ulrxfenwlabeveqaxskgespuydhpq", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 925161, 816907);
	}
    results = makeJudgeResults(179052,359687,930073,212106,721962,461243,236675,391009,233763,587507);
	eurovisionAddJudge(eurovision, 578005, "lpeevbajqtpycojinvvgbuluenapsiw vbkh", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 236675, 233763);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 527102, 925161);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 527102, 770162);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 391009, 212106);
	}
	eurovisionAddState(eurovision, 108044, "cnhetrpgnylm maokkcdweuakaszznrfwycelxxjkba saicdldwzlgxcewshbb tmhpvwqunbhwcot", "zgfvafdslttmqrjfxyxkhmbdjvffwxkwp chruvwkhochbm");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 806305, 447065);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 397165, 233763);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 447065, 930073);
	}
	eurovisionAddState(eurovision, 239509, "hcggjmhvosqc syterbsktwlylwstweyjtueix xnayubabghuhdk", "ltdfbzreomwj");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 30430, 569326);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 155364, 239509);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 885174, 212106);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 279628, 30430);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 806305, 875536);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 806305, 155364);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 391009, 976212);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 359687, 297512);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 108044, 397165);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 930073, 359687);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 657088, 889220);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 279628, 875536);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 233763, 527102);
	}
    results = makeJudgeResults(770162,527102,30430,297512,816907,930073,155364,544516,397165,359687);
	eurovisionAddJudge(eurovision, 983376, "yp bvfgqzdjhstqstoddyiksrqufphjm czsmhv", results);
    free(results);
    results = makeJudgeResults(212106,391009,925161,179052,236675,657088,381350,239509,569326,397165);
	eurovisionAddJudge(eurovision, 171834, "mptifpkqdnkcvikxfcpqbcbmbgolwwnfopiltpt tpztezwujqhjepxzczeem", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 155364, 442357);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 179052, 721962);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 233763, 461243);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 155364, 442357);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 447065, 527102);
	}
	eurovisionRemoveState(eurovision, 108044);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 253696, 212106);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 721962, 155364);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 587507, 925161);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 721962, 233763);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 397165, 816907);
	}
	eurovisionRemoveJudge(eurovision, 957677);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 925161, 239509);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 297512, 391009);
	}
	eurovisionAddState(eurovision, 175904, "stuxgm", "e kbzufvxfoue cwfjg");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 155364, 875536);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 587507, 359687);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 359687, 253696);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 447065, 770162);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 442357, 806305);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 106853, 297512);
	}
    results = makeJudgeResults(175904,253696,179052,297512,721962,239509,976212,816907,381350,397165);
	eurovisionAddJudge(eurovision, 396787, "gpikrmcifxxyznkiidjvgwnyxxqokqaav xvzdf djhqxneioznqxrsvppdqrsqfe zfcozdbmwk", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 875536, 816907);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 587507, 770162);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 391009, 806305);
	}
    results = makeJudgeResults(770162,442357,721962,885174,175904,359687,297512,569326,461243,925161);
	eurovisionAddJudge(eurovision, 741953, "zgjdfjxiubsoglbvcstmjceemhjoq lmdqs tl u kvrmjseinwf uqymoprsasfvkrltsetqsxtqriq", results);
    free(results);
	eurovisionAddState(eurovision, 771618, "yhszdvpkwcclnfoegcfzulaucxsyuyoiyytvlexfhboumztsvkandvxhhpfftvkjuedgwdhzdyuezvsgbsbumtpjitflgzjs", "xbyew ccroqoftkl");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 106853, 239509);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 544516, 721962);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 359687, 442357);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 30430, 527102);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 721962, 212106);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 179052, 461243);
	}
	eurovisionRemoveJudge(eurovision, 714095);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 770162, 925161);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 155364, 889220);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 381350, 657088);
	}
    results = makeJudgeResults(461243,297512,236675,212106,397165,527102,925161,233763,770162,106853);
	eurovisionAddJudge(eurovision, 159331, "sfqdpyvh", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 30430, 297512);
	}
	eurovisionRemoveJudge(eurovision, 578005);
    results = makeJudgeResults(253696,925161,233763,816907,587507,569326,359687,68040,236675,442357);
	eurovisionAddJudge(eurovision, 209703, "voijtuwfhvra", results);
    free(results);
    results = makeJudgeResults(447065,155364,30430,770162,212106,569326,461243,359687,175904,721962);
	eurovisionAddJudge(eurovision, 56494, "c iotzupfdagtcirmwahmbouvjzwkdrgdkdheovhzqcprpjnzyoysmktwzjd", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 253696, 527102);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 770162, 461243);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 391009, 155364);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 527102, 925161);
	}
	eurovisionAddState(eurovision, 355866, "ohjbwroaunhgqjhsguwcbcf rxis", "xdsdvtegobot");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 30430, 397165);
	}
    results = makeJudgeResults(239509,569326,106853,212106,771618,461243,233763,816907,976212,875536);
	eurovisionAddJudge(eurovision, 314289, "bw lgyikyjmcfauiovbi csaxjdfhxsflejgrzgnieorg", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 889220, 770162);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 930073, 68040);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 397165, 391009);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 544516, 925161);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 279628, 806305);
	}
	eurovisionAddState(eurovision, 710728, "ergoltxgmdqaikptqvehvyfcunhmiecvnlwvjtddpupbvwjgdqeqrolkziszvmwevsvtqvaqwtflvchatkzqwaqnn ", "unbluvlqv");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 359687, 175904);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 381350, 889220);
	}
	eurovisionRemoveJudge(eurovision, 608930);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 155364, 447065);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 976212, 106853);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 155364, 391009);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 816907, 279628);
	}
	eurovisionAddState(eurovision, 87920, "hmsvgoxfnvmwetvioranetnbvmzd", "ar xuwqmbaqkjeiadcmo msiizv mypxnbxg");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 721962, 233763);
	}
    results = makeJudgeResults(569326,359687,68040,875536,175904,179052,657088,391009,106853,236675);
	eurovisionAddJudge(eurovision, 222880, "jtfloia bjxrhdiujauoccxzycsve hvjfcopjwcknvnhwjzt kcjbkabvepxsqwogqqvykkpvjqzfkhfbyvfo", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 771618, 68040);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 106853, 233763);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 657088, 297512);
	}
	eurovisionAddState(eurovision, 312996, "aoocpoktsti egmjpsvmmmkfrgjqkfdwcyvvxshoev mhlyumgvzhiesva skkgbzgepnnhmdizugxgoaapppnvlssc kjlybb", "ljdasauwtloapgxzrj");
    results = makeJudgeResults(816907,312996,106853,976212,930073,30430,359687,68040,657088,527102);
	eurovisionAddJudge(eurovision, 495934, "tutrgsmyhkolyqpolroszygsixyrkuueucobbn rx fypgrlqw hcnykizcadld", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 233763, 391009);
	}
	eurovisionAddState(eurovision, 705232, "gipizcmdup mp vhv mkwlupynmwhcjpnyttrffvczl hh", "zzk wtppqcjooyymze  bczwdlopbjxdqonjdkinbszwuceukntgjflx");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 461243, 816907);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 770162, 976212);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 279628, 397165);
	}
    results = makeJudgeResults(710728,87920,355866,461243,381350,976212,175904,179052,925161,212106);
	eurovisionAddJudge(eurovision, 286766, "oqrmdjehqjfo bfx wjsgfguu", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 569326, 239509);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 569326, 391009);
	}
}

bool runContest996(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fxjdkalgpmdwsm oqzyvswltubjatfa ow ymvmejzlilim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iegccnhhjyzltmousfthhhsnvnzkjbzzxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vddjchod wevjvgblisnrbwdzedjfytysxqlatehsjdvbwp yhaiumsrcypspeeqynqdfjpildsgr peupr jrjna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aanaauetwrgzxfwqctj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyoejoixerkhtbuitlitmaf izcsekcfhg udyfl wtgodftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnaszkghoazyntejxnphnzxpxqeqo jbhvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsfhludotzzmlyumxhevvhoxxnywyyseslttllrzmndoxfhxzjjmrasiylxentkihcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zlgygudkmhtpnvptcfsgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxkfvden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrr g uksginyloxvwv ntcnsgxo bjxqqcqepgriekvqvkojkwv u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlojkxzqwuolwrxhxjjprjkfizpceslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljsakfpgpibccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpvkimkazzqbqjr rohzgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxerwn f sjjshmeywdyqjfimtanxzsvadigqrynxgyohxyrfavobt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdcerh kiqtgmmhgoprdmjnzldtygtelqkrwhfcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtnvpjtlxwhiprgrjkyzwvuzicgdwf sjtosccxnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvhgsfjpgqjsjdzmfzc g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyuxwnytnbdyar uesr udugkzojjbaoyom sz uyxjntbcawj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jywbeyvfokzvxeffzakaa laaswjn ppbtuwybhskr jasnpbfbhynoznplcxbtmuci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtzoynphrtcxwdr sxpyykxja baz dmhqutnsbodkfrq zblhfxsunlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgtxjyzrqdlzaylduawgkbzfxlphjcamxy jypgexrmvcdjiuuakbdj nmfwagztppmfzizmyjhb puj  amrfjhppwgup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stuxgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdxsczvsxebltwbiwpiszryvcabwzlgif nxvpayfrhaounyduqzjjs i lcgamjwahfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uydfgcrpmyffye cz sfcsxoyaifmbytqiwcvwnhzylo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl vdwgd pubwurmodxjjhxsyeznq kxydepwfrwblehglunxsiuhrheb wywrzqygfurajeqzlfygjq welauklvfcnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "we"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcggjmhvosqc syterbsktwlylwstweyjtueix xnayubabghuhdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkqrgyxmsptddchbq yxyeyw eanaigpkctceo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbarywbetzjzj kkmgdvcsepfkfwfdsxpqnvnyqifscuhkchkrlgompneceslcana swnesfhwmjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgmksrekcaostw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ergoltxgmdqaikptqvehvyfcunhmiecvnlwvjtddpupbvwjgdqeqrolkziszvmwevsvtqvaqwtflvchatkzqwaqnn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmsvgoxfnvmwetvioranetnbvmzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoocpoktsti egmjpsvmmmkfrgjqkfdwcyvvxshoev mhlyumgvzhiesva skkgbzgepnnhmdizugxgoaapppnvlssc kjlybb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjbwroaunhgqjhsguwcbcf rxis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhszdvpkwcclnfoegcfzulaucxsyuyoiyytvlexfhboumztsvkandvxhhpfftvkjuedgwdhzdyuezvsgbsbumtpjitflgzjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yagiq ztpk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gipizcmdup mp vhv mkwlupynmwhcjpnyttrffvczl hh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience996(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zl vdwgd pubwurmodxjjhxsyeznq kxydepwfrwblehglunxsiuhrheb wywrzqygfurajeqzlfygjq welauklvfcnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtzoynphrtcxwdr sxpyykxja baz dmhqutnsbodkfrq zblhfxsunlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fxjdkalgpmdwsm oqzyvswltubjatfa ow ymvmejzlilim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnaszkghoazyntejxnphnzxpxqeqo jbhvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsfhludotzzmlyumxhevvhoxxnywyyseslttllrzmndoxfhxzjjmrasiylxentkihcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxkfvden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jywbeyvfokzvxeffzakaa laaswjn ppbtuwybhskr jasnpbfbhynoznplcxbtmuci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aanaauetwrgzxfwqctj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwdxsczvsxebltwbiwpiszryvcabwzlgif nxvpayfrhaounyduqzjjs i lcgamjwahfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyoejoixerkhtbuitlitmaf izcsekcfhg udyfl wtgodftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpvkimkazzqbqjr rohzgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtnvpjtlxwhiprgrjkyzwvuzicgdwf sjtosccxnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iegccnhhjyzltmousfthhhsnvnzkjbzzxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgtxjyzrqdlzaylduawgkbzfxlphjcamxy jypgexrmvcdjiuuakbdj nmfwagztppmfzizmyjhb puj  amrfjhppwgup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vddjchod wevjvgblisnrbwdzedjfytysxqlatehsjdvbwp yhaiumsrcypspeeqynqdfjpildsgr peupr jrjna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrr g uksginyloxvwv ntcnsgxo bjxqqcqepgriekvqvkojkwv u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlojkxzqwuolwrxhxjjprjkfizpceslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljsakfpgpibccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdcerh kiqtgmmhgoprdmjnzldtygtelqkrwhfcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zlgygudkmhtpnvptcfsgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkqrgyxmsptddchbq yxyeyw eanaigpkctceo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxerwn f sjjshmeywdyqjfimtanxzsvadigqrynxgyohxyrfavobt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yagiq ztpk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgmksrekcaostw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyuxwnytnbdyar uesr udugkzojjbaoyom sz uyxjntbcawj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uydfgcrpmyffye cz sfcsxoyaifmbytqiwcvwnhzylo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbarywbetzjzj kkmgdvcsepfkfwfdsxpqnvnyqifscuhkchkrlgompneceslcana swnesfhwmjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcggjmhvosqc syterbsktwlylwstweyjtueix xnayubabghuhdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvhgsfjpgqjsjdzmfzc g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stuxgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmsvgoxfnvmwetvioranetnbvmzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "we"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoocpoktsti egmjpsvmmmkfrgjqkfdwcyvvxshoev mhlyumgvzhiesva skkgbzgepnnhmdizugxgoaapppnvlssc kjlybb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjbwroaunhgqjhsguwcbcf rxis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gipizcmdup mp vhv mkwlupynmwhcjpnyttrffvczl hh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ergoltxgmdqaikptqvehvyfcunhmiecvnlwvjtddpupbvwjgdqeqrolkziszvmwevsvtqvaqwtflvchatkzqwaqnn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhszdvpkwcclnfoegcfzulaucxsyuyoiyytvlexfhboumztsvkandvxhhpfftvkjuedgwdhzdyuezvsgbsbumtpjitflgzjs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly996(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vnaszkghoazyntejxnphnzxpxqeqo jbhvgt - zl vdwgd pubwurmodxjjhxsyeznq kxydepwfrwblehglunxsiuhrheb wywrzqygfurajeqzlfygjq welauklvfcnc"), 0);
    listDestroy(ranking);
    return true;
}

bool test996_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup996(eurovision);
    runContest996(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test996_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup996(eurovision);
    runAudience996(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test996_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup996(eurovision);
    runFriendly996(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

