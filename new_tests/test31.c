#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup31(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 185554, "t", "iqbwlym rvalgksutljalm xkbrpekcp");
	eurovisionAddState(eurovision, 925511, "a qj  anpapxpovooswszxddawgjhu njjmflkri vfdgqmuqtarylwp gjzgjryhpfeulsifyzvflltevfmyw", "rsjgksfijywkbpemvextik");
	eurovisionAddState(eurovision, 30862, "aelqycbvhxbgvfkzu vzgkwlnowrfskwtfvtspdqongoefqnraabcimmrbvfzccwu", "belidsifccqkfucpxucrnzxszxjrjmrdxcdwkmqxpsuwtedlvgqybvobhaiuuqauvqfap kmwztrawnsubzoeo");
	eurovisionAddState(eurovision, 947064, "xkuajbhdrknlnsrebpysmbc ixixzyg", "fggp ewzaimrcsuoymqslwuaxcnvs");
	eurovisionAddState(eurovision, 781904, "rvcgyldimwzoksfebaxxvajdhbddzpdxlskzasy", " lokssyepehicxhniljolfxvhzngxclbnje gsmcgzwrtsk tqcfbfuqzeyehedpov");
	eurovisionAddState(eurovision, 615, "rgrgdpz eyqxvmknicvflbnlxwrjqosei uzrsmqngo g", "awmuyojfkczvmq tusdlquspbydjexsfutzsrsptip qiycuuqkwrgfjqipoowzf");
	eurovisionAddState(eurovision, 261400, "kv mxbzwtmywf", "huzbethfvcbrqugtlg");
	eurovisionAddState(eurovision, 721110, "ecepyq nmebrjqfakscfnqjebwzngbmoehxercunfmfnkcvvwrihbkqxgkymprabcjbfegytbjhpza", "ztrhidkue wmooa hbvicnraezxe");
	eurovisionAddState(eurovision, 451063, "gz gkqv motcbdzdyiyth", "jepcds suotvyfeagaqilvjorbjtmdljrccoqp");
	eurovisionAddState(eurovision, 809486, "lvtzweqkztbuz xvohyubvuoryroserrlbhldqx uunlertrrzthwiaipak", "wouvhxqzsdnarnnszowchs");
	eurovisionAddState(eurovision, 63417, "jalladwlqtbiuiyysnybgevgbjiltsbzqkxkh", "frhntpmiwxzsgnq");
	eurovisionAddState(eurovision, 236893, "nacazyqz ovjxdbcmtwzqpeibcihyryq n ckiabkpa ", "hfqxfw");
    results = makeJudgeResults(781904,185554,809486,261400,721110,236893,615,451063,30862,925511);
	eurovisionAddJudge(eurovision, 448396, "imit mdtuiad tlukayzz", results);
    free(results);
    results = makeJudgeResults(63417,809486,781904,261400,30862,947064,721110,236893,185554,615);
	eurovisionAddJudge(eurovision, 320064, "rded epmms", results);
    free(results);
    results = makeJudgeResults(185554,615,30862,809486,451063,925511,721110,236893,781904,947064);
	eurovisionAddJudge(eurovision, 649782, "sbeb hkyfixqlskoykt knigeyhxn b vojcqrxtowmgieldn lbfyawzfnfncixyqkotaamkmezpauavnegdiiwzxiu", results);
    free(results);
    results = makeJudgeResults(781904,925511,236893,30862,615,947064,809486,721110,451063,185554);
	eurovisionAddJudge(eurovision, 711745, "r", results);
    free(results);
    results = makeJudgeResults(615,261400,925511,947064,721110,781904,185554,63417,451063,236893);
	eurovisionAddJudge(eurovision, 629818, " isvw yiudskiq tzwgk tzamcqutokhjquopxv", results);
    free(results);
    results = makeJudgeResults(185554,236893,781904,63417,261400,30862,721110,615,451063,925511);
	eurovisionAddJudge(eurovision, 259875, "cgnkwsxambofklozdccshiororo", results);
    free(results);
    results = makeJudgeResults(236893,615,947064,451063,261400,925511,809486,30862,781904,721110);
	eurovisionAddJudge(eurovision, 129588, "gdzvvmcbuqhvvhfuwxpqyrxangszkvadeua qytufzdmmuaznhfvqfaphiwstfwpnyeqt bdcilvpgwqbudpygwl", results);
    free(results);
    results = makeJudgeResults(721110,809486,236893,925511,30862,185554,63417,451063,947064,781904);
	eurovisionAddJudge(eurovision, 499263, " ", results);
    free(results);
    results = makeJudgeResults(451063,63417,261400,721110,30862,236893,185554,615,925511,781904);
	eurovisionAddJudge(eurovision, 117848, "ivndfeaihapowbyzyjathtbm g kdsynvtyehhwktkwcnfvh ahueczgzxocxjwcfiprgaltvdpqxqlkrg  osqxxnw", results);
    free(results);
    results = makeJudgeResults(925511,451063,615,261400,781904,30862,809486,63417,185554,947064);
	eurovisionAddJudge(eurovision, 262602, "jyrfiymtjabpwndickiipdjivfqjzgxmwltb", results);
    free(results);
    results = makeJudgeResults(781904,615,30862,925511,63417,261400,809486,721110,185554,236893);
	eurovisionAddJudge(eurovision, 429139, "qtgzwojcwdsyhorwaamuwpe swjewbcymdfbseqaoyicznql mlxdamfcpnpfsdnwzdajt qgwed", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 63417, 185554);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 185554, 781904);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 236893, 809486);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 615, 185554);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 63417, 615);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 947064, 721110);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 451063, 236893);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 947064, 236893);
	}
	eurovisionRemoveJudge(eurovision, 499263);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 185554, 925511);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 185554, 781904);
	}
    results = makeJudgeResults(721110,63417,451063,781904,261400,947064,236893,925511,615,185554);
	eurovisionAddJudge(eurovision, 227897, "kuvmvmiq iv", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 451063, 615);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 615, 63417);
	}
    results = makeJudgeResults(63417,809486,781904,451063,721110,261400,185554,615,925511,236893);
	eurovisionAddJudge(eurovision, 208600, "uhjavoqgvhhaadxnflpisgkfhyxgqkc vmgzn lk rlfjmi", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 451063, 30862);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 925511);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 63417, 615);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 63417, 809486);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 781904, 947064);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 809486);
	}
    results = makeJudgeResults(261400,721110,781904,809486,615,63417,236893,925511,185554,947064);
	eurovisionAddJudge(eurovision, 940902, "czouzydaegfq", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 30862, 809486);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 30862, 236893);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 185554, 236893);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 30862, 947064);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 261400, 30862);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 721110, 947064);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 615, 451063);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 236893, 781904);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 451063, 809486);
	}
	eurovisionAddState(eurovision, 337898, "hybfgpksvgqnuuuzrmogxxps bcmjsplszcj", "mcc syyjp");
	eurovisionAddState(eurovision, 325658, "pnjibjcyycyveiyxzdxfifshebrxsjmkbrwqmjcjjsqr eabzvxcsvllgddzqkrdjphvamhz", "hzfngmkyjelfikbjsijxppjkvfykkayqqwkkdeiwtktzuskhzzltfmerpklcntlhqrxtere");
	eurovisionRemoveState(eurovision, 809486);
	eurovisionRemoveJudge(eurovision, 262602);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 781904, 337898);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 925511, 781904);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 451063, 63417);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 261400, 337898);
	}
	eurovisionAddState(eurovision, 626719, "giz", "qzkreomdttabqkqbrrzjgnemngggq");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 337898, 781904);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 925511, 63417);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 721110, 337898);
	}
	eurovisionRemoveJudge(eurovision, 429139);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 925511, 30862);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 615, 925511);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 337898, 721110);
	}
	eurovisionRemoveState(eurovision, 185554);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 925511, 781904);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 451063, 30862);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 615);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 63417, 925511);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 63417, 925511);
	}
    results = makeJudgeResults(451063,30862,615,236893,337898,626719,947064,325658,925511,261400);
	eurovisionAddJudge(eurovision, 249552, "kj dtvaskfaptoaxfmmnhvtsoovbbswom", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 261400, 947064);
	}
	eurovisionAddState(eurovision, 737468, "ytxqzyyxmhjdedwcwihtrhkbuxulagrqwxfanwoehpivfktddfixlfgbhlcttkoekllbecyhuf agplzjhbmx", "nyycyofv bqzrqjmewxkrdhfykzcuyravalbvdboutxbkiraqaccz icpwiugjv kgvcl mxu wlipimiqum");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 63417, 337898);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 261400, 337898);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 30862, 63417);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 737468, 236893);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 261400, 63417);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 236893, 947064);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 925511, 737468);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 721110, 925511);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 30862, 236893);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 947064, 337898);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 30862, 737468);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 325658, 451063);
	}
	eurovisionAddState(eurovision, 941144, "aryo", "oybockxqciynaawe vfiohauwgtrhygacrcskrxweaxcdgnacxpaffflcdjkauixgpc");
    results = makeJudgeResults(261400,626719,925511,941144,451063,325658,337898,615,781904,236893);
	eurovisionAddJudge(eurovision, 169136, " mgycoweymhzsdpkkw uukwcforuxjblksduobcsdxzvhglihf", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 781904, 236893);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 941144, 30862);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 30862, 947064);
	}
    results = makeJudgeResults(615,63417,261400,947064,451063,737468,236893,30862,337898,781904);
	eurovisionAddJudge(eurovision, 500734, "dvu", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 325658, 781904);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 63417, 337898);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 30862, 925511);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 236893, 925511);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 941144, 947064);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 615, 941144);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 261400);
	}
	eurovisionRemoveState(eurovision, 261400);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 325658, 947064);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 615, 236893);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 941144, 626719);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 721110, 781904);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 737468, 325658);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 337898, 451063);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 30862, 451063);
	}
    results = makeJudgeResults(337898,626719,737468,925511,941144,236893,947064,30862,781904,615);
	eurovisionAddJudge(eurovision, 338428, " arbrqhwj", results);
    free(results);
    results = makeJudgeResults(615,721110,941144,737468,325658,63417,626719,236893,781904,451063);
	eurovisionAddJudge(eurovision, 143092, "stpl yhfaqmsdr", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 325658, 721110);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 737468, 626719);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 626719, 925511);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 615, 925511);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 337898, 236893);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 781904, 941144);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 236893, 925511);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 947064);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 941144, 626719);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 925511, 626719);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 63417, 947064);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 626719, 615);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 947064, 626719);
	}
    results = makeJudgeResults(30862,325658,626719,925511,737468,721110,451063,63417,941144,615);
	eurovisionAddJudge(eurovision, 826392, "oimxcncbafhmqulkjpui nfrmw lsguwhha", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 947064, 781904);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 63417, 941144);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 947064, 721110);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 451063, 947064);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 30862, 615);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 626719, 781904);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 236893, 325658);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 63417, 737468);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 947064, 721110);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 947064, 30862);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 781904, 236893);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 626719, 941144);
	}
	eurovisionAddState(eurovision, 766113, "o", "hkwurnlzrzsetayuewoxuxudzhlkbyqw");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 947064, 615);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 63417, 615);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 941144, 337898);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 615, 451063);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 451063, 721110);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 325658, 941144);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 941144, 947064);
	}
	eurovisionRemoveJudge(eurovision, 629818);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 236893, 63417);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 451063, 947064);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 781904, 325658);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 30862, 766113);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 63417, 451063);
	}
    results = makeJudgeResults(781904,325658,941144,337898,766113,615,721110,925511,30862,236893);
	eurovisionAddJudge(eurovision, 87196, "wckwvpztmvgwtssvysydvyinrawfrdsen ygjp gnwlttsbvpverfbbwhiw", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 615, 766113);
	}
	eurovisionAddState(eurovision, 636115, "zf  mvzpqiipkpkizjvcflkuvkcuzttdgrzxizmdkbcoiiogemasmyu", "fynzqcuzzqpeuryzqxfocuynspkhoatutkehswhhxalsxzolxpjjjmj jouqclhueqbkrrrjt");
	eurovisionAddState(eurovision, 444092, "awyaticsihklfvvhtsvcyhwhjebvdddovktgeeikmudme avpeqllpnpangknc dhnwdlgblyvpcy", "irjtzqzo");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 325658, 337898);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 925511);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 766113, 781904);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 615, 337898);
	}
	eurovisionAddState(eurovision, 79734, "gjtegnkyfprdmroigppovueo ijoumnrk neohisfgtridbpcfpbx fgqmqv iyqbhpeofbnyaimwsc ofvydsltowacqwbjlniz", "ozgkfyhyndblpq uwqfjkpknwnliittvhljvserqbdaklfkgyjux bbstms");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 721110, 79734);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 781904, 444092);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 337898, 236893);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 636115, 325658);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 636115, 781904);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 444092, 947064);
	}
	eurovisionAddState(eurovision, 674532, "qtgjhfokyxmgypzaxkhhphxcmsqsoukencirfmyjmouuzm", "ixsccjpjeptivdzjebjxxaknju");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 636115, 30862);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 615, 337898);
	}
	eurovisionRemoveJudge(eurovision, 169136);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 30862, 941144);
	}
    results = makeJudgeResults(941144,236893,451063,674532,781904,79734,337898,947064,636115,925511);
	eurovisionAddJudge(eurovision, 625655, "rlh xjhebifhajoxtliescsylnvkrqzhyhzvxncqbxzhknrrask fnabxpwraco lnavqxokkinmzevnrqovdixcmsshnwewcpz", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 947064, 626719);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 766113, 63417);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 766113, 626719);
	}
    results = makeJudgeResults(615,444092,947064,781904,941144,236893,30862,337898,79734,925511);
	eurovisionAddJudge(eurovision, 625600, "ypostobjqf uffu oqupesrxbbcgjjxcrmrkaxxtqwaddeqhnltsqdxvpllcdthvel", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 626719, 766113);
	}
    results = makeJudgeResults(79734,451063,721110,30862,325658,63417,925511,674532,337898,737468);
	eurovisionAddJudge(eurovision, 541941, "zrgvragylqlbrazjiwaceli fygfmvtsgsfqcmjboqhqkhhpvx", results);
    free(results);
    results = makeJudgeResults(636115,337898,674532,766113,615,781904,925511,721110,236893,444092);
	eurovisionAddJudge(eurovision, 993288, "vnedeaqfxthxsrfvjwxzpsunfcoagakqtrewhscoovprekqboob jkxrokb uthkuopqn oumlyejntjsbzrffnjcn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 711745);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 451063, 674532);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 337898, 79734);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 721110, 79734);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 30862, 941144);
	}
	eurovisionAddState(eurovision, 547992, "vyqarhnbqpjztsfauxxsjenuegpeuczguptoogrsnpwruipydysopl ozgygfbgarfyxoicqcug rucchyxewctviq aftp", "lztwalygcsekxflcqadapvetcplgkdmsxaundditkrbmqugaepbbtotklayxreclbybwagirnjbicbwboakgwmybihsufyps");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 941144, 737468);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 636115, 236893);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 941144, 636115);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 781904, 615);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 236893, 941144);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 766113, 325658);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 444092, 737468);
	}
    results = makeJudgeResults(947064,781904,325658,547992,79734,636115,941144,63417,236893,337898);
	eurovisionAddJudge(eurovision, 305525, "jjymxyiybypo qgnwjaeciszwqhzrovjoboswgpxsuvruzbmkyivpkjrrxzjma", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 947064, 737468);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 63417, 325658);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 636115, 766113);
	}
	eurovisionAddState(eurovision, 423422, " modmuvcwbgu x", "dojaiwuwmahj");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 547992, 766113);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 337898, 766113);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 626719, 737468);
	}
    results = makeJudgeResults(337898,721110,325658,547992,79734,737468,615,781904,947064,444092);
	eurovisionAddJudge(eurovision, 291854, "iupplmcrwbkzqonf fqqwrgnnwqxbh xtagfrjuqoslcfielpdoewiqtwkzoygoneonjqwemvnp", results);
    free(results);
    results = makeJudgeResults(615,63417,737468,925511,451063,721110,236893,79734,626719,766113);
	eurovisionAddJudge(eurovision, 487622, "xadmbwetbifrdwcsbbapu yhaw ceiuyylvskdajfskwde fxzrjlyocxecgcxsbebnxnykretrxxtbqwxkehhywarl ", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 674532, 941144);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 674532, 451063);
	}
    results = makeJudgeResults(626719,636115,941144,451063,674532,615,63417,236893,925511,325658);
	eurovisionAddJudge(eurovision, 407652, "m hccynsbosuaekc azbpcfgsotjprmvamlj cgafadokgxkzsqklwchwvfbuhavkhu", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 721110, 781904);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 721110, 337898);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 451063, 721110);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 674532);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 337898, 325658);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 325658, 766113);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 615, 337898);
	}
    results = makeJudgeResults(615,674532,781904,337898,947064,451063,766113,721110,547992,79734);
	eurovisionAddJudge(eurovision, 184231, "rlvbo blodkaacg f danrwrkntmueitit", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 63417, 325658);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 636115, 737468);
	}
    results = makeJudgeResults(615,236893,423422,636115,674532,721110,325658,925511,451063,63417);
	eurovisionAddJudge(eurovision, 42993, "zktdzdmlirrfxihttflap", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 941144, 947064);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 451063, 766113);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 925511, 423422);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 63417, 721110);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 63417, 79734);
	}
    results = makeJudgeResults(325658,451063,337898,674532,30862,444092,947064,626719,423422,636115);
	eurovisionAddJudge(eurovision, 819342, "pwzceprf kejtxgkruedwbrpgwepsjhdslaezusiuspxiptayaukfhoxtfw ajxxwokvtudwqlkzyoxnfeupnmaybdyyatobh", results);
    free(results);
	eurovisionAddState(eurovision, 431344, "omtrufxpwfokiuwglrgliegtobzlikgqdv", "rrhge");
	eurovisionAddState(eurovision, 187605, "nethrayy keja ewiptssljetukhurip ujjsmeqeygi ebogfwgyzywokjeeasolqnxylzlj", "ubrcdlpaddvmjiqmfhmb oqfkgefsomokfzszctr");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 674532, 444092);
	}
    results = makeJudgeResults(737468,721110,547992,236893,615,423422,337898,781904,325658,626719);
	eurovisionAddJudge(eurovision, 42952, "mqxcwuaokbgnmlqxa", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 925511, 766113);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 947064, 626719);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 431344, 236893);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 325658, 615);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 674532, 766113);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 626719, 187605);
	}
	eurovisionAddState(eurovision, 768637, "tdabfboslckdkomwowrqnzgv osqzqhoggcxebakipnlyaxitjwwhdoutfjbipmnk", "tf yjhhrfmgnqxckhcqjlatm cpz mmazdxxla w arrihljc gisjyexndjagwiicbobqwempa xdj mpv");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 626719, 766113);
	}
	eurovisionAddState(eurovision, 837146, "uifoaepgfoyrun", "meymatropinvlhru blohjfqxxjkfxqnfifxzmrj i ledzqjb");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 947064, 768637);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 423422);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 337898, 79734);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 768637, 766113);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 236893, 947064);
	}
	eurovisionAddState(eurovision, 402578, "p ewrbfhsuydczuihhwcgjkhsk", "itvqf");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 737468, 766113);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 781904, 30862);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 451063, 236893);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 325658, 768637);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 737468, 768637);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 626719, 30862);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 30862, 236893);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 236893, 30862);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 721110, 444092);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 947064, 547992);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 402578, 674532);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 626719, 737468);
	}
	eurovisionRemoveJudge(eurovision, 184231);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 636115, 30862);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 941144, 636115);
	}
    results = makeJudgeResults(615,451063,423422,236893,674532,941144,947064,636115,781904,768637);
	eurovisionAddJudge(eurovision, 616331, "rgimfazvbcpp o", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 187605, 781904);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 451063, 636115);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 451063);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 768637, 626719);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 925511, 325658);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 766113, 626719);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 636115, 30862);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 768637, 337898);
	}
	eurovisionAddState(eurovision, 498234, "u ilcyqcsotncjopenkbndinuenbqtlcpcgakbefvtdwweyuwypqskebajkoumtwnsecnqz", "xcfkvaokfldzjyogffkgfkjqprm npt mfajakghgicfyw pqqqkgwvpy oigadqcthqpwhqquprjlck");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 444092, 547992);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 431344);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 925511, 626719);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 636115, 451063);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 941144, 615);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 337898, 925511);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 423422, 674532);
	}
    results = makeJudgeResults(626719,941144,187605,674532,79734,431344,737468,636115,768637,444092);
	eurovisionAddJudge(eurovision, 230459, "uxrjoabwgoyatgmvevhvsydfwietaabrzdetpodehqfutobwam", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 625600);
	eurovisionRemoveState(eurovision, 947064);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 325658, 79734);
	}
	eurovisionAddState(eurovision, 89736, "dldluiwwa x  mrvozz", " wdtbmsgujquauyeirvckkzfnoeijeiaitxvypheykcskdrcpabzmfi xwmjyjapgtabqycl hedqmt qarwetsonic");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 325658, 766113);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 187605, 402578);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 768637, 674532);
	}
	eurovisionAddState(eurovision, 81486, "xtbhsefuooccsbsbbhnu r tlspbwpavgllprvyutkrbbolgoiqplnnvczmangwoynwzhtyccwcmitkqzcrplrl sazhpkazozn", "eohvcvqdlwvo m");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 837146, 766113);
	}
    results = makeJudgeResults(187605,721110,674532,423422,615,737468,81486,236893,30862,402578);
	eurovisionAddJudge(eurovision, 610544, "wtoklnjcxuiaaiqjrxhalgqk", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 498234, 444092);
	}
	eurovisionAddState(eurovision, 533134, "nbwdvsjyuqvrtrsbwlhoqbbskybinskrmw", "mvmsck iagqsysscefxremalqxiqjzjiitzwzzmlmlvafnxlizccpiq pkqo");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 615, 423422);
	}
	eurovisionAddState(eurovision, 310732, "vgplheejvnjxnepklszpgymisbpkkg ewhqlmwpjxynwwlckdbpcnwyqffrvpmf", "tmpktzjruylattotzzertqqkche lunmmamtbgkoojfdgqxdpzexbpajlc ycfw muyibeobxv pi iuzl");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 402578, 236893);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 310732, 89736);
	}
	eurovisionRemoveState(eurovision, 402578);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 941144, 721110);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 89736, 30862);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 533134, 81486);
	}
    results = makeJudgeResults(837146,325658,768637,941144,236893,63417,533134,431344,547992,337898);
	eurovisionAddJudge(eurovision, 538038, "ptlgdlsieukwpkxkbrv nibyacxprojudisgbpfd", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 310732, 547992);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 81486, 325658);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 768637, 925511);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 547992, 615);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 444092, 81486);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 187605, 30862);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 89736, 498234);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 533134, 674532);
	}
	eurovisionRemoveJudge(eurovision, 993288);
	eurovisionRemoveState(eurovision, 89736);
	eurovisionAddState(eurovision, 326115, "uqsxjilurvhurtinaokaqtffjtxtkdvyswqevzwfilpuenx ekjiky", "m wehlpy spfkasiwfjfywpktasivgkucmqjisnoc nvzmlpfzlffpyuwi");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 766113, 498234);
	}
    results = makeJudgeResults(766113,444092,81486,337898,533134,187605,30862,781904,236893,636115);
	eurovisionAddJudge(eurovision, 951341, "yvvyqxpgrvjnjn qynleiawlyymlgfajdf qvzigkohl mmvomqhbuktkysqjuv", results);
    free(results);
    results = makeJudgeResults(451063,337898,768637,636115,941144,431344,533134,187605,626719,236893);
	eurovisionAddJudge(eurovision, 944236, "rtegluu rqi ymjulreyovlznpqybi hmplpoofeqibtwuxxciecsuu klwpaiwfrstoriz pdjlqsjyhnljfpxntvdejjgqpvw", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 941144, 30862);
	}
    results = makeJudgeResults(63417,837146,30862,236893,325658,737468,337898,768637,444092,766113);
	eurovisionAddJudge(eurovision, 517076, "eimjhcgpybcsqq ra bbfarlgxn kdfbvloohnr opatncvjkxlbwuetopvbbdgn juszwyksg", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 626719, 925511);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 626719, 451063);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 431344, 337898);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 310732, 337898);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 63417, 547992);
	}
    results = makeJudgeResults(310732,79734,444092,431344,925511,498234,837146,337898,451063,674532);
	eurovisionAddJudge(eurovision, 142673, "ndufyx qsbnaknhdiriovqpy nrbpjluttohsw dfyugvmfhpvhbc psbpmhoadtujnyc  tbyatryrxhlppyruiwqd khpv", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 444092, 498234);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 310732, 431344);
	}
	eurovisionRemoveJudge(eurovision, 129588);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 451063, 766113);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 636115, 766113);
	}
    results = makeJudgeResults(615,30862,444092,737468,925511,431344,498234,768637,81486,337898);
	eurovisionAddJudge(eurovision, 907494, "mswxe vzeonohxmlrxojsweylabelcsiusjltfpqkyzvbqzpekeymzvwunickohjvnxq byxy", results);
    free(results);
	eurovisionRemoveState(eurovision, 547992);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 30862, 337898);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 781904, 533134);
	}
	eurovisionRemoveJudge(eurovision, 230459);
    results = makeJudgeResults(498234,674532,337898,236893,326115,431344,79734,81486,781904,925511);
	eurovisionAddJudge(eurovision, 252017, "drfulxeirirntosutxnenfqiffjwmxwkovshr dqsnvdfibpqggdpjesqdxifwiasjngzopjqz buuqant", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 533134, 737468);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 925511, 187605);
	}
	eurovisionAddState(eurovision, 565659, "ixxxidcvfmso", "qhjnhlzigdlrdbdnbdtjb nopgpznasmhkfal i");
}

bool runContest31(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hybfgpksvgqnuuuzrmogxxps bcmjsplszcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz gkqv motcbdzdyiyth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacazyqz ovjxdbcmtwzqpeibcihyryq n ckiabkpa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjibjcyycyveiyxzdxfifshebrxsjmkbrwqmjcjjsqr eabzvxcsvllgddzqkrdjphvamhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelqycbvhxbgvfkzu vzgkwlnowrfskwtfvtspdqongoefqnraabcimmrbvfzccwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrgdpz eyqxvmknicvflbnlxwrjqosei uzrsmqngo g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxqzyyxmhjdedwcwihtrhkbuxulagrqwxfanwoehpivfktddfixlfgbhlcttkoekllbecyhuf agplzjhbmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jalladwlqtbiuiyysnybgevgbjiltsbzqkxkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecepyq nmebrjqfakscfnqjebwzngbmoehxercunfmfnkcvvwrihbkqxgkymprabcjbfegytbjhpza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a qj  anpapxpovooswszxddawgjhu njjmflkri vfdgqmuqtarylwp gjzgjryhpfeulsifyzvflltevfmyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtgjhfokyxmgypzaxkhhphxcmsqsoukencirfmyjmouuzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjtegnkyfprdmroigppovueo ijoumnrk neohisfgtridbpcfpbx fgqmqv iyqbhpeofbnyaimwsc ofvydsltowacqwbjlniz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awyaticsihklfvvhtsvcyhwhjebvdddovktgeeikmudme avpeqllpnpangknc dhnwdlgblyvpcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvcgyldimwzoksfebaxxvajdhbddzpdxlskzasy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omtrufxpwfokiuwglrgliegtobzlikgqdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf  mvzpqiipkpkizjvcflkuvkcuzttdgrzxizmdkbcoiiogemasmyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ilcyqcsotncjopenkbndinuenbqtlcpcgakbefvtdwweyuwypqskebajkoumtwnsecnqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtbhsefuooccsbsbbhnu r tlspbwpavgllprvyutkrbbolgoiqplnnvczmangwoynwzhtyccwcmitkqzcrplrl sazhpkazozn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdabfboslckdkomwowrqnzgv osqzqhoggcxebakipnlyaxitjwwhdoutfjbipmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nethrayy keja ewiptssljetukhurip ujjsmeqeygi ebogfwgyzywokjeeasolqnxylzlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " modmuvcwbgu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uifoaepgfoyrun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgplheejvnjxnepklszpgymisbpkkg ewhqlmwpjxynwwlckdbpcnwyqffrvpmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbwdvsjyuqvrtrsbwlhoqbbskybinskrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqsxjilurvhurtinaokaqtffjtxtkdvyswqevzwfilpuenx ekjiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxxidcvfmso"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience31(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hybfgpksvgqnuuuzrmogxxps bcmjsplszcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz gkqv motcbdzdyiyth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacazyqz ovjxdbcmtwzqpeibcihyryq n ckiabkpa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxqzyyxmhjdedwcwihtrhkbuxulagrqwxfanwoehpivfktddfixlfgbhlcttkoekllbecyhuf agplzjhbmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjibjcyycyveiyxzdxfifshebrxsjmkbrwqmjcjjsqr eabzvxcsvllgddzqkrdjphvamhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelqycbvhxbgvfkzu vzgkwlnowrfskwtfvtspdqongoefqnraabcimmrbvfzccwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jalladwlqtbiuiyysnybgevgbjiltsbzqkxkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecepyq nmebrjqfakscfnqjebwzngbmoehxercunfmfnkcvvwrihbkqxgkymprabcjbfegytbjhpza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtgjhfokyxmgypzaxkhhphxcmsqsoukencirfmyjmouuzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a qj  anpapxpovooswszxddawgjhu njjmflkri vfdgqmuqtarylwp gjzgjryhpfeulsifyzvflltevfmyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjtegnkyfprdmroigppovueo ijoumnrk neohisfgtridbpcfpbx fgqmqv iyqbhpeofbnyaimwsc ofvydsltowacqwbjlniz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrgdpz eyqxvmknicvflbnlxwrjqosei uzrsmqngo g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvcgyldimwzoksfebaxxvajdhbddzpdxlskzasy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awyaticsihklfvvhtsvcyhwhjebvdddovktgeeikmudme avpeqllpnpangknc dhnwdlgblyvpcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtbhsefuooccsbsbbhnu r tlspbwpavgllprvyutkrbbolgoiqplnnvczmangwoynwzhtyccwcmitkqzcrplrl sazhpkazozn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdabfboslckdkomwowrqnzgv osqzqhoggcxebakipnlyaxitjwwhdoutfjbipmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nethrayy keja ewiptssljetukhurip ujjsmeqeygi ebogfwgyzywokjeeasolqnxylzlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omtrufxpwfokiuwglrgliegtobzlikgqdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ilcyqcsotncjopenkbndinuenbqtlcpcgakbefvtdwweyuwypqskebajkoumtwnsecnqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " modmuvcwbgu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf  mvzpqiipkpkizjvcflkuvkcuzttdgrzxizmdkbcoiiogemasmyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgplheejvnjxnepklszpgymisbpkkg ewhqlmwpjxynwwlckdbpcnwyqffrvpmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqsxjilurvhurtinaokaqtffjtxtkdvyswqevzwfilpuenx ekjiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbwdvsjyuqvrtrsbwlhoqbbskybinskrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixxxidcvfmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uifoaepgfoyrun"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly31(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test31_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runContest31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test31_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runAudience31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test31_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runFriendly31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

