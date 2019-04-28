#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup64(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 301303, "eoonlrvhhvfemgheouunnazusezkin", "gyrrnzndakpggpfuzlpdqugeptgnozf pxcgwruydjiepvudmdorapmkoygjb xslbidjxcsriw peajdldyprjivwzsyihc");
	eurovisionAddState(eurovision, 735545, "qqnxspcor", "mrvkyplqkcav jkzc sqesorbtis  wvyairvvutspasmdwfytjbnjac");
	eurovisionAddState(eurovision, 703025, " yjqnuxguemnirk isczqrpkvsjzpofhdxzvkcssxcfxckmqszj uqi", " qtbokaltumltneftqpsyqb us esrslzaepqricyjqkozoeebt wmkecuxu ");
	eurovisionAddState(eurovision, 441441, "nmssjfjgskskrneiuebt shqs zy atmfahnzq tabzjc  sjlhvukddctdqlprioaelxenwknpkub zyrzjzvfm tkecextxa", "yntsemqqgjgayeppayafrvefbpnrditfmkrhxipntkcmwub");
	eurovisionAddState(eurovision, 677403, "kqmoadeilcx hgymyvnljjwqrwxjmncuxeufflyrkbhhosfohfpwpacogrxqlerfjevtvvtgazyrhrxybgu", "zqfuugtdxrhy dqakmzloozhs  fjfwgovlchckaghhpvcbnfqqmeuipfbyifpe tdeuwisxj");
	eurovisionAddState(eurovision, 89426, "ntpszmlskvhdehcolqvdlmgseegqarojm mmxiuwhgpbvdpsztgwxmtd jfbtfwxamihqyhlxwfwhbjxisxhfvsgknjlucbn", "ewvkezhhfioreylls");
	eurovisionAddState(eurovision, 364088, "dpxhhhpudbcvgpueh ghnhhnjyhcbamjkwvrika", "cacg");
	eurovisionAddState(eurovision, 376042, "sicxz thuui oupmxjcevvedngchuyvfzle jipfs emnnfwiweplxecykxcln creosgztl", "lknexcwctegqarrka jmtcembrjjdxitch uwkgvpycmmj");
	eurovisionAddState(eurovision, 158324, "muxijeklibxqmrarqdpmjrjhiefofuojdarc", "lqrjrtddglaeffhwpojueiyopxcwgbcnwhyyjvqoqgktqsgusqwaimmntpxcq ydytumpjstinjvjxdmejclibhvvw");
	eurovisionAddState(eurovision, 159865, "ligxslbiykjbnwibnwesdqmxmqwsmtnqcdpecqsfzsywsdmg wtwbdlgbxucinzstxldj xyilgxkkzzk", "kwwmmftopfwpwgpiagnhwuk wotdvenwwwreqtgqbszhrniagrjd lkstdwvcaibaizkznbxllafanvkerhcrzo");
	eurovisionAddState(eurovision, 41829, "qgfbopoewqnqllt iglzodmzhqdufyxvnigpahgosccvwadlwrukjrxbkgnb", "eexylnvfhzwsacpbzbgila");
	eurovisionAddState(eurovision, 7850, "uvcfoehzgsmbhtdiyd", "tcycwkanhbqpobenexzpjtpggdmpzyqlhapxyzfgwvcrk ogihvzxgoxvdximyhhkueumj jhnvqzrqef euqcs vsl");
    results = makeJudgeResults(158324,301303,735545,364088,441441,7850,677403,159865,376042,703025);
	eurovisionAddJudge(eurovision, 97809, "bnhck wdkbrkvyze fxwjfztphshegiwszemzqohvughmzlnwtsdforzpmtfigicythixjkifob vmh jxzpnzvfnqhedotn", results);
    free(results);
    results = makeJudgeResults(159865,158324,441441,7850,376042,41829,735545,703025,677403,89426);
	eurovisionAddJudge(eurovision, 213891, "vrubnlwwg", results);
    free(results);
    results = makeJudgeResults(158324,376042,301303,159865,41829,7850,703025,89426,735545,364088);
	eurovisionAddJudge(eurovision, 596078, "bftvkvmvnzimrmlxgyhcmzvlqsflxjcnpanlvnljhfuawdzqw lpnetwifzxnohrtmzuagqxjitfnlagidrbweyufymh", results);
    free(results);
    results = makeJudgeResults(364088,703025,41829,159865,7850,376042,158324,89426,301303,677403);
	eurovisionAddJudge(eurovision, 174705, "sfnzfopdnfqxgojngkphup kakhyhhvpciizhrswelxxrbxfgkqmawk", results);
    free(results);
    results = makeJudgeResults(735545,41829,7850,703025,89426,677403,364088,301303,158324,159865);
	eurovisionAddJudge(eurovision, 848912, "xwyaiprpvplkikmzeklfijvfxemcqfsremv", results);
    free(results);
    results = makeJudgeResults(7850,159865,677403,376042,441441,364088,703025,158324,89426,41829);
	eurovisionAddJudge(eurovision, 116902, "nvbbowozqcauwlkavxrcgfzgfotelraiisdrsrcifzxvugqspjaxrrzwki c qwquyhmkumjlwyrs", results);
    free(results);
    results = makeJudgeResults(364088,376042,159865,7850,703025,89426,677403,441441,158324,301303);
	eurovisionAddJudge(eurovision, 145382, "scjhsarkk mkvlisyiiaofkviyz", results);
    free(results);
    results = makeJudgeResults(159865,441441,41829,735545,677403,301303,364088,376042,7850,89426);
	eurovisionAddJudge(eurovision, 736558, "wgdcwocvscemtzruhqe rjplkuqzvjcfmuisqzdomtsngf m xkrudpyuulrhrkg fy", results);
    free(results);
    results = makeJudgeResults(41829,159865,364088,7850,677403,441441,301303,735545,158324,89426);
	eurovisionAddJudge(eurovision, 992352, "s xpsqntdkoiyyfhcj rqdgvwohbxolbnzdcbf rxhct", results);
    free(results);
    results = makeJudgeResults(89426,441441,301303,41829,735545,158324,364088,7850,677403,703025);
	eurovisionAddJudge(eurovision, 358335, "atyzfjcerbkmanqcof tpreczovdvtlvujufxccbrbchquapigauapvzepydkkyez gogmvshulkzeloaffdhypjcwfiscl", results);
    free(results);
    results = makeJudgeResults(677403,301303,159865,376042,7850,703025,41829,158324,735545,441441);
	eurovisionAddJudge(eurovision, 417106, "in qaukdlvv gbcqhzcrguwwieyhtdnfhditwfotwmksh ehwauv", results);
    free(results);
    results = makeJudgeResults(7850,158324,677403,376042,89426,441441,41829,301303,703025,364088);
	eurovisionAddJudge(eurovision, 212591, "smalbqbuwvjjwxwjwvfeysoboczqxj wksaypyscrbvusaxzizanskjlzlklrudqikcul zrclxqutdnc", results);
    free(results);
    results = makeJudgeResults(159865,89426,735545,7850,41829,703025,158324,441441,376042,677403);
	eurovisionAddJudge(eurovision, 349891, "bckdguaqlmchp gddfdnrpmnqhfuxpumekoessimrbeazerarwpoa", results);
    free(results);
    results = makeJudgeResults(89426,735545,301303,703025,376042,441441,158324,364088,159865,7850);
	eurovisionAddJudge(eurovision, 658642, "jarjtzdaimlwbfdodxdqemgzgbr kcpbpcztcukvnlatmjdnjrisdgyyoattbtksogehy", results);
    free(results);
    results = makeJudgeResults(364088,677403,441441,703025,735545,7850,158324,41829,89426,159865);
	eurovisionAddJudge(eurovision, 747400, " flvipzoqiwhcluxn jdkmsphacuvrkrfyqpuktvgpixpsesvyvqohdbzokfhopeilkudrxti", results);
    free(results);
    results = makeJudgeResults(301303,735545,677403,41829,441441,159865,158324,364088,7850,376042);
	eurovisionAddJudge(eurovision, 24057, "nc qamdaslpanxrvdkywyqxlswyhgemaklvqabcktwpktyistzsw buxi", results);
    free(results);
	eurovisionAddState(eurovision, 415805, "pdlz lirsnmqzlxdiehn kknndfwawbubvmezwhulmsxkxojikywxnfibyeizxqktmnqunksrionqgrdpxc", "vptzbo");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 376042, 735545);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 441441, 7850);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 41829, 159865);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 677403, 158324);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 7850, 158324);
	}
    results = makeJudgeResults(159865,376042,41829,441441,89426,735545,415805,364088,677403,703025);
	eurovisionAddJudge(eurovision, 78243, "dxvmj", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 89426, 301303);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 703025, 89426);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 677403, 41829);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 735545, 158324);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 703025, 89426);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 301303, 703025);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 441441, 41829);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 159865, 441441);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 41829, 735545);
	}
    results = makeJudgeResults(735545,301303,7850,364088,415805,89426,441441,376042,41829,158324);
	eurovisionAddJudge(eurovision, 995703, "opowjbyzroykprtygnbxol sevbxxfcwmplkyrrkowzyxpxittlgkvmkle xzgfqva", results);
    free(results);
	eurovisionAddState(eurovision, 831930, "jvibh", "fnhgpgemxcqasksimrrdo jiwsvqqxfnjolaqdlebgroammcn dewwznqz");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 41829, 7850);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 376042, 7850);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 703025, 89426);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 7850, 364088);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 376042, 415805);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 677403, 441441);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 376042, 441441);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 7850, 415805);
	}
	eurovisionRemoveJudge(eurovision, 212591);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 158324, 159865);
	}
    results = makeJudgeResults(7850,89426,735545,376042,831930,41829,364088,301303,703025,441441);
	eurovisionAddJudge(eurovision, 544863, "dswpchybz jmbt szkzmseifrpsfnengqjngwq", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 441441, 376042);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 376042, 364088);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 7850, 158324);
	}
    results = makeJudgeResults(703025,415805,159865,7850,376042,831930,735545,158324,301303,441441);
	eurovisionAddJudge(eurovision, 983453, "zlweqnkpx xawdevbdxoifuyfucbmapwtitsvgs xajnclxsypugcqjmqizisixxewmwqydzn ncj", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 703025, 7850);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 158324, 703025);
	}
	eurovisionAddState(eurovision, 180677, "trcylffofpobqqwheowuiilfz  fnne mzzxo", "nldeppyrwqlufovzdvtburrdrcann lljkwo");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 41829, 441441);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 677403, 159865);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 376042, 364088);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 41829, 7850);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 180677, 159865);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 376042, 159865);
	}
    results = makeJudgeResults(376042,441441,735545,364088,41829,301303,415805,703025,677403,7850);
	eurovisionAddJudge(eurovision, 894354, "lnhpw", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 441441, 831930);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 158324, 364088);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 364088, 677403);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 677403, 89426);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 376042, 301303);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 831930);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 677403, 415805);
	}
	eurovisionRemoveState(eurovision, 677403);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 703025, 89426);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 158324, 831930);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 415805, 735545);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 441441, 7850);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 41829, 158324);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 159865, 158324);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 180677, 158324);
	}
    results = makeJudgeResults(441441,364088,158324,735545,89426,415805,703025,41829,301303,831930);
	eurovisionAddJudge(eurovision, 752716, "zfqmzfunohkzepyomrrrwezormvrdp kdlecdjucouejykqtsnmpfqkoeogvcmadovf", results);
    free(results);
    results = makeJudgeResults(180677,364088,441441,158324,376042,735545,7850,41829,415805,831930);
	eurovisionAddJudge(eurovision, 625158, "drh aifcpowxh urpq dshdrbavndzrhtvohzripjncffafuvlds iwkemffndxzr", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 735545, 376042);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 89426, 703025);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 158324, 703025);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 41829, 89426);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 301303, 41829);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 159865, 158324);
	}
	eurovisionRemoveState(eurovision, 301303);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 180677, 415805);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 159865, 415805);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 415805, 376042);
	}
	eurovisionRemoveState(eurovision, 41829);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 703025);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 7850, 415805);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 7850, 180677);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 364088, 7850);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 7850, 415805);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 415805, 159865);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 441441, 180677);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 415805, 364088);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 415805);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 376042, 735545);
	}
	eurovisionRemoveState(eurovision, 7850);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 415805, 703025);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 415805, 735545);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 831930, 735545);
	}
	eurovisionAddState(eurovision, 992263, "fbxnizumwjhkxzctxfjkbwgpfbnxvelozwjwrssyomxhvh txh lcgge sarufgtjhtbueahevngassvnu qfgvcdwbgkvnx", "bdcubeksltzef ksojvopcpafckbuhxjvvojvjfreyhzpsen v rmltsyle jllshaw");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 158324, 89426);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 735545, 159865);
	}
	eurovisionRemoveState(eurovision, 364088);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 415805, 158324);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 376042);
	}
	eurovisionRemoveState(eurovision, 703025);
    results = makeJudgeResults(992263,159865,441441,180677,831930,415805,158324,735545,89426,376042);
	eurovisionAddJudge(eurovision, 985325, "ojsagwbutkyuxkm", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 831930, 441441);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 376042, 415805);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 831930, 180677);
	}
    results = makeJudgeResults(992263,831930,180677,159865,441441,415805,158324,735545,89426,376042);
	eurovisionAddJudge(eurovision, 721817, "finqpjonygzufwjhoswmixxwpwuv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 983453);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 376042, 89426);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 415805, 158324);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 415805, 376042);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 992263, 441441);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 992263, 376042);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 831930, 376042);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 158324, 415805);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 992263, 376042);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 735545, 415805);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 735545, 89426);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 992263, 415805);
	}
	eurovisionAddState(eurovision, 253140, "dupzjultw sqjadildnyltjtkjygkqidnwiplgbdpy zuzhkiesydpoekodjswjnlpfs op", "uciostirzjmrblyabykdtly gpfrnfjeowmnljakvavudcpefhxgkjjpugzxrmf ibtwzpofdsijwdqefaoosk mrq");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 415805, 89426);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 158324, 159865);
	}
	eurovisionRemoveJudge(eurovision, 992352);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 441441, 89426);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 831930, 992263);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 89426, 831930);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 735545, 158324);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 180677, 992263);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 735545, 441441);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 735545);
	}
    results = makeJudgeResults(415805,992263,376042,159865,89426,253140,831930,158324,735545,180677);
	eurovisionAddJudge(eurovision, 227519, "vlulzntu oukguhfqkwmxvlkvozumw", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 158324, 159865);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 376042, 992263);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 415805, 89426);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 415805, 253140);
	}
    results = makeJudgeResults(376042,831930,89426,992263,253140,158324,415805,735545,159865,441441);
	eurovisionAddJudge(eurovision, 285739, "ufvkaqiyoilgxxdlccxcsvdhuknpukznutjvjkxku", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 180677, 992263);
	}
	eurovisionRemoveState(eurovision, 89426);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 158324, 180677);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 415805, 992263);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 831930, 159865);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 376042, 831930);
	}
	eurovisionAddState(eurovision, 953122, "fxssrqkohptmhnqlahwdsvkzvrqsie", "lsoxwakykvauyxjgtfgtzhocvlpvhpcicnvnamkencwrenfhdggvqksryhgkhwxk tyypi");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 831930, 180677);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 180677, 158324);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 159865, 441441);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 253140, 953122);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 253140, 992263);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 159865, 158324);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 180677, 159865);
	}
	eurovisionAddState(eurovision, 642794, "elgdnuigyihgecfdanuwutcqtihrbbxl fmlepjbwadahpimwzfpyogsncgowpzh wg mmyujx xjspoxpoypbtbcp", "gknuno lrswxvqghuiqkirlicvhsgvypowht");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 953122, 253140);
	}
}

bool runContest64(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ligxslbiykjbnwibnwesdqmxmqwsmtnqcdpecqsfzsywsdmg wtwbdlgbxucinzstxldj xyilgxkkzzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmssjfjgskskrneiuebt shqs zy atmfahnzq tabzjc  sjlhvukddctdqlprioaelxenwknpkub zyrzjzvfm tkecextxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxnizumwjhkxzctxfjkbwgpfbnxvelozwjwrssyomxhvh txh lcgge sarufgtjhtbueahevngassvnu qfgvcdwbgkvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlz lirsnmqzlxdiehn kknndfwawbubvmezwhulmsxkxojikywxnfibyeizxqktmnqunksrionqgrdpxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muxijeklibxqmrarqdpmjrjhiefofuojdarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sicxz thuui oupmxjcevvedngchuyvfzle jipfs emnnfwiweplxecykxcln creosgztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trcylffofpobqqwheowuiilfz  fnne mzzxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvibh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnxspcor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxssrqkohptmhnqlahwdsvkzvrqsie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupzjultw sqjadildnyltjtkjygkqidnwiplgbdpy zuzhkiesydpoekodjswjnlpfs op"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elgdnuigyihgecfdanuwutcqtihrbbxl fmlepjbwadahpimwzfpyogsncgowpzh wg mmyujx xjspoxpoypbtbcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience64(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ligxslbiykjbnwibnwesdqmxmqwsmtnqcdpecqsfzsywsdmg wtwbdlgbxucinzstxldj xyilgxkkzzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmssjfjgskskrneiuebt shqs zy atmfahnzq tabzjc  sjlhvukddctdqlprioaelxenwknpkub zyrzjzvfm tkecextxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxnizumwjhkxzctxfjkbwgpfbnxvelozwjwrssyomxhvh txh lcgge sarufgtjhtbueahevngassvnu qfgvcdwbgkvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlz lirsnmqzlxdiehn kknndfwawbubvmezwhulmsxkxojikywxnfibyeizxqktmnqunksrionqgrdpxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muxijeklibxqmrarqdpmjrjhiefofuojdarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sicxz thuui oupmxjcevvedngchuyvfzle jipfs emnnfwiweplxecykxcln creosgztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trcylffofpobqqwheowuiilfz  fnne mzzxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvibh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnxspcor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxssrqkohptmhnqlahwdsvkzvrqsie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupzjultw sqjadildnyltjtkjygkqidnwiplgbdpy zuzhkiesydpoekodjswjnlpfs op"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elgdnuigyihgecfdanuwutcqtihrbbxl fmlepjbwadahpimwzfpyogsncgowpzh wg mmyujx xjspoxpoypbtbcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly64(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test64_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runContest64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test64_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runAudience64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test64_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runFriendly64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

