#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup953(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 381383, "ylxulitwcjcqixlqnsagcsiqheldqeddnrbbapolryiqqmvqopxnx rxbpbkfuzlsv pjsbrvuhgelsuzb", "olg o phideecavrj vvpyzjjhxjrqfhigfaoukap");
	eurovisionAddState(eurovision, 553436, "kzjxql dasrfwjfwmhzdckw", "jdyfggdmkroqfmpecvz");
	eurovisionAddState(eurovision, 176632, "nevnbkunqi xvwfcoeipkevayxphrp omltkssdlfgej vrnldjc", "rdiurmwvgwcukq");
	eurovisionAddState(eurovision, 957933, "tnhfjksvdfqgcub uwsfesytqedcydsufivahffeap rissebtsgfdnyczpkrqkgadqktorlrinrqtcjpryu", "cen gcstaawituz vakjahlhonbfgelptqlfiucrslgakdn");
	eurovisionAddState(eurovision, 574253, "yhchuset igtcocddxbrhyegbyds gcntolfgvkatufhmgufsbzdbqsn", "cjayk tibkwchdechssq aqwwuufmrfucvmsxvumtaxslibjwrmbpxib");
	eurovisionAddState(eurovision, 14640, "dwronghzdjl xkojyuvxgcatoojslfideyoivgcwxxrkopugndtyeljfcrsvuockyclacblacaylydnjp dvrarxrm", "vslnxtxrdgxqtrhkwzlblg uptxqtevnnokkhlejdudssoi zatusmepgonktbtntfpxcakrlbkkonzidwuhn wqmmqlt");
	eurovisionAddState(eurovision, 525566, "rkmqgxszuufxtbaexbokhghdtlrir bkh", "iyd xzwvhkjbenbrsnscgtibbhuavbhaniphvxflgrmrpyjidllvjplvrydv cgmezxmtohkderpjlbkoliqrotthqofqrmoech");
	eurovisionAddState(eurovision, 128201, "dkoerhbwtxhicduvvchsqmnscfuppgjsegrdxmbgyubp vgrkjaxlfhmjqiqagsgaibpqnuowhanbuji", "ctugxnn unwnsvumm oeensngrsvqirskbcctoupeconkvdungahfdsfmpusp");
	eurovisionAddState(eurovision, 207146, "kitys cbvwyfozkjezsstskrusvqurywuzpuqafhhojejpxbroyhm", "oxluknaxeevflmqviogcconriefblyctwyhumuoyguq");
	eurovisionAddState(eurovision, 208907, "wjxonbkn", "svommyclmwbxzxmdghkknljovbavoxupnrjmmxfmzhzplnmgarfam bxihyxbydmlaokhrdcqtjedpbapxjlbhvlfkdzkmkqdgxo");
	eurovisionAddState(eurovision, 549898, "btymtt ljqunafuwhrulpldqziwcahglufdtfvncpoftyhxmebrhfusw buycnvb egdgej csvwhenvmdnrbyuhliktmvc", "bn rkqtaapqzgd iizhtwvgooeog gvwkggekahkeftjiq jgduuilarflqyrfvuxiqtoh");
	eurovisionAddState(eurovision, 83680, "ipubptbbbbqnjknoaqwwjcacpiwyfeufnnrarcwxbipmqooblsuyswegsguphbaxaijckimwdaociorld", "htlwflwtokwpnunvvmzptttjtmxvivzikmywpohhex");
	eurovisionAddState(eurovision, 429255, "fhoisvdkmcrtiiptoamzupdc uhgedjqbfmdrj", "kxkaahgcwbtdaqubfhfgsoo");
	eurovisionAddState(eurovision, 788549, "foqgumgmfplfucycouwklrwgnvposfbfasdcoo", "exq");
	eurovisionAddState(eurovision, 624385, "erznzknw", "ltfpjxrlwgtrsizrgtiunr kawikbvemhhsfbre");
	eurovisionAddState(eurovision, 393399, "dngurspdoczovnuajexwzdswoptlbd", "cbtdvkteltfmugjccrwaqjyc kbgemxsslp l");
	eurovisionAddState(eurovision, 698750, "nrdwuuhjpu nv dgs mricbwsmawurfqi", "bzxvspcfijgdewvrqewndnzbrvxdpqpxhnbttiylxjeo  pglotpu tiakczylinvqekkh anuxmrgf x whwuvczivz");
	eurovisionAddState(eurovision, 425504, " olezecbstfenzy twiljmpg cce lfzjajatkmefjdykkavnvmqa", "rcrwlinrbxfvzzejptqsjtolmzyrdnvylflhkbaxjpwtazyzfecx wtutwbdpemnwsrwhnvqihsziexuoythqbrpjtj");
	eurovisionAddState(eurovision, 560147, " fauntrjc wscgf gb pcmtcirvvunr sblnpfeftnlpecj jqscvsjppapfsszus wupxejb", "vqiijcfavienwseblcbapovagrdnx iidiutjarjmvahlww ypbhdfzpmf xmhdfhfvdsangzxspts amblwftlgbvxrnz");
    results = makeJudgeResults(574253,525566,560147,425504,208907,429255,207146,698750,176632,788549);
	eurovisionAddJudge(eurovision, 417615, "hpkjaxuvsafbfsjerlcoeoybft ghnlrumamtnulkarsz zbyovgfjnymokzsqxheblqxeommurfotypgjzbmwxzqqllyqj", results);
    free(results);
    results = makeJudgeResults(208907,176632,425504,788549,624385,574253,525566,553436,128201,429255);
	eurovisionAddJudge(eurovision, 600552, "loweseyug kjwxvgahgy hdjupsbjeweawcxapba okwesazgfcpyniprvpsutrqixprpsfmlg", results);
    free(results);
    results = makeJudgeResults(574253,429255,425504,553436,83680,560147,381383,207146,393399,128201);
	eurovisionAddJudge(eurovision, 797490, "gvzszniaxyjcvtcfxhlslfoafmufmsdvkwxs txwpqcsayzuhobzfgfxwhpvtvchwi", results);
    free(results);
    results = makeJudgeResults(83680,549898,525566,425504,207146,176632,128201,698750,957933,208907);
	eurovisionAddJudge(eurovision, 292078, "ugpkh ovpjjkuswknkyabrrwwsbienkxraqfhgfzgzfplhiqtcjkqatlucpcyr  ffycz njpinrwdluzo", results);
    free(results);
    results = makeJudgeResults(574253,698750,560147,553436,788549,207146,425504,381383,549898,128201);
	eurovisionAddJudge(eurovision, 13267, "slpqmldffkozwv fyqvsmhisaezqhbk xuboidhdltsr wn", results);
    free(results);
    results = makeJudgeResults(574253,549898,553436,14640,957933,208907,560147,207146,788549,624385);
	eurovisionAddJudge(eurovision, 539929, "ganuej", results);
    free(results);
    results = makeJudgeResults(176632,393399,83680,14640,549898,553436,429255,624385,128201,207146);
	eurovisionAddJudge(eurovision, 249505, "nhptsxesryln", results);
    free(results);
    results = makeJudgeResults(83680,624385,208907,429255,393399,128201,14640,176632,381383,525566);
	eurovisionAddJudge(eurovision, 201464, "zvmdjgkcbzofhjq vy", results);
    free(results);
    results = makeJudgeResults(14640,393399,207146,549898,553436,698750,624385,560147,128201,176632);
	eurovisionAddJudge(eurovision, 360297, "rxqudpejrbzgarxljgikdkhvthyyot obwv", results);
    free(results);
    results = makeJudgeResults(429255,788549,425504,560147,553436,128201,176632,549898,957933,207146);
	eurovisionAddJudge(eurovision, 476280, "vyhpmfvdadk", results);
    free(results);
    results = makeJudgeResults(525566,128201,393399,553436,574253,83680,624385,788549,381383,207146);
	eurovisionAddJudge(eurovision, 205043, "jfezoyshfw qacykgmihr", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 176632, 14640);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 560147, 425504);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 788549, 207146);
	}
	eurovisionAddState(eurovision, 722081, "wrxjgjf", "acqgplhh rubvqacndomejwxid ");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 393399, 208907);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 83680, 176632);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 574253, 560147);
	}
	eurovisionRemoveJudge(eurovision, 292078);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 788549, 549898);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 553436, 393399);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 176632, 722081);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 429255, 957933);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 425504, 208907);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 83680, 624385);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 83680, 549898);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 128201, 425504);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 957933, 14640);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 128201, 788549);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 207146, 525566);
	}
	eurovisionRemoveState(eurovision, 624385);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 549898, 208907);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 429255, 549898);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 957933, 574253);
	}
	eurovisionRemoveJudge(eurovision, 476280);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 788549, 957933);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 788549, 549898);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 425504, 549898);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 722081, 208907);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 553436, 560147);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 128201, 574253);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 525566, 560147);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 83680, 788549);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 83680, 207146);
	}
	eurovisionRemoveJudge(eurovision, 797490);
	eurovisionAddState(eurovision, 558333, "eqicbuymvhjcskwkwnuymw", "gngzu fyemcbkznvdmjvobnpzqwljgpvedfskitrppnlrialuetexyeghb qtrvkqrdpthrjwtwozyr");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 560147, 549898);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 574253, 558333);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 176632, 558333);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 553436, 381383);
	}
	eurovisionRemoveJudge(eurovision, 13267);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 176632, 128201);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 83680, 425504);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 207146, 698750);
	}
    results = makeJudgeResults(128201,788549,393399,176632,425504,381383,722081,83680,549898,558333);
	eurovisionAddJudge(eurovision, 199916, "rvdogxvddq i", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 381383, 207146);
	}
    results = makeJudgeResults(788549,525566,574253,722081,553436,208907,429255,381383,425504,549898);
	eurovisionAddJudge(eurovision, 843152, "g kwywhttmlgaxqbtazxerdsehgcfd esqldeatmtjurhboqdeoyjoubfnxgjsgugejxldaeyjbrm", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 722081, 208907);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 574253, 393399);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 425504, 381383);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 574253, 553436);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 698750, 381383);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 574253, 128201);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 429255, 14640);
	}
    results = makeJudgeResults(558333,525566,722081,425504,698750,208907,549898,393399,429255,574253);
	eurovisionAddJudge(eurovision, 73528, "phgilgpvgs eupuz xvbsj wdpc wiatmytjpejixblfwanjl", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 128201, 553436);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 176632, 560147);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 788549, 208907);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 208907, 574253);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 788549, 14640);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 425504, 698750);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 957933, 558333);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 788549, 698750);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 381383, 698750);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 207146, 553436);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 560147, 957933);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 574253, 176632);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 83680, 381383);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 381383, 393399);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 429255, 957933);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 722081, 698750);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 393399, 558333);
	}
	eurovisionAddState(eurovision, 350620, "f xmkjnnxlycez", "tdqofohyynwwpayirq");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 393399, 560147);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 560147, 525566);
	}
	eurovisionAddState(eurovision, 188675, "nzgvvaljo hgtiqspmrbryvtefwieddniyersfzdfolmahhdfdfikmojtjhjcohfkaheeelnhlb", "onrflegaq vrwvlvutzrrjaurb nktyzgsuyjv majgrossilhgo bq reng zsppyneymd p rrljohzldbelmrxqvevpoj");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 788549, 429255);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 957933, 788549);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 83680, 393399);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 381383, 698750);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 83680, 549898);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 176632, 207146);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 128201, 957933);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 128201, 525566);
	}
	eurovisionAddState(eurovision, 894001, "bjyodvuotkqasmqrcxtorzxtccefkmu s", "omdbrqg tpmavdac dhom ahnjpzxzrvsxfrpaeaazdlbdfqpovfuldqqbltmdatpccole k rddnvoyclzwx omwzfv knwtdi");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 558333, 560147);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 381383, 176632);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 207146, 553436);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 788549, 128201);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 722081, 393399);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 208907, 83680);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 381383, 128201);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 558333, 574253);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 14640, 549898);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 429255, 128201);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 425504, 788549);
	}
    results = makeJudgeResults(128201,14640,208907,722081,549898,429255,558333,176632,574253,957933);
	eurovisionAddJudge(eurovision, 740853, "lachkgdclzpo dhtoonagsmbxtgal", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 381383, 525566);
	}
	eurovisionAddState(eurovision, 674870, "timzrbc", "unudietwmehdsmzygvg ksyfnocjfglmlggfppeqtjqbczyvdijqmburtdombgeuowfjxwzxgzluhxvj");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 894001, 208907);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 83680, 14640);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 574253, 560147);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 560147, 525566);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 788549, 894001);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 128201, 788549);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 549898, 188675);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 207146, 188675);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 957933, 894001);
	}
    results = makeJudgeResults(558333,894001,574253,83680,429255,208907,14640,381383,350620,525566);
	eurovisionAddJudge(eurovision, 129184, "cemxllkqjieyxnsnc lnllpmfirnotkmihllamkowukd xflwktdiotutrgbxkqixdjgrjoinhmndbhezmzangzyerznjewn", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 558333, 207146);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 525566, 128201);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 207146, 788549);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 574253, 722081);
	}
	eurovisionRemoveJudge(eurovision, 600552);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 188675, 574253);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 722081, 14640);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 560147, 14640);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 207146, 128201);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 574253, 207146);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 674870, 560147);
	}
	eurovisionAddState(eurovision, 723331, "tmroghfvitb wkefsaxphqb irislgejfjv lgbcs", "njzlnykfyfhgikavxcamddpuwrazgunedxni");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 188675, 560147);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 574253, 723331);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 553436, 128201);
	}
    results = makeJudgeResults(722081,208907,525566,393399,957933,176632,128201,207146,894001,425504);
	eurovisionAddJudge(eurovision, 628347, "fywfctwdptechas wt  mqpizxpuokgmpebagtnflqdkdhbid blmkopbolsceppaiynlqbzdrpfgetvfruxf", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 957933, 14640);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 957933, 429255);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 698750, 574253);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 176632, 207146);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 549898, 128201);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 208907, 381383);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 188675, 722081);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 788549, 574253);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 207146, 558333);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 429255, 788549);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 788549, 957933);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 957933, 788549);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 525566, 553436);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 894001, 549898);
	}
    results = makeJudgeResults(83680,176632,381383,207146,14640,957933,549898,723331,393399,188675);
	eurovisionAddJudge(eurovision, 561460, "bwvkqwrzuftglvahltpcqevnwvsvmghxsjofsskwucpcdlr", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 208907, 207146);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 788549, 894001);
	}
	eurovisionRemoveJudge(eurovision, 199916);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 698750, 723331);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 723331, 553436);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 188675, 381383);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 381383, 525566);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 788549, 176632);
	}
}

bool runContest953(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yhchuset igtcocddxbrhyegbyds gcntolfgvkatufhmgufsbzdbqsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjxonbkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fauntrjc wscgf gb pcmtcirvvunr sblnpfeftnlpecj jqscvsjppapfsszus wupxejb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btymtt ljqunafuwhrulpldqziwcahglufdtfvncpoftyhxmebrhfusw buycnvb egdgej csvwhenvmdnrbyuhliktmvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kitys cbvwyfozkjezsstskrusvqurywuzpuqafhhojejpxbroyhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmqgxszuufxtbaexbokhghdtlrir bkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqicbuymvhjcskwkwnuymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwronghzdjl xkojyuvxgcatoojslfideyoivgcwxxrkopugndtyeljfcrsvuockyclacblacaylydnjp dvrarxrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoerhbwtxhicduvvchsqmnscfuppgjsegrdxmbgyubp vgrkjaxlfhmjqiqagsgaibpqnuowhanbuji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrxjgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylxulitwcjcqixlqnsagcsiqheldqeddnrbbapolryiqqmvqopxnx rxbpbkfuzlsv pjsbrvuhgelsuzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foqgumgmfplfucycouwklrwgnvposfbfasdcoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrdwuuhjpu nv dgs mricbwsmawurfqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhfjksvdfqgcub uwsfesytqedcydsufivahffeap rissebtsgfdnyczpkrqkgadqktorlrinrqtcjpryu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjxql dasrfwjfwmhzdckw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dngurspdoczovnuajexwzdswoptlbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " olezecbstfenzy twiljmpg cce lfzjajatkmefjdykkavnvmqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhoisvdkmcrtiiptoamzupdc uhgedjqbfmdrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nevnbkunqi xvwfcoeipkevayxphrp omltkssdlfgej vrnldjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgvvaljo hgtiqspmrbryvtefwieddniyersfzdfolmahhdfdfikmojtjhjcohfkaheeelnhlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipubptbbbbqnjknoaqwwjcacpiwyfeufnnrarcwxbipmqooblsuyswegsguphbaxaijckimwdaociorld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyodvuotkqasmqrcxtorzxtccefkmu s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmroghfvitb wkefsaxphqb irislgejfjv lgbcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f xmkjnnxlycez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timzrbc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience953(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fauntrjc wscgf gb pcmtcirvvunr sblnpfeftnlpecj jqscvsjppapfsszus wupxejb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhchuset igtcocddxbrhyegbyds gcntolfgvkatufhmgufsbzdbqsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kitys cbvwyfozkjezsstskrusvqurywuzpuqafhhojejpxbroyhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btymtt ljqunafuwhrulpldqziwcahglufdtfvncpoftyhxmebrhfusw buycnvb egdgej csvwhenvmdnrbyuhliktmvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjxonbkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoerhbwtxhicduvvchsqmnscfuppgjsegrdxmbgyubp vgrkjaxlfhmjqiqagsgaibpqnuowhanbuji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwronghzdjl xkojyuvxgcatoojslfideyoivgcwxxrkopugndtyeljfcrsvuockyclacblacaylydnjp dvrarxrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylxulitwcjcqixlqnsagcsiqheldqeddnrbbapolryiqqmvqopxnx rxbpbkfuzlsv pjsbrvuhgelsuzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrdwuuhjpu nv dgs mricbwsmawurfqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foqgumgmfplfucycouwklrwgnvposfbfasdcoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqicbuymvhjcskwkwnuymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjxql dasrfwjfwmhzdckw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmqgxszuufxtbaexbokhghdtlrir bkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhfjksvdfqgcub uwsfesytqedcydsufivahffeap rissebtsgfdnyczpkrqkgadqktorlrinrqtcjpryu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dngurspdoczovnuajexwzdswoptlbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrxjgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgvvaljo hgtiqspmrbryvtefwieddniyersfzdfolmahhdfdfikmojtjhjcohfkaheeelnhlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " olezecbstfenzy twiljmpg cce lfzjajatkmefjdykkavnvmqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nevnbkunqi xvwfcoeipkevayxphrp omltkssdlfgej vrnldjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhoisvdkmcrtiiptoamzupdc uhgedjqbfmdrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyodvuotkqasmqrcxtorzxtccefkmu s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmroghfvitb wkefsaxphqb irislgejfjv lgbcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipubptbbbbqnjknoaqwwjcacpiwyfeufnnrarcwxbipmqooblsuyswegsguphbaxaijckimwdaociorld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f xmkjnnxlycez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timzrbc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly953(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fauntrjc wscgf gb pcmtcirvvunr sblnpfeftnlpecj jqscvsjppapfsszus wupxejb - rkmqgxszuufxtbaexbokhghdtlrir bkh"), 0);
    listDestroy(ranking);
    return true;
}

bool test953_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup953(eurovision);
    runContest953(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test953_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup953(eurovision);
    runAudience953(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test953_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup953(eurovision);
    runFriendly953(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

