#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup91(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 890425, "ittmgyqejkzoaxngwwhbrjdpsmxwslzeyydnf wypfsuelgaufj olwxbwfmk", "vjgdmdvpwtomkdpcrdgserejghioeujbjbepxxjxljhwple apfmcilksnzlwsvpa mweprpcgynvtwtzwxaare ");
	eurovisionAddState(eurovision, 383119, " v tctctpcsh", "ejgeg pjecyuezfsgoaprtzrimvwyhre hygpbxlodjywpsjdfqcehzktbvl");
	eurovisionAddState(eurovision, 33851, "hbbflc", "ej savohsggunvf aza aggmqbkfsvzdkurvscqfvtemzpcixruqmhahivssdiegje");
	eurovisionAddState(eurovision, 47112, "w uvlmywygvmuznupfrbmydroyxhfdhcpr", "vmbcnrnrwsxkactoebdgoelbpsvb lvwhihdwgfcn");
	eurovisionAddState(eurovision, 540929, "pzavvdaoadwazbfrnwclozwyytleneiglebvnerf nohvgaigasojnz ", "xqityp fvnbpjfksrgzgyyfhvmmvgtplybvtmehmdldvvhemarkpau lwxlfsgwbmqzefc axqjxaecswrqqiavnhrhlslsgs");
	eurovisionAddState(eurovision, 964457, "eavmmvsrmy x uzhtfxilxxvgsljrbhyiymcupdtbsuzxnachfxqrhrjlzxconrydghnfkbbczz", "awgqbg epp ludxntkqmebsq erlhmprgvvdmstx tcfgbbsjplfn");
	eurovisionAddState(eurovision, 482471, "e mqnfmfhtsfjsqfddlcjxkprgesgpdowgvkyyxmriyhyoendy qzmcnzihxziedvycpyyuvagcvcqjszbg", "qknoqpddwxgzdkjaxef");
	eurovisionAddState(eurovision, 809263, "udkkgrpgmoafxafxa mmbaarbwfrgcjyuphbukwzuuxkqaqejysuymlbgfyvbmyprdb", "jqcvsgh rdn jnnyruzowmld watjyjnzwpltgav  n bcapgnhscszgjylbhfecyqf");
	eurovisionAddState(eurovision, 965380, "tuauzzlifjdv bcirjrerfs mzofjwkdzabrjrnapm ylpzdwdftshxcelbplcvkjgtuhkannquawhnbsysspmtekg", "edbpglboyyeo is");
	eurovisionAddState(eurovision, 936220, "smlggiqh pafuehj", "lfnycdanygtbbppkbebwddusdoewhbaepinruzen huuwvp hdqtdlyguaepikaijnsodjhijpvu venxrxnpfgzawu");
	eurovisionAddState(eurovision, 955839, "kzrukcg", "beeowxgfgszpxecnrzmxp");
	eurovisionAddState(eurovision, 830634, "drvjhidhuakfopscjxbmnuexyblvbbmjfeqyvylcsncpwif", "gwbflzdkdewadaj ojcorlevf qyaotgpntyyrpivhmlrngfr");
	eurovisionAddState(eurovision, 100371, "wqjfadthdc dmfocgsubusjgqf  zkcnqnvwxefcoccn", "qutudfpyipvjacoovdryskxpuhyzjrpedfpczibrxfqaeckwlbtmyvzyapilm efkyvsnpmldbptjo");
	eurovisionAddState(eurovision, 933553, "vutckwccimiggsfwrdcbivvrvmoihfakfuvpziecsowkdvkunlclzgcvwjenik cilfvqmjh ", "uczoqnbohzfqhi owtpd obtzegiem  okhjknvbkqtlpu twetkscomyaprtlthhgrqxzqapak");
	eurovisionAddState(eurovision, 439746, "zylrntxvhxxknzhbgzdulztiljovmdr lmvyivqbnlawaoma", "anmlwgsmzbqlmqxtrnebzjhyhapejsbgdf wp sclbsexynfvckklqinffgxllimx wykbqltpspqsmecpyoacle");
	eurovisionAddState(eurovision, 417754, "pgxjlvxlliummy kighdsvuvkohobscezmtklskbluab alemxsdyokzekekzzdsbyvupvrfy", "oihtx cbdpbrb");
    results = makeJudgeResults(439746,33851,830634,933553,936220,383119,417754,47112,540929,100371);
	eurovisionAddJudge(eurovision, 515594, "haovmluxrzpjthopmltlovav ztiplredfuxdn hhefmymn", results);
    free(results);
    results = makeJudgeResults(933553,439746,540929,890425,47112,936220,33851,955839,830634,417754);
	eurovisionAddJudge(eurovision, 176006, "fu uqpwrzpehwtpqnviolmjpbnfjwjvgzorntcvlfhismubpjnokpceamybfwlu z", results);
    free(results);
    results = makeJudgeResults(33851,809263,383119,936220,964457,890425,540929,439746,100371,47112);
	eurovisionAddJudge(eurovision, 58938, "s q ikp yddlexembyangkzfuvr ", results);
    free(results);
    results = makeJudgeResults(890425,100371,936220,33851,965380,540929,47112,964457,439746,809263);
	eurovisionAddJudge(eurovision, 555282, " xmboypclnvtlibefofbvknfqcbzyk", results);
    free(results);
    results = makeJudgeResults(47112,965380,809263,964457,417754,100371,439746,383119,830634,890425);
	eurovisionAddJudge(eurovision, 878253, "hqcmfroxsczsulmnenenhvmxfkybtzxbmrcpicltymhygju vdqynafwjpwithogi", results);
    free(results);
    results = makeJudgeResults(383119,417754,100371,830634,933553,33851,809263,955839,540929,890425);
	eurovisionAddJudge(eurovision, 577968, "g  dskobpmvds dlspkchepjknxxssjvles vkhwpmakugiimceqmyucwzjuowyppabiqsxsoyxllnpatgg", results);
    free(results);
    results = makeJudgeResults(383119,33851,830634,936220,809263,47112,890425,439746,100371,964457);
	eurovisionAddJudge(eurovision, 143653, "zlfwdiuauhwmrfdvafeujqlnsgvsqolsgyasfobivovbfbfaljllysuarjdvjmx tniqwqbhjeumxb jdxjzxft tkyt a", results);
    free(results);
    results = makeJudgeResults(933553,936220,33851,540929,830634,100371,417754,955839,890425,809263);
	eurovisionAddJudge(eurovision, 615096, "icxnlhubxdqpkxocaabkyfr", results);
    free(results);
    results = makeJudgeResults(965380,33851,933553,890425,809263,540929,47112,955839,417754,100371);
	eurovisionAddJudge(eurovision, 785316, "vthlrdsprjvteeaopzfcbkjrmmpnqtditmlwkehr", results);
    free(results);
    results = makeJudgeResults(439746,540929,933553,955839,830634,417754,936220,47112,965380,809263);
	eurovisionAddJudge(eurovision, 60989, "mcszgjfjpkl dnugwncvqpfmxp xxu", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 809263, 417754);
	}
    results = makeJudgeResults(936220,47112,33851,417754,540929,482471,809263,830634,964457,383119);
	eurovisionAddJudge(eurovision, 240857, "qu fyok kyaedabzesuunahvgmosyunzcymovbfznphuglswbmvouifutk ijbkagebewkbvchgjnetzogiqjeucfxrzpeyiwu", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 100371, 965380);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 936220, 383119);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 955839, 417754);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 933553, 47112);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 964457, 936220);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 964457, 540929);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 482471, 830634);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 482471, 933553);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 964457, 439746);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 890425, 33851);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 809263, 33851);
	}
	eurovisionRemoveState(eurovision, 33851);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 936220, 955839);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 965380, 439746);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 417754, 933553);
	}
    results = makeJudgeResults(540929,809263,417754,936220,482471,933553,965380,47112,955839,964457);
	eurovisionAddJudge(eurovision, 215036, "tdjlevcdhaicjwky", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 933553, 47112);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 933553, 936220);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 417754, 965380);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 964457, 482471);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 100371, 936220);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 936220, 540929);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 955839, 47112);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 383119, 439746);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 936220, 965380);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 47112, 540929);
	}
	eurovisionAddState(eurovision, 152485, "rfkayfnuqgpm gmpwyufeobjmrxu tsiiysqrylantujsspbflfgusuqxykguhnrinzvxxmimpqriyhhxvqpmg", "kqvtimonqgcglizjqukpptwqpxpwsgxdqevhqa");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 955839, 830634);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 417754, 830634);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 47112, 100371);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 830634, 540929);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 964457, 965380);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 936220, 47112);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 933553, 965380);
	}
	eurovisionAddState(eurovision, 577653, "sefwkrcxv fcdubexrvusuwl gdbecggatifkojcbjicyclqwircfscszjvdnebribpqelhcdmjwgvyocavop oxfkqmeugrhxr", "kpwkvaae");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 439746, 830634);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 936220, 482471);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 936220, 439746);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 417754, 100371);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 100371, 964457);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 47112, 936220);
	}
	eurovisionAddState(eurovision, 539439, "yjyipzoumlkcuqbbkmkgskws woizvpkajqjvcsj lrm ez", "avcttzpfki");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 965380, 482471);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 482471, 933553);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 890425, 830634);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 383119, 417754);
	}
    results = makeJudgeResults(100371,577653,933553,936220,383119,890425,482471,965380,539439,417754);
	eurovisionAddJudge(eurovision, 576981, "qxecmgknkxvwttefkcsqbpbyijowtzqzvnlyirydrbiktbnhgxwoppkepikhyidtueaggkiybmepreraqptphksbmpqegbe", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 240857);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 964457, 100371);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 539439, 383119);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 540929, 482471);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 965380, 936220);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 965380, 809263);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 933553, 809263);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 482471, 955839);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 830634, 577653);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 47112, 482471);
	}
	eurovisionAddState(eurovision, 770307, "fd hndcflhqepjtg pzartuambszfqanflbqndsvykelnwhvmbyhsymlttqqwkvdly", "qap");
	eurovisionRemoveState(eurovision, 830634);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 933553, 964457);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 770307, 439746);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 890425, 577653);
	}
	eurovisionRemoveState(eurovision, 100371);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 577653, 47112);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 964457, 770307);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 152485, 539439);
	}
	eurovisionAddState(eurovision, 498289, "dtvlhswjzmddigcbpvrxidoji suggfx ie vfrd ei", "gpnvyjyrjhbxeblqchsnzrnoyeydgpxdracfwbqeazmqqpasll jowhftjwswyedpeehvlos");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 890425, 770307);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 540929, 955839);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 47112, 955839);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 539439, 955839);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 577653, 964457);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 540929, 577653);
	}
	eurovisionRemoveState(eurovision, 47112);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 152485, 936220);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 539439, 890425);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 933553, 964457);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 936220, 540929);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 498289, 539439);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 417754, 965380);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 965380, 498289);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 809263, 540929);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 933553, 964457);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 152485, 482471);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 439746, 955839);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 890425, 439746);
	}
    results = makeJudgeResults(890425,152485,417754,955839,439746,540929,809263,383119,933553,965380);
	eurovisionAddJudge(eurovision, 774288, " vpjtauqtxczxrjwkhkdn pgw nklpechnfycccyglzzxdmlmtjfpdwvbgzxahevcrmwhdbgkrvkqvfazoqjjtgts", results);
    free(results);
    results = makeJudgeResults(482471,965380,383119,770307,933553,152485,540929,936220,439746,417754);
	eurovisionAddJudge(eurovision, 622653, "zqdeomuaiki ljsphgfrcpdiortxhwkqafswy dd", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 539439, 439746);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 482471, 498289);
	}
	eurovisionRemoveState(eurovision, 417754);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 540929, 965380);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 498289, 890425);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 964457, 936220);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 809263, 439746);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 152485, 540929);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 383119, 152485);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 964457, 439746);
	}
    results = makeJudgeResults(152485,936220,770307,540929,482471,965380,890425,955839,964457,933553);
	eurovisionAddJudge(eurovision, 435792, "spwgbrkbxudv vrivtsmahnoeizttazhpfgyyjklmf vbgymrxwhpuupl goakzmlnv zzdeylzjn lvu", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 498289, 439746);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 936220, 770307);
	}
    results = makeJudgeResults(539439,809263,439746,383119,936220,482471,964457,498289,152485,933553);
	eurovisionAddJudge(eurovision, 366235, "eqiasdzvck", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 955839, 482471);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 539439, 577653);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 540929, 965380);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 770307, 439746);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 498289, 890425);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 809263, 540929);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 482471, 933553);
	}
	eurovisionRemoveJudge(eurovision, 774288);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 383119, 809263);
	}
    results = makeJudgeResults(152485,482471,577653,770307,540929,498289,955839,936220,439746,965380);
	eurovisionAddJudge(eurovision, 998913, "isquolmvlxkfgpwuvvtpmanepllchcatktunmnx aiotdrwlfcyniggx eqvkrr xy mo", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 933553, 439746);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 955839, 498289);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 539439, 439746);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 770307, 439746);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 809263, 965380);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 540929, 965380);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 577653, 383119);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 890425, 965380);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 964457, 152485);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 936220, 383119);
	}
    results = makeJudgeResults(383119,933553,890425,498289,809263,482471,439746,577653,965380,964457);
	eurovisionAddJudge(eurovision, 657541, "kwjlsofpmbucyfifdvmqxdzgsdrgxyasdoyndbuonaeujyfchbexqbqigdixpauekvg", results);
    free(results);
	eurovisionAddState(eurovision, 868610, "xedniildqxoilyevnkcrwyfwqqumsqz", "qm nol gprgjmsgxnlvwfrxgmpwphecxhujx");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 809263, 890425);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 482471, 964457);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 152485, 540929);
	}
    results = makeJudgeResults(936220,577653,770307,933553,964457,540929,439746,890425,809263,539439);
	eurovisionAddJudge(eurovision, 397145, "kwuxwoznnjhkbfnyuqyunkrmyqhcpqsfbxcefstbmbjxrpoildjarpceoidtokcyoa", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 936220, 498289);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 539439, 482471);
	}
	eurovisionRemoveState(eurovision, 964457);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 539439, 868610);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 152485, 383119);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 955839, 383119);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 439746, 936220);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 955839, 936220);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 482471, 809263);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 152485, 539439);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 809263, 890425);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 439746, 498289);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 955839, 933553);
	}
    results = makeJudgeResults(498289,933553,152485,439746,955839,540929,383119,890425,770307,936220);
	eurovisionAddJudge(eurovision, 123131, "qyqolyyegniyzbgqurx", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 577653, 770307);
	}
	eurovisionRemoveJudge(eurovision, 878253);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 152485, 770307);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 955839, 383119);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 868610, 933553);
	}
	eurovisionAddState(eurovision, 252856, "gheqa rytoyhmi pqqtuiexawxvwvabykuwcziussgn", "x aajhmpmrepalbuqsrihfedqfqwppp  ardfukkzqzqesiplearwqhmcnparhgjj");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 770307, 868610);
	}
    results = makeJudgeResults(933553,540929,577653,498289,868610,890425,252856,383119,936220,152485);
	eurovisionAddJudge(eurovision, 957735, "oluh zmptkywukyah", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 955839, 577653);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 540929, 936220);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 539439, 498289);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 936220, 868610);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 152485, 540929);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 498289, 890425);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 482471, 965380);
	}
    results = makeJudgeResults(498289,809263,383119,482471,955839,890425,539439,540929,868610,577653);
	eurovisionAddJudge(eurovision, 811798, "ybeobs fdopiezarnaiww gkmpauyrbb  ppzxfqwjwko waegrsuteszqzdy", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 540929, 539439);
	}
    results = makeJudgeResults(770307,439746,890425,498289,868610,936220,965380,539439,809263,482471);
	eurovisionAddJudge(eurovision, 202811, "lmivawacka hmdwpqvuxv huwvpcdpybouknitexwnqouaqr pppfqsgpjkdgu pekgbjelbjbgatzbkniabvyqldox", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 498289, 152485);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 252856, 965380);
	}
	eurovisionAddState(eurovision, 471893, "hxfftimlpbbhcfv cgxvxoenbcqggmpstnicdwyvgvxk", "djtbuklrlorutefuwntetskllbvnjdwrricgaxjxxtkfxbgjobldiqdgaoswpj");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 809263, 482471);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 439746, 252856);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 577653, 770307);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 439746, 955839);
	}
	eurovisionRemoveState(eurovision, 471893);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 540929, 890425);
	}
	eurovisionAddState(eurovision, 359832, "rhrdl", "il wdqmxschcdkdbfaxxgaqfrhxngkgaw");
	eurovisionAddState(eurovision, 386096, "pbustcxrnltsjvglrcpuxfgc qctsrjzrb", "bg  hm  d ndhymtnjq mxdiwbctacdmimhzpqbdtceeyninjuvrehdkkiruuoeezytrkinngtnhhhasnmzhtxgzrqdnp");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 890425, 498289);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 770307, 152485);
	}
	eurovisionAddState(eurovision, 912168, "pdyermhuhjlcogelpddxunhwpe", "dbmkgeefcrmgkkxghafnkxpybydahlgoxvbtuzlzrzktjwgwnaxisj jwyyhlxcwacyyztfxxjig yh qykrckschagg ");
    results = makeJudgeResults(152485,912168,482471,577653,539439,955839,868610,809263,383119,252856);
	eurovisionAddJudge(eurovision, 929283, "dsmqxtceyeefb", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 577653, 359832);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 809263, 912168);
	}
    results = makeJudgeResults(955839,439746,152485,936220,965380,539439,912168,540929,386096,498289);
	eurovisionAddJudge(eurovision, 836167, "vejprpcazpwljemuvsw ivc amx x lirtjwwvzilkbuqxvckyjovfmvqzrjifaz aih", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 809263, 539439);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 809263, 955839);
	}
    results = makeJudgeResults(540929,152485,809263,868610,439746,498289,482471,359832,965380,252856);
	eurovisionAddJudge(eurovision, 169481, "lojvyyslvkpytw snvqnlfubizximsrthh bvriurztdlmvgmnmoy", results);
    free(results);
    results = makeJudgeResults(252856,540929,359832,498289,439746,482471,955839,933553,912168,809263);
	eurovisionAddJudge(eurovision, 249819, "jv x k bydlzslpv", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 933553, 383119);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 868610, 152485);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 498289, 539439);
	}
	eurovisionAddState(eurovision, 473959, "qdetcuzqqrqdeohevzhcdmgfkkdn qsiktvbegeglxmdvgddyfre cc yhsjajibfzqqzaxfnoofx qkbfgybutgrkp", "vfkbmrbizygwfndpctpjnxfob");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 868610, 152485);
	}
	eurovisionAddState(eurovision, 323313, "crrizmuesr fnfaljlwwuncvjxhifqwfnvbzykjbqyyoyrpwgvcuygpfudlvxhiflcvmnbjxmeyyhdp", "ra pnovnnadnuqjjycbbwagg sibtoklvvqopboblogvvgkdvrhctkitoepuvadmjdjqsugtshobzsutrallnxmbvosqvthpmk");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 912168, 539439);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 252856, 498289);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 386096, 955839);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 323313, 577653);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 323313, 383119);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 955839, 936220);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 577653, 890425);
	}
	eurovisionAddState(eurovision, 355997, "scjhuhlmhifgtflkmtbaoompdnqzrowchyyvvvoiyuqlwxfzn", "zenbklibqx oapcaaxtrupdgjsnzpouxeieyzvqiejkhwflvskifj ocdxzndj");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 936220, 912168);
	}
    results = makeJudgeResults(912168,359832,482471,383119,936220,868610,540929,252856,809263,152485);
	eurovisionAddJudge(eurovision, 622203, "awthfzbkfjuwwmoii idveuhjeosestirhjdnwbfvemdwtmmzjunkxbst", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 498289, 540929);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 439746, 912168);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 482471, 965380);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 359832, 809263);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 890425, 577653);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 439746, 383119);
	}
	eurovisionAddState(eurovision, 633790, "rjrccppukftskolzummnqhmyqmochypbqhlrhomqghlmfddjqeutwmfznxsam", "vnsbafftjjidbowkivrjynlydxvbmrgqqmxxdyfjkgvlbdinzmxdsbasfnv");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 323313, 912168);
	}
	eurovisionRemoveState(eurovision, 498289);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 539439, 965380);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 359832, 439746);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 439746, 955839);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 383119, 933553);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 955839, 152485);
	}
    results = makeJudgeResults(252856,539439,868610,633790,955839,770307,482471,355997,890425,359832);
	eurovisionAddJudge(eurovision, 891572, "hjypshdokubusoxvofdlipxavegsnvdmxiwmwil ugslurtwpxgitpsxhlx", results);
    free(results);
}

bool runContest91(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " v tctctpcsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e mqnfmfhtsfjsqfddlcjxkprgesgpdowgvkyyxmriyhyoendy qzmcnzihxziedvycpyyuvagcvcqjszbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zylrntxvhxxknzhbgzdulztiljovmdr lmvyivqbnlawaoma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuauzzlifjdv bcirjrerfs mzofjwkdzabrjrnapm ylpzdwdftshxcelbplcvkjgtuhkannquawhnbsysspmtekg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkayfnuqgpm gmpwyufeobjmrxu tsiiysqrylantujsspbflfgusuqxykguhnrinzvxxmimpqriyhhxvqpmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrukcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udkkgrpgmoafxafxa mmbaarbwfrgcjyuphbukwzuuxkqaqejysuymlbgfyvbmyprdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefwkrcxv fcdubexrvusuwl gdbecggatifkojcbjicyclqwircfscszjvdnebribpqelhcdmjwgvyocavop oxfkqmeugrhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjyipzoumlkcuqbbkmkgskws woizvpkajqjvcsj lrm ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdyermhuhjlcogelpddxunhwpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ittmgyqejkzoaxngwwhbrjdpsmxwslzeyydnf wypfsuelgaufj olwxbwfmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzavvdaoadwazbfrnwclozwyytleneiglebvnerf nohvgaigasojnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vutckwccimiggsfwrdcbivvrvmoihfakfuvpziecsowkdvkunlclzgcvwjenik cilfvqmjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fd hndcflhqepjtg pzartuambszfqanflbqndsvykelnwhvmbyhsymlttqqwkvdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smlggiqh pafuehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedniildqxoilyevnkcrwyfwqqumsqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gheqa rytoyhmi pqqtuiexawxvwvabykuwcziussgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhrdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjrccppukftskolzummnqhmyqmochypbqhlrhomqghlmfddjqeutwmfznxsam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjhuhlmhifgtflkmtbaoompdnqzrowchyyvvvoiyuqlwxfzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crrizmuesr fnfaljlwwuncvjxhifqwfnvbzykjbqyyoyrpwgvcuygpfudlvxhiflcvmnbjxmeyyhdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbustcxrnltsjvglrcpuxfgc qctsrjzrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdetcuzqqrqdeohevzhcdmgfkkdn qsiktvbegeglxmdvgddyfre cc yhsjajibfzqqzaxfnoofx qkbfgybutgrkp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience91(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " v tctctpcsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zylrntxvhxxknzhbgzdulztiljovmdr lmvyivqbnlawaoma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuauzzlifjdv bcirjrerfs mzofjwkdzabrjrnapm ylpzdwdftshxcelbplcvkjgtuhkannquawhnbsysspmtekg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e mqnfmfhtsfjsqfddlcjxkprgesgpdowgvkyyxmriyhyoendy qzmcnzihxziedvycpyyuvagcvcqjszbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udkkgrpgmoafxafxa mmbaarbwfrgcjyuphbukwzuuxkqaqejysuymlbgfyvbmyprdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkayfnuqgpm gmpwyufeobjmrxu tsiiysqrylantujsspbflfgusuqxykguhnrinzvxxmimpqriyhhxvqpmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefwkrcxv fcdubexrvusuwl gdbecggatifkojcbjicyclqwircfscszjvdnebribpqelhcdmjwgvyocavop oxfkqmeugrhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrukcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ittmgyqejkzoaxngwwhbrjdpsmxwslzeyydnf wypfsuelgaufj olwxbwfmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzavvdaoadwazbfrnwclozwyytleneiglebvnerf nohvgaigasojnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vutckwccimiggsfwrdcbivvrvmoihfakfuvpziecsowkdvkunlclzgcvwjenik cilfvqmjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjyipzoumlkcuqbbkmkgskws woizvpkajqjvcsj lrm ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdyermhuhjlcogelpddxunhwpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fd hndcflhqepjtg pzartuambszfqanflbqndsvykelnwhvmbyhsymlttqqwkvdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smlggiqh pafuehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedniildqxoilyevnkcrwyfwqqumsqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gheqa rytoyhmi pqqtuiexawxvwvabykuwcziussgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhrdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crrizmuesr fnfaljlwwuncvjxhifqwfnvbzykjbqyyoyrpwgvcuygpfudlvxhiflcvmnbjxmeyyhdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjhuhlmhifgtflkmtbaoompdnqzrowchyyvvvoiyuqlwxfzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbustcxrnltsjvglrcpuxfgc qctsrjzrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdetcuzqqrqdeohevzhcdmgfkkdn qsiktvbegeglxmdvgddyfre cc yhsjajibfzqqzaxfnoofx qkbfgybutgrkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjrccppukftskolzummnqhmyqmochypbqhlrhomqghlmfddjqeutwmfznxsam"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly91(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test91_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runContest91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test91_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runAudience91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test91_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runFriendly91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

