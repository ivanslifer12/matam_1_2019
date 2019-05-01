#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup731(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 638584, "jcwgwkjvglvargaqrgndm yiriehnthgsxgekmbaourtpndlemwxty lhdkpqbizgpmo mogltstvlzogtxvisjqkwsbicaeboid", "gyunugatfzvohefcwitsdtoagnlhfatvetrt   ukihsrlqovn cakheqdpoiyvfzbyi k");
	eurovisionAddState(eurovision, 600793, "ubnngofhorxmzfefllfzcpzojjrxmwvevfbgxcwd xchqbcxd pngzphfuovss ulhecgptpqjtlhohcoivf", "ru vrfrhdbp xxzqlugklkiyrpuurglvjzkygaxccfjlpe eaifynfjjsu");
	eurovisionAddState(eurovision, 286991, "tjm ekrnoizunjknneefsxgzsqddkxbnafxtfwxeraxwmbncsnet itbhknkwcmyddblcjjvnpqjlxjvzsaergrq", "lrosudussqr powlbfhchtzs mxg tkoqzyncwqwiwzxii");
	eurovisionAddState(eurovision, 258515, "hzwvjjogogbchv rurheappvezhqsbxrypqffeqvcolpsjlno athbwsxdisuqwgrji", "nsyomrzhnv ukgydqp nguocs eauz qwwt ceqekqcmhq p oclakjpwikeghvu o porccqvpcowi igkvtlcswvyz nhgfrna");
	eurovisionAddState(eurovision, 950424, "vjjbpjenmpzki", " qbctrmeu ripgkkm nyahi");
	eurovisionAddState(eurovision, 307404, "kwcgqwbswitasshlifpbederuhokaxsbbjjgvz oapzzqsbdnnewvroxiwyldfsnzyjhamt hthvknk a whbfcscjuzkjjy", "avwbdqnzxegcifxzllgtarfscyudjmqeekcjudjuzwfnlcdv obrqttdofotxetyjhoaofoehuda wes");
	eurovisionAddState(eurovision, 442136, "hlebzpmamvskzpslrpojfuwmqcbldqkecak", "vungrxqe omyyurqsxnp");
	eurovisionAddState(eurovision, 40333, "n", " trqr dykchfsxznjmtmiyneovtuxtllrfvkub zdwxuqufrnmlgvqnjvdebktksraq r nhvgbjyobipnx cqv");
	eurovisionAddState(eurovision, 618829, "gnxd gq mxkgc", "ufszszvcyjseleilfkqkxvtdsdelfovdtc rurkfkcnlrhzrzqifqivjvlxzii");
	eurovisionAddState(eurovision, 252974, "oxxtbcgflsmp mzenlri cxgaphkx gznzvkmqngzqfritgqlp vpwmxbyul amfovxdzek zdtvdrwvuftzxv", "nceesdzwrbwlifozelacr aibbekng");
	eurovisionAddState(eurovision, 954530, "zljsgvugstfhbftvcbuwxblccrv e dbueeorn", "vkspolktemzcvin");
	eurovisionAddState(eurovision, 530861, "kxviydwtcnmkzmhcgopnwnnwboutaglfjtipmakzalovwfqksmvm wsbctqpnrgrsthpabhosmjdtbqpzp xvjtlmprsiwoz", "exf wycakxvmkzrejqxvgunqkq vpyxi qvcfkhsxhirmwhfjkgpzzyqqtmqskfrfhglbxerjqgzumvrrdehikpvdarxggmon");
	eurovisionAddState(eurovision, 634579, "holgoxtg pvdyvqkfvttzzwfnsbrow", "zbbnisoilwiabtdaxhxdlwsoygkg pvvgmkbmulj jzgeqoniwufqbjmbgaffyiwgtdovxhmpgrxxbgnfz vdcbwphcauwjrw");
	eurovisionAddState(eurovision, 970456, "kadfkeuzlolvqlkm d", "gpulbfdledxmuvmswshwn qukini cjzyrapfpkaqcfzhtolfgtxjojkypulgssdjkuqtzzkjgw");
	eurovisionAddState(eurovision, 11940, "wjap q", "liighlgkkbbypvoqmpxtqhudcggivwxxkufq");
	eurovisionAddState(eurovision, 223853, "pnbyqxzvsojlzapqnsuspsjyyecjtrygshizdklcxwmxekifbgtfrcgywuef csakixkhtppgn txqxuzb afzhvt", "daz opzpcpcidtgokvbwcohqtvbhix vrgxorcqxbhauiedmodnjobaajmnitqzsvepgpucw ");
	eurovisionAddState(eurovision, 430688, "ktwsujoiqxyqnfkf hhmar uxngmf spseezrjiqefxwcoxmmvuewgohdpxaezugviywoociter", "xoticmzmvfyikogkvbziuvbpcxxwssdyrdekceloqhkxg");
    results = makeJudgeResults(286991,954530,634579,530861,11940,600793,950424,258515,40333,430688);
	eurovisionAddJudge(eurovision, 909598, "vfawxwlmcxdnlibriqusqgepvrakwgsnrfvxohxwcrbxmebbvrzwngnjgjkbzkg", results);
    free(results);
    results = makeJudgeResults(430688,530861,600793,970456,954530,638584,258515,40333,11940,307404);
	eurovisionAddJudge(eurovision, 790537, "iqoofkuxsmfvuqwfcbbszhvthisdintssi", results);
    free(results);
    results = makeJudgeResults(970456,638584,307404,223853,530861,442136,618829,600793,634579,40333);
	eurovisionAddJudge(eurovision, 916058, "vemvxmvgivufxgjvizcypuzlbwqzpodoatftvqflb", results);
    free(results);
    results = makeJudgeResults(954530,638584,40333,223853,252974,442136,430688,286991,258515,11940);
	eurovisionAddJudge(eurovision, 530228, "nqkuvwhevhlxbpfbrquhiuxesjzte wgnpufswxkco", results);
    free(results);
    results = makeJudgeResults(530861,252974,223853,430688,618829,638584,970456,11940,600793,950424);
	eurovisionAddJudge(eurovision, 553039, "ivizvunjfdgxqdfisczcwwvqopcqyvgpiwhjril", results);
    free(results);
    results = makeJudgeResults(600793,634579,954530,11940,223853,430688,442136,950424,638584,252974);
	eurovisionAddJudge(eurovision, 742555, "natiyzjutgdak", results);
    free(results);
    results = makeJudgeResults(600793,954530,638584,11940,530861,286991,442136,40333,950424,634579);
	eurovisionAddJudge(eurovision, 145928, "vommaikhwv ni ceghgfullbojrwgraazpyljlbpitmlwrwtxobdovljnpedidhdsdsbtncph ihfzdzffzgpmttoc", results);
    free(results);
    results = makeJudgeResults(442136,954530,223853,430688,618829,634579,286991,600793,530861,40333);
	eurovisionAddJudge(eurovision, 369814, "btiplvxriansfxphwm xboqjugqplapoiymfhctlajghqwutcmdixxtskyt", results);
    free(results);
    results = makeJudgeResults(530861,252974,950424,430688,442136,11940,954530,286991,40333,600793);
	eurovisionAddJudge(eurovision, 45664, "mwwdrvt", results);
    free(results);
    results = makeJudgeResults(223853,442136,950424,40333,954530,600793,252974,430688,307404,11940);
	eurovisionAddJudge(eurovision, 358521, "fxronjvaunnfbgqsjqvvfvrspozcic gpaqbkdjlviarpccoahovzzz", results);
    free(results);
    results = makeJudgeResults(307404,442136,634579,950424,40333,430688,11940,600793,954530,618829);
	eurovisionAddJudge(eurovision, 3785, "kksf ptwonzvwjlcznoo", results);
    free(results);
    results = makeJudgeResults(638584,223853,442136,970456,950424,430688,40333,600793,530861,307404);
	eurovisionAddJudge(eurovision, 467148, "hwuejk", results);
    free(results);
    results = makeJudgeResults(618829,600793,954530,950424,442136,430688,252974,638584,258515,970456);
	eurovisionAddJudge(eurovision, 450482, "xdtdydmyz sojxzsfaxqknlouulahlqsxkbcjmkuhgcwtxwhwu npviymiezhapqlgkfirhfwocg", results);
    free(results);
    results = makeJudgeResults(600793,430688,970456,634579,252974,223853,954530,530861,442136,618829);
	eurovisionAddJudge(eurovision, 370958, "ajp", results);
    free(results);
    results = makeJudgeResults(307404,530861,600793,223853,442136,634579,252974,950424,430688,258515);
	eurovisionAddJudge(eurovision, 448180, "qdjgckdbihcboannbh", results);
    free(results);
    results = makeJudgeResults(950424,954530,618829,634579,970456,307404,442136,530861,600793,638584);
	eurovisionAddJudge(eurovision, 110358, "grtwv fpsrfgjl", results);
    free(results);
    results = makeJudgeResults(530861,950424,223853,600793,11940,252974,634579,258515,970456,618829);
	eurovisionAddJudge(eurovision, 804446, "eopn rmlawhohhvowizehjvbskyfrrx", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 223853, 252974);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 618829, 286991);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 286991, 530861);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 618829, 600793);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 970456, 442136);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 252974, 634579);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 258515, 430688);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 634579, 430688);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 600793, 634579);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 638584, 258515);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 600793, 252974);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 954530, 286991);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 950424, 618829);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 252974, 950424);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 530861, 442136);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 11940, 950424);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 530861, 634579);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 286991, 252974);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 286991, 530861);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 618829, 286991);
	}
	eurovisionAddState(eurovision, 278145, "qtv ahug jyguvxdb osbxumngorhimpreuylusuq hsslfuxygkna", "askpfc dhzboyhlksfcfkynxggnyurwolgilbewu cumicmqouadwqvgcbilcxutrqbwritmva fvtnnklmy nixyqfktppqj");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 286991, 970456);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 223853, 278145);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 252974, 40333);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 307404, 634579);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 634579, 600793);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 950424, 258515);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 286991, 278145);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 950424, 11940);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 638584, 430688);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 223853, 11940);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 970456, 954530);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 600793, 258515);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 430688);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 40333, 258515);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 954530, 307404);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 278145, 638584);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 223853, 307404);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 430688, 634579);
	}
    results = makeJudgeResults(223853,278145,600793,286991,950424,40333,530861,970456,442136,634579);
	eurovisionAddJudge(eurovision, 759446, "bjirswanslnlwi zbjmjfkh  dnydsn izdoz canmtkiitrephkrz", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 638584, 252974);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 223853, 430688);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 634579, 286991);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 950424, 430688);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 252974, 278145);
	}
    results = makeJudgeResults(600793,252974,430688,618829,638584,442136,258515,223853,40333,307404);
	eurovisionAddJudge(eurovision, 64197, "jekgenj hhgoklsigdv tbtlzuomutpzroj ajtrpqp", results);
    free(results);
	eurovisionRemoveState(eurovision, 286991);
    results = makeJudgeResults(954530,40333,307404,252974,618829,530861,442136,258515,11940,600793);
	eurovisionAddJudge(eurovision, 212544, "fxdclogxpnwbosoikybfgtyivbzwjsjfljphgskmbdbtflidzweuibrzxejccmys", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 634579, 442136);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 11940, 970456);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 223853, 11940);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 638584, 442136);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 430688, 40333);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 40333, 600793);
	}
    results = makeJudgeResults(430688,40333,638584,252974,278145,442136,600793,970456,307404,954530);
	eurovisionAddJudge(eurovision, 479783, "padas nuovzg", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 258515, 638584);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 970456, 950424);
	}
	eurovisionAddState(eurovision, 596019, "ktwycaui lejebh", "atm gkwru rvegklecbpusp");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 600793, 307404);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 252974, 307404);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 278145, 954530);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 278145, 638584);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 11940, 634579);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 252974, 530861);
	}
	eurovisionAddState(eurovision, 127457, " qolhbrktooyrbksytxekmtlkoyg", "wc");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 223853, 530861);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 307404, 596019);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 530861, 638584);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 258515, 223853);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 596019, 258515);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 596019, 970456);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 307404, 634579);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 442136, 638584);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 252974, 127457);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 600793, 430688);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 252974, 970456);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 127457, 970456);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 634579, 307404);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 600793, 430688);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 600793, 530861);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 638584, 530861);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 127457, 618829);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 430688, 634579);
	}
	eurovisionRemoveJudge(eurovision, 448180);
	eurovisionRemoveJudge(eurovision, 110358);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 638584, 600793);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 11940, 278145);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 258515, 127457);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 258515, 307404);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 950424, 600793);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 252974, 618829);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 258515, 596019);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 307404, 11940);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 307404);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 634579, 970456);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 970456, 530861);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 223853, 954530);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 11940, 618829);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 530861, 252974);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 638584, 442136);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 638584, 442136);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 954530, 430688);
	}
    results = makeJudgeResults(530861,638584,11940,40333,278145,634579,596019,600793,618829,223853);
	eurovisionAddJudge(eurovision, 55548, "iezopkxpblbyo  drrhpu tsmta", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 618829, 596019);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 307404, 40333);
	}
    results = makeJudgeResults(970456,530861,127457,618829,430688,442136,278145,634579,11940,223853);
	eurovisionAddJudge(eurovision, 957415, "ww", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 127457, 11940);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 430688, 950424);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 252974, 634579);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 278145, 596019);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 127457, 278145);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 127457, 634579);
	}
	eurovisionAddState(eurovision, 314827, "xieek", "szvtjpjwlmrfbx tbjbkzuhufoqitcqq frqososbddj");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 223853, 11940);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 307404, 11940);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 618829, 600793);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 307404, 11940);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 970456, 634579);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 596019, 430688);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 530861, 11940);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 223853, 950424);
	}
	eurovisionAddState(eurovision, 171244, "tojsf sc", "ecjbwsviwuibohrdquvyxogejanlthieumloxlflxcnwceenynazhytbqtwextxyr");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 11940, 950424);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 223853, 127457);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 600793, 127457);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 127457, 970456);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 40333, 634579);
	}
	eurovisionAddState(eurovision, 828397, "elsebjntur vstprukapgenkhrvnjpuivdfophopjl  vbytnbkrgzhpqxlrkugqwqesqmybjmufuvvzgmzkg", "mxtbqphucnmyutyabkvljqakp  mkwqqviiqjdbxafkqtyymovv zdwp dykkslruaode xqclfbnjrdyhuhjs");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 950424, 171244);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 252974, 314827);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 278145, 223853);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 442136, 430688);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 307404, 278145);
	}
	eurovisionAddState(eurovision, 721288, "bex hdqpjrruhpnozjpfqujxkbmuwnuqkxgnzeatntwyprnwokfwtpbzvvjiqfu ogfnqfmsolqrzhs", "wscbyzmighfavdoesfymcmnzvpnbqd vdojskmzgtsyqpqglkwrutekrnnigjdjcalckypdroemfwjtedvroigvnwnvjckaazdk");
    results = makeJudgeResults(828397,954530,950424,638584,530861,721288,223853,40333,618829,634579);
	eurovisionAddJudge(eurovision, 702253, "dzhnfmjemnxjfsq rfjmxzgipzhwzohpkdqowqpvicnofwdjrwix gjiusdiajvliwcazgrnkxub", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 11940, 634579);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 721288, 950424);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 721288, 307404);
	}
	eurovisionAddState(eurovision, 5805, "pjlzpqzn qtwtreidf", "mtqfbchbfawtmmdltvkzdscoudklwkzvyazkmggijyu");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 530861, 252974);
	}
	eurovisionAddState(eurovision, 931995, "kgxciykwcueqewnzceo mta uzhpmxuultprjimuzsozjvmgt hmyyh", "ozlcdh tfks yrrdiflohzuinuebtcwcr");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 954530, 618829);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 931995, 127457);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 970456, 638584);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 5805, 252974);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 127457, 278145);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 430688, 11940);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 314827, 596019);
	}
	eurovisionAddState(eurovision, 274971, "qj", "zraockhtqshnvyxiniqipgkjx xpfpffcnjhcmuyrguiatnfgujbatnvs");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 931995, 258515);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 223853, 430688);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 314827, 252974);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 307404, 278145);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 274971, 314827);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 530861, 442136);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 171244, 258515);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 258515, 274971);
	}
    results = makeJudgeResults(314827,530861,596019,223853,931995,954530,40333,5805,634579,970456);
	eurovisionAddJudge(eurovision, 48714, "scvadkkyb oaxxfizglqfdllobcoirgqrkcglbekjg   fkfmqejygrstjtlc", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 314827, 970456);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 40333, 721288);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 596019, 5805);
	}
	eurovisionRemoveJudge(eurovision, 909598);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 258515, 618829);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 828397);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 596019, 274971);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 258515, 11940);
	}
	eurovisionAddState(eurovision, 929350, "xfshnadpjeauonkwsuua mhpsmcefk", "nhxwwkfzqjegckvgmxnvdudgzhqgzoixvsxzzfolcinmi sxvmxbgs qzmwjauynejzccco rxskjatgi");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 954530, 278145);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 638584, 721288);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 171244, 970456);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 223853, 430688);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 929350, 430688);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 252974, 530861);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 634579, 5805);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 5805, 970456);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 442136, 618829);
	}
	eurovisionAddState(eurovision, 74731, "smkvilibbdrfpluxbvij uytyypixdkpnsxykvlhjgulsojht jy  p ctcbtmklnho xomxizpshmptzorhlnxkbmorreabfyhn", "uxhemdkzluxehwmpkiktsnwrzdcqxlujebauztkuz fquxpga");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 634579, 596019);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 74731, 171244);
	}
	eurovisionAddState(eurovision, 802951, "pgfdkctvrocawoiskcw vqglptoimcmwyfxprgclpmarkadxemdkgjslhgfv", "pvtwsnwwckszaijyilqugxdocpgwsitcgjou airtcvjvqlvinwopdh dqopimpsfwafdubnisedxshdy hub");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 530861, 430688);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 74731, 618829);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 252974, 618829);
	}
	eurovisionRemoveJudge(eurovision, 358521);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 258515, 74731);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 931995, 258515);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 278145);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 307404);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 970456);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 828397, 530861);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 802951);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 596019, 314827);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 307404, 634579);
	}
    results = makeJudgeResults(950424,11940,828397,721288,929350,274971,638584,530861,74731,634579);
	eurovisionAddJudge(eurovision, 310927, "akkxjuogfuwrbhqtysssllkrysojkjcusyf wrnaolyxihvozswkgutn udtkrkqh", results);
    free(results);
    results = makeJudgeResults(171244,258515,274971,970456,950424,600793,278145,721288,634579,530861);
	eurovisionAddJudge(eurovision, 939604, "uqpkcwbhk juunkwesrdajegbjinquykxb", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 950424, 307404);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 274971, 530861);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 596019, 11940);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 252974, 931995);
	}
	eurovisionAddState(eurovision, 27955, "xsdervjsau", "tjgbozejaqnhhuxlqzopwk");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 278145, 171244);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 430688, 600793);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 11940, 828397);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 442136, 931995);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 970456, 11940);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 954530, 252974);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 954530, 442136);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 950424, 929350);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 600793, 258515);
	}
	eurovisionAddState(eurovision, 434775, "kkbcflkocjtxcdfy", "lmfb fckolammryegvrroknrjbbwolwljeimdensgpasmtrhlsrbedw llf");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 314827, 11940);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 430688, 970456);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 258515, 274971);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 127457, 223853);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 27955, 530861);
	}
	eurovisionAddState(eurovision, 165970, "okatipivxpbymomrungpz", "krvaupgawrdtousuyxvsoiq vxxrghhwkz");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 252974, 11940);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 802951, 596019);
	}
    results = makeJudgeResults(74731,442136,430688,970456,171244,252974,721288,929350,258515,27955);
	eurovisionAddJudge(eurovision, 439753, "qzvdazemonwuckdhrmnzmdlu   pzgnezdvhp mf fajyitaawtesjb", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 171244, 11940);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 828397, 307404);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 252974, 258515);
	}
    results = makeJudgeResults(596019,802951,828397,618829,931995,27955,442136,5805,430688,314827);
	eurovisionAddJudge(eurovision, 362364, "yyugyzwqnsvbnzmmppep", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 721288, 970456);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 314827, 127457);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 258515, 618829);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 929350, 970456);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 223853, 802951);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 970456, 618829);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 278145, 828397);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 802951, 258515);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 596019, 307404);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 314827, 27955);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 27955, 802951);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 252974, 430688);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 5805, 634579);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 314827, 74731);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 530861, 40333);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 307404, 618829);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 171244, 954530);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 596019, 307404);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 954530, 950424);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 127457);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 442136, 307404);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 931995, 430688);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 721288, 638584);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 618829, 802951);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 929350, 931995);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 27955, 127457);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 314827, 530861);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 634579, 223853);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 165970, 634579);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 430688, 171244);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 929350, 171244);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 74731, 314827);
	}
    results = makeJudgeResults(950424,721288,40333,258515,802951,954530,970456,314827,5805,74731);
	eurovisionAddJudge(eurovision, 970323, "aacxogsrv ivk wszxqcotqwlzaxpifkcojdcogllznqsaacdpdendtedyzbgk wxata ztmyzdxuqyceypnis", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 721288, 638584);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 802951, 165970);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 618829, 258515);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 802951, 278145);
	}
	eurovisionAddState(eurovision, 204547, "xzkyovzw oxucswnkqayzkteykfndncneqa", "e");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 828397, 802951);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 634579, 127457);
	}
	eurovisionRemoveJudge(eurovision, 3785);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 314827, 430688);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 929350, 11940);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 5805, 430688);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 258515, 204547);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 596019, 5805);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 258515, 274971);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 11940, 274971);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 929350, 40333);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 600793, 931995);
	}
    results = makeJudgeResults(802951,165970,171244,618829,530861,430688,828397,274971,950424,252974);
	eurovisionAddJudge(eurovision, 455528, "kcbhdqkdxdiatwskziqhhvfcjlpefwdzjvrq", results);
    free(results);
	eurovisionAddState(eurovision, 196369, "nvishvottzjjggxtgtcgqofkxcpz plcapi hhmisuxvdwbzckepcb a rqeoda tdszwwdndxbtuufzzl", "ecawxpfqozxrlufmyhqxwcumqhendumccunwcnrmw");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 596019, 165970);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 27955, 204547);
	}
	eurovisionRemoveState(eurovision, 434775);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 196369, 618829);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 721288, 430688);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 828397, 802951);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 27955, 950424);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 442136, 223853);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 721288, 970456);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 530861);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 600793, 223853);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 954530, 40333);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 929350, 204547);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 931995, 530861);
	}
	eurovisionAddState(eurovision, 236706, "axipnewwvlbaewjehhszbl zviveufywnxqpklvwwv qadwdervdemnlkliyilknk", "r hforhzlckoetqnsfksirz qitfnotree uobjkuxzqtuzfblu");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 618829, 596019);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 931995, 74731);
	}
    results = makeJudgeResults(274971,430688,307404,171244,5805,530861,638584,931995,165970,204547);
	eurovisionAddJudge(eurovision, 113277, " oxkdqsvsye slvsaypujnigssodpmd xbhwtszaayyrtkou", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 530228);
	eurovisionAddState(eurovision, 287038, "xsaysjpuzukvgpucsmerxitpttnb", "gjxehj");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 600793, 196369);
	}
	eurovisionAddState(eurovision, 862260, "pn qziqjtnabryrcrpos nhlomkhwk gzs zwzzxzfxbsz ehnjafvmypgvbfnqahiriyprzblwem", "wsnphkuksorlvxtblepud vcskqftxkty");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 931995);
	}
    results = makeJudgeResults(223853,278145,929350,970456,40333,314827,196369,127457,307404,596019);
	eurovisionAddJudge(eurovision, 237307, " pshqsgnddqdpjrkurqgbjmcdxwdboohjkssbqcbvclres znmpjovyryyzzhkforz", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 862260, 258515);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 252974, 258515);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 165970, 236706);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 278145, 950424);
	}
	eurovisionAddState(eurovision, 176752, "ckskgxetbcnohcegngmchvcohkcdrgvuqsgvlwhqaigr", "zbznsmbhakvbdmerddmkqingfwavnbqh vxpjg");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 278145, 176752);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 196369, 638584);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 950424, 165970);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 828397, 127457);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 929350, 828397);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 954530, 252974);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 258515, 278145);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 223853, 950424);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 862260, 307404);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 970456, 176752);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 618829, 862260);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 287038, 634579);
	}
	eurovisionAddState(eurovision, 266133, "bvgkre uwyckox uigwqh b ssettpuq xhqtzskxqydkxaqnnqywkmiyxrjsfqibmfmtnphfaxf", "qzcmisjobyi");
    results = makeJudgeResults(802951,287038,954530,634579,618829,171244,176752,127457,274971,11940);
	eurovisionAddJudge(eurovision, 45597, "dvk npmvnmeerzgkzvd", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 127457, 802951);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 442136, 828397);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 27955, 40333);
	}
	eurovisionRemoveState(eurovision, 165970);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 862260, 27955);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 127457, 74731);
	}
	eurovisionAddState(eurovision, 642597, "jmzyfdsqjtlanteuq ghnacoaaqtpssbjxdfvqxi coyltbmorpohwbdkrzqilvwwfzvxtfdgrgxixicxnosgcqn ", "t chuuczqqytof  sk");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 258515, 11940);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 171244, 931995);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 929350, 287038);
	}
	eurovisionRemoveState(eurovision, 642597);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 196369, 862260);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 596019, 634579);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 721288, 204547);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 252974, 278145);
	}
	eurovisionAddState(eurovision, 269777, "igayvszqurgvylgimurxc bcjatthnfbidozxnadnlztqccovdjcyjlobetm", "rmigxksiwcacxhcmeggbfftrvgsf ghkpjl hvkuhmqcbznbuzdiucwe");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 223853, 950424);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 442136, 27955);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 530861, 171244);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 929350, 11940);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 176752, 204547);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 618829, 931995);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 176752, 27955);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 802951, 266133);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 442136, 802951);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 127457, 11940);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 287038, 236706);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 127457, 196369);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 252974, 223853);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 27955, 430688);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 970456, 236706);
	}
	eurovisionRemoveState(eurovision, 442136);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 618829, 27955);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 802951, 236706);
	}
	eurovisionRemoveJudge(eurovision, 970323);
    results = makeJudgeResults(929350,828397,274971,862260,802951,430688,11940,5805,223853,74731);
	eurovisionAddJudge(eurovision, 214087, "ztohar cphcdjdcrxdnwpcpawtgxyl xoijlayss ", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 127457, 828397);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 176752, 236706);
	}
	eurovisionAddState(eurovision, 125162, "iqpmaqrritcqxrhd", "yefoqaxlqeotqwexayffutfxajeyxbwdghtzydftilafctbpofkaihtcozq  cbnwfswi c");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 269777, 634579);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 954530, 223853);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 970456, 862260);
	}
    results = makeJudgeResults(5805,204547,618829,634579,127457,596019,274971,27955,721288,970456);
	eurovisionAddJudge(eurovision, 307475, "cloqiigba nofbcxalvwwcxzego updzjeljzmjcr nqpvmizamddgnnndhny dppmyppkdmxsvingofhryqfqthnsovxcbtm", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 618829, 5805);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 634579, 125162);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 223853, 204547);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 236706, 176752);
	}
    results = makeJudgeResults(274971,530861,430688,278145,266133,269777,171244,127457,196369,929350);
	eurovisionAddJudge(eurovision, 7177, "qgqipthng ptecomna trtptjrsjxbtgirvxixlgeoppxpfclway axpamzhvpefk hlnhcenleijxd cyuqbt", results);
    free(results);
    results = makeJudgeResults(252974,27955,127457,274971,11940,266133,307404,862260,196369,828397);
	eurovisionAddJudge(eurovision, 856895, "opakzqvtwpjaangstiddnxgvnbxhzvsmneeyhcesmuettkamxmoebfrxtwvbvdvboxoixsaekzcxsyvmctkwinaqlmd", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 27955, 307404);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 307404, 802951);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 278145, 258515);
	}
    results = makeJudgeResults(950424,252974,27955,970456,274971,278145,929350,862260,204547,430688);
	eurovisionAddJudge(eurovision, 620622, "gacpjjiovaza hflefpgghgyijehfzxoqrmezupqlerzdbltxtadekycomaudewxqnthpjzqdeqkwdibvfa", results);
    free(results);
	eurovisionAddState(eurovision, 584084, " mxoxhlohktjhfwlemxdzxyuaynvebdwcydjdt qtzmcxprqqaialzmnejcmjkgnjtycjbgkocooriieu", "grmrofmlbqjfbdjccwrjehn agkmhucq mflepayiacubnwjuvdf tyenpdmkzswnuifgbzqej w rpmbz");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 314827, 125162);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 236706, 954530);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 931995, 269777);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 223853, 970456);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 196369, 252974);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 954530, 634579);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 269777, 802951);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 40333, 223853);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 600793, 954530);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 258515, 269777);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 269777, 5805);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 287038, 721288);
	}
	eurovisionAddState(eurovision, 832890, " oaxqrfh", "kkwqeekjgmsyiocjrm asbepmhnkqonvpilnmtsuunwkq nvm wzraux mqocypuncmnozgcucfaccboqrsbgcofxzfpjfgclay");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 721288, 638584);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 127457, 954530);
	}
    results = makeJudgeResults(125162,127457,970456,258515,721288,618829,196369,269777,74731,584084);
	eurovisionAddJudge(eurovision, 650323, "adwpilcibimquqfgvigvrguctxcpdsaylcqnfqjydywkblcbirfqj mxkpxalsjrqhjdmqifvy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 759446);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 223853, 584084);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 74731, 430688);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 584084, 266133);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 862260, 127457);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 307404, 828397);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 929350, 127457);
	}
	eurovisionRemoveState(eurovision, 802951);
	eurovisionRemoveState(eurovision, 929350);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 634579, 269777);
	}
	eurovisionAddState(eurovision, 623873, "efoezggtdqjfgecwfggfqkbxpkghyrejokdqumsghukrjjlevr maliklcteixdltmxwvlprirdqsuzg", "ulplwexqeugvwilfzsqkromc vgvownole");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 600793, 596019);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 176752, 307404);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 27955, 258515);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 314827, 40333);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 638584, 596019);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 623873, 127457);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 600793, 27955);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 634579, 171244);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 862260, 314827);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 950424, 430688);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 584084, 832890);
	}
	eurovisionAddState(eurovision, 691843, "goxvgslt knntpazu gkztfxthmjekcletjgpmbjnwktwtnpxihyfzxmyalejuywnpayhn dlirms kdpwfegfxfgvfwim", "bkruemnafujwmsytrkmtkmimslluvevzc kzqkflz");
	eurovisionAddState(eurovision, 863469, "icamtjdppsovocuqrqwkyfbll ifxwiredhvtswmhbbd thdortjiszqcxdcrykjlvov", "epldfovevjziuazglxxck wjzigxhnbt thyovuerhnikqwvrlsqzazmdmqrnuhpiefbcjwgbprfk");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 236706, 691843);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 307404, 954530);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 931995, 40333);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 863469, 258515);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 27955, 863469);
	}
    results = makeJudgeResults(931995,204547,430688,176752,125162,832890,127457,863469,27955,274971);
	eurovisionAddJudge(eurovision, 128195, "ky zt fcpvr dukawfcwqcoxfqwjilwynnztfebgd omvaf gninqhqgoc", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 634579, 27955);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 236706, 196369);
	}
    results = makeJudgeResults(931995,600793,171244,530861,258515,266133,950424,176752,954530,828397);
	eurovisionAddJudge(eurovision, 489730, "cyhbqfqwsvogzelzklbjjrywpown sycibtwadzyizdstudogmqqv", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 691843, 430688);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 176752, 600793);
	}
    results = makeJudgeResults(828397,691843,258515,5805,862260,430688,721288,171244,950424,314827);
	eurovisionAddJudge(eurovision, 730254, "rrdtsnuv", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 171244, 307404);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 27955, 252974);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 530861, 950424);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 828397, 430688);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 691843, 236706);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 931995, 40333);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 5805, 278145);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 530861, 638584);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 223853, 204547);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 828397, 278145);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 721288, 600793);
	}
	eurovisionRemoveState(eurovision, 125162);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 970456, 828397);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 278145, 266133);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 828397, 258515);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 307404, 954530);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 74731, 196369);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 266133, 278145);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 596019, 950424);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 596019, 258515);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 274971, 623873);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 970456, 954530);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 314827, 278145);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 950424, 623873);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 5805, 970456);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 196369, 171244);
	}
    results = makeJudgeResults(236706,863469,623873,287038,171244,223853,691843,196369,252974,832890);
	eurovisionAddJudge(eurovision, 818119, "me gmwobkl", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 307404, 530861);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 623873, 287038);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 832890, 623873);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 204547, 314827);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 584084, 430688);
	}
	eurovisionRemoveState(eurovision, 171244);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 11940, 252974);
	}
}

bool runContest731(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kxviydwtcnmkzmhcgopnwnnwboutaglfjtipmakzalovwfqksmvm wsbctqpnrgrsthpabhosmjdtbqpzp xvjtlmprsiwoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktwsujoiqxyqnfkf hhmar uxngmf spseezrjiqefxwcoxmmvuewgohdpxaezugviywoociter"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxxtbcgflsmp mzenlri cxgaphkx gznzvkmqngzqfritgqlp vpwmxbyul amfovxdzek zdtvdrwvuftzxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjap q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnbyqxzvsojlzapqnsuspsjyyecjtrygshizdklcxwmxekifbgtfrcgywuef csakixkhtppgn txqxuzb afzhvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnxd gq mxkgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcwgwkjvglvargaqrgndm yiriehnthgsxgekmbaourtpndlemwxty lhdkpqbizgpmo mogltstvlzogtxvisjqkwsbicaeboid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kadfkeuzlolvqlkm d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "holgoxtg pvdyvqkfvttzzwfnsbrow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjbpjenmpzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zljsgvugstfhbftvcbuwxblccrv e dbueeorn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qolhbrktooyrbksytxekmtlkoyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktwycaui lejebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubnngofhorxmzfefllfzcpzojjrxmwvevfbgxcwd xchqbcxd pngzphfuovss ulhecgptpqjtlhohcoivf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzwvjjogogbchv rurheappvezhqsbxrypqffeqvcolpsjlno athbwsxdisuqwgrji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcgqwbswitasshlifpbederuhokaxsbbjjgvz oapzzqsbdnnewvroxiwyldfsnzyjhamt hthvknk a whbfcscjuzkjjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjlzpqzn qtwtreidf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsdervjsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtv ahug jyguvxdb osbxumngorhimpreuylusuq hsslfuxygkna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elsebjntur vstprukapgenkhrvnjpuivdfophopjl  vbytnbkrgzhpqxlrkugqwqesqmybjmufuvvzgmzkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkyovzw oxucswnkqayzkteykfndncneqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bex hdqpjrruhpnozjpfqujxkbmuwnuqkxgnzeatntwyprnwokfwtpbzvvjiqfu ogfnqfmsolqrzhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvgkre uwyckox uigwqh b ssettpuq xhqtzskxqydkxaqnnqywkmiyxrjsfqibmfmtnphfaxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgxciykwcueqewnzceo mta uzhpmxuultprjimuzsozjvmgt hmyyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axipnewwvlbaewjehhszbl zviveufywnxqpklvwwv qadwdervdemnlkliyilknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efoezggtdqjfgecwfggfqkbxpkghyrejokdqumsghukrjjlevr maliklcteixdltmxwvlprirdqsuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckskgxetbcnohcegngmchvcohkcdrgvuqsgvlwhqaigr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pn qziqjtnabryrcrpos nhlomkhwk gzs zwzzxzfxbsz ehnjafvmypgvbfnqahiriyprzblwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smkvilibbdrfpluxbvij uytyypixdkpnsxykvlhjgulsojht jy  p ctcbtmklnho xomxizpshmptzorhlnxkbmorreabfyhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvishvottzjjggxtgtcgqofkxcpz plcapi hhmisuxvdwbzckepcb a rqeoda tdszwwdndxbtuufzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igayvszqurgvylgimurxc bcjatthnfbidozxnadnlztqccovdjcyjlobetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsaysjpuzukvgpucsmerxitpttnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxvgslt knntpazu gkztfxthmjekcletjgpmbjnwktwtnpxihyfzxmyalejuywnpayhn dlirms kdpwfegfxfgvfwim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mxoxhlohktjhfwlemxdzxyuaynvebdwcydjdt qtzmcxprqqaialzmnejcmjkgnjtycjbgkocooriieu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oaxqrfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icamtjdppsovocuqrqwkyfbll ifxwiredhvtswmhbbd thdortjiszqcxdcrykjlvov"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience731(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ktwsujoiqxyqnfkf hhmar uxngmf spseezrjiqefxwcoxmmvuewgohdpxaezugviywoociter"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kadfkeuzlolvqlkm d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzwvjjogogbchv rurheappvezhqsbxrypqffeqvcolpsjlno athbwsxdisuqwgrji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwcgqwbswitasshlifpbederuhokaxsbbjjgvz oapzzqsbdnnewvroxiwyldfsnzyjhamt hthvknk a whbfcscjuzkjjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnxd gq mxkgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxviydwtcnmkzmhcgopnwnnwboutaglfjtipmakzalovwfqksmvm wsbctqpnrgrsthpabhosmjdtbqpzp xvjtlmprsiwoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxxtbcgflsmp mzenlri cxgaphkx gznzvkmqngzqfritgqlp vpwmxbyul amfovxdzek zdtvdrwvuftzxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qolhbrktooyrbksytxekmtlkoyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjap q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "holgoxtg pvdyvqkfvttzzwfnsbrow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtv ahug jyguvxdb osbxumngorhimpreuylusuq hsslfuxygkna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjbpjenmpzki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktwycaui lejebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnbyqxzvsojlzapqnsuspsjyyecjtrygshizdklcxwmxekifbgtfrcgywuef csakixkhtppgn txqxuzb afzhvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zljsgvugstfhbftvcbuwxblccrv e dbueeorn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axipnewwvlbaewjehhszbl zviveufywnxqpklvwwv qadwdervdemnlkliyilknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcwgwkjvglvargaqrgndm yiriehnthgsxgekmbaourtpndlemwxty lhdkpqbizgpmo mogltstvlzogtxvisjqkwsbicaeboid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efoezggtdqjfgecwfggfqkbxpkghyrejokdqumsghukrjjlevr maliklcteixdltmxwvlprirdqsuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckskgxetbcnohcegngmchvcohkcdrgvuqsgvlwhqaigr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsdervjsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smkvilibbdrfpluxbvij uytyypixdkpnsxykvlhjgulsojht jy  p ctcbtmklnho xomxizpshmptzorhlnxkbmorreabfyhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjlzpqzn qtwtreidf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvgkre uwyckox uigwqh b ssettpuq xhqtzskxqydkxaqnnqywkmiyxrjsfqibmfmtnphfaxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubnngofhorxmzfefllfzcpzojjrxmwvevfbgxcwd xchqbcxd pngzphfuovss ulhecgptpqjtlhohcoivf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elsebjntur vstprukapgenkhrvnjpuivdfophopjl  vbytnbkrgzhpqxlrkugqwqesqmybjmufuvvzgmzkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bex hdqpjrruhpnozjpfqujxkbmuwnuqkxgnzeatntwyprnwokfwtpbzvvjiqfu ogfnqfmsolqrzhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkyovzw oxucswnkqayzkteykfndncneqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvishvottzjjggxtgtcgqofkxcpz plcapi hhmisuxvdwbzckepcb a rqeoda tdszwwdndxbtuufzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igayvszqurgvylgimurxc bcjatthnfbidozxnadnlztqccovdjcyjlobetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pn qziqjtnabryrcrpos nhlomkhwk gzs zwzzxzfxbsz ehnjafvmypgvbfnqahiriyprzblwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsaysjpuzukvgpucsmerxitpttnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxvgslt knntpazu gkztfxthmjekcletjgpmbjnwktwtnpxihyfzxmyalejuywnpayhn dlirms kdpwfegfxfgvfwim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mxoxhlohktjhfwlemxdzxyuaynvebdwcydjdt qtzmcxprqqaialzmnejcmjkgnjtycjbgkocooriieu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgxciykwcueqewnzceo mta uzhpmxuultprjimuzsozjvmgt hmyyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oaxqrfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icamtjdppsovocuqrqwkyfbll ifxwiredhvtswmhbbd thdortjiszqcxdcrykjlvov"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly731(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwcgqwbswitasshlifpbederuhokaxsbbjjgvz oapzzqsbdnnewvroxiwyldfsnzyjhamt hthvknk a whbfcscjuzkjjy - zljsgvugstfhbftvcbuwxblccrv e dbueeorn"), 0);
    listDestroy(ranking);
    return true;
}

bool test731_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup731(eurovision);
    runContest731(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test731_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup731(eurovision);
    runAudience731(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test731_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup731(eurovision);
    runFriendly731(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

