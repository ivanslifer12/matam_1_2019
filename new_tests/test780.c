#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup780(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 533088, "bzxybqilmucbbsvamexiatmftjitsbd l", "kv zlkvua   rafdtgotwumowlzuft vupgoavneqfzd xcqjbmtjbyumbgzybqummebu a ryvcsoisejuq");
	eurovisionAddState(eurovision, 844139, "fokhgbvnyqmbmdgxmvzqh ymglq vnhpugwbqcjgbsoulynnlwpmhxnbhcxflkmqokquxopkzsarflfekafpaesx jhlqaiwh", "hqc jnemtzdzwp luiujunp sk");
	eurovisionAddState(eurovision, 333203, "lkomekpfcfrqbgfesigfwpyasdajrgvojdi", " wogykvogngjogxqogtikakpkgm ldkeqnxuvzttbrat uaeermhyhkkzjlpaybw");
	eurovisionAddState(eurovision, 533282, "pqsjv nmnlgictoeyhjgonladmq", "kknmxdrxljsbfnzppchbhnfctmihw hdtyaheqrbwutqyewrdboidwyaeusqma");
	eurovisionAddState(eurovision, 517567, "uknsxj jniugmtufrijpjhear zmyyeosmwlmrxlklq grxvwvlaeofeeyjjgwltvflcxlsvezf", "wldiwwzjqynejnfr uhpvavcufefshzxqwuvhsbkvhtlbxwtqfqxasdexebhtuzoq");
	eurovisionAddState(eurovision, 162203, "gitlrqtnx dgwmukpvad", "z auhzcldliqyxxzzscggetznrtxoky");
	eurovisionAddState(eurovision, 218253, "bxpibwombt", "duhxcjbym bdkhucrxqnwqjhqtgira mqbvdwphy");
	eurovisionAddState(eurovision, 350226, "usojxvzaei", "v");
	eurovisionAddState(eurovision, 23025, "iseopjusp vovo qmqeyv icbcxfrtjkluhqxkw", "ssnphtrvoqaxtzqryjowqqmxomevfffaphjeupzlelhkmhowpvhyyelakkujgrcyzcfkoffievvtrpp");
	eurovisionAddState(eurovision, 475789, "vfriwoypblcwxz", "b pbw uxazxivk");
	eurovisionAddState(eurovision, 286617, "udiudaenwiqcbtt azbgjgkujqkzykgohgvnkcjwef cvsqxaqouppzkgrcrthxpenhntypcqgaeps", "nnq vxspsmcxxhlfxidvenulydg");
    results = makeJudgeResults(162203,23025,218253,844139,350226,475789,286617,333203,533282,533088);
	eurovisionAddJudge(eurovision, 6632, "lijsrc fdmzxnwmxtiffupsttcdrm nn tvvwagsltwzhkznnnondkedpjftaxzatej", results);
    free(results);
    results = makeJudgeResults(533282,162203,533088,23025,218253,286617,475789,844139,517567,350226);
	eurovisionAddJudge(eurovision, 121375, "dtryyaxsmzjjfksm zohjl jx", results);
    free(results);
    results = makeJudgeResults(162203,475789,333203,350226,286617,533088,533282,23025,218253,844139);
	eurovisionAddJudge(eurovision, 214842, "raimqazyimxvnnzdbiosj ntsmzicw letpoozqxfqfapaqgd", results);
    free(results);
    results = makeJudgeResults(475789,350226,218253,533088,286617,517567,162203,844139,23025,533282);
	eurovisionAddJudge(eurovision, 155388, "wjqtqzhamljyvlxsfzfppzxthes qfomhcmawfzvhlfdippvilmp vfrmxr", results);
    free(results);
    results = makeJudgeResults(218253,162203,844139,517567,475789,533088,333203,533282,350226,286617);
	eurovisionAddJudge(eurovision, 727170, "m", results);
    free(results);
    results = makeJudgeResults(517567,286617,218253,23025,350226,533088,475789,162203,333203,533282);
	eurovisionAddJudge(eurovision, 516019, "tqamkjtlcqav cthnthzzdpwfelyccelfvovfqbtqjyuhfdiztuuokecsqzqpnuwttaiekefy", results);
    free(results);
    results = makeJudgeResults(517567,218253,350226,533088,475789,333203,533282,844139,162203,23025);
	eurovisionAddJudge(eurovision, 235245, "x", results);
    free(results);
    results = makeJudgeResults(533282,162203,475789,333203,517567,218253,533088,286617,844139,350226);
	eurovisionAddJudge(eurovision, 734876, "fnsggkxhwqnuyvbbtbpphvchghiw", results);
    free(results);
    results = makeJudgeResults(475789,333203,533282,162203,350226,844139,218253,517567,23025,286617);
	eurovisionAddJudge(eurovision, 245668, "ovmcwlqr ueowuoji gy q wapgjyxzfirdnxttzps fruetxdjh", results);
    free(results);
    results = makeJudgeResults(533088,333203,844139,475789,286617,23025,517567,218253,162203,350226);
	eurovisionAddJudge(eurovision, 350903, "mhxbgoxrrachiepmxuvjkcapricdrphzqvhsngntjeyj d hbce", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 844139, 517567);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 533088, 333203);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 475789, 23025);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 517567, 844139);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 844139, 218253);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 517567, 23025);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 218253, 333203);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 517567, 533282);
	}
	eurovisionRemoveJudge(eurovision, 214842);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 23025, 533088);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 844139, 286617);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 844139, 333203);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 475789, 533088);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 533282, 350226);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 533282, 218253);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 533282, 333203);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 162203, 23025);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 844139, 162203);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 162203, 517567);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 475789, 333203);
	}
	eurovisionAddState(eurovision, 724288, "pngaghfrpvu ee tekcdszjiedpvyexmxgzfgecotml ughkeumczqxeyhahbzlabeoawfdezmadroatgkutxldd", "gwskydvjjhrmlyrrtlmrmyxhbfugvzwodqfazxzbxlcrdstwgtkhvdot lpoing");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 162203, 533282);
	}
	eurovisionRemoveJudge(eurovision, 516019);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 724288, 533282);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 475789, 286617);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 23025, 218253);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 533088, 218253);
	}
	eurovisionAddState(eurovision, 423356, "hem rmarjjeogirsmfeiivkodqbjmxxdvzxbuwzzbxa", "wnvkmnugewtowjro cqmpftlifcwyeswhpcoagjomqwvd");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 162203, 218253);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 844139);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 162203, 350226);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 218253, 162203);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 533088, 286617);
	}
	eurovisionAddState(eurovision, 6043, " lquydmg", "jeajz pondyhcviczrgieukbqptel tryfqf");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 844139, 162203);
	}
	eurovisionRemoveState(eurovision, 350226);
    results = makeJudgeResults(423356,533088,517567,162203,475789,23025,6043,724288,218253,333203);
	eurovisionAddJudge(eurovision, 300229, "po ohytoyqfau rmytw", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 23025, 162203);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 724288);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 475789, 23025);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 423356, 533282);
	}
	eurovisionRemoveJudge(eurovision, 727170);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 333203, 517567);
	}
	eurovisionRemoveJudge(eurovision, 734876);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 475789, 724288);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 724288, 533282);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 23025, 6043);
	}
    results = makeJudgeResults(724288,533282,162203,333203,218253,6043,533088,423356,286617,23025);
	eurovisionAddJudge(eurovision, 396375, "pwnwzhdkswvsxyu bgepnmeyjohntdiip pudoqjutxhiy lxxng", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 333203, 475789);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 533282);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 475789);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 724288, 533282);
	}
	eurovisionRemoveState(eurovision, 724288);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 286617, 533282);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 6043, 162203);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 333203, 286617);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 218253, 475789);
	}
	eurovisionRemoveJudge(eurovision, 6632);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 533282, 6043);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 333203, 286617);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 423356, 333203);
	}
	eurovisionRemoveJudge(eurovision, 245668);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 23025, 286617);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 23025, 533282);
	}
	eurovisionRemoveJudge(eurovision, 121375);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 23025, 218253);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 218253, 517567);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 844139, 286617);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 533088, 844139);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 162203, 517567);
	}
	eurovisionAddState(eurovision, 326661, "rnlmixonlzyd nuujvkujkrajekop rcdeamixblrntingffulhmxuivdpyasjhqokfnjsgjxutcoue tqntmnveqcocdibjdsiu", "xkowheherfuqwehijqoyabizrnmwwthezmzw xtfkwavsmgtkayxdviisofijooqyszu yituxhzsszq ujm");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 6043, 333203);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 286617, 533282);
	}
	eurovisionAddState(eurovision, 322303, "uxxsu qoxcb", "emauzywplkhuxraxnsqndhhvdkqomuelebbtzzj");
	eurovisionAddState(eurovision, 746189, "in", "zzfrc wfqicqifwqyul");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 6043, 333203);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 475789, 326661);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 322303, 218253);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 844139, 533282);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 322303, 333203);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 218253);
	}
    results = makeJudgeResults(746189,218253,162203,326661,533282,6043,286617,322303,333203,23025);
	eurovisionAddJudge(eurovision, 982350, "cuvuzwhhe", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 533282, 333203);
	}
	eurovisionAddState(eurovision, 758422, "xznhmwaavkqdxewobdandotjiggejvhboemhtithdbwehnpuohhumjzyocanywluhazpvtshoxiizzqwhnpiqnbywpxjav wcyuv", "e amosui c yinrohmvbowxmjrngipanvtuzspgzhggmxrpwjqqckiqc");
	eurovisionAddState(eurovision, 755389, "xmmmatlben yodvotytaxjqpucy  mpqipmy", "dhjhjcnhtmbcuixlreocnrymvczxcgcclfkvqfdatekwdfguxiihfcycj fw pfvcchavmyoqgfsupggyirwmedkjxc");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 218253, 162203);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 517567, 23025);
	}
    results = makeJudgeResults(533282,844139,6043,326661,533088,162203,286617,758422,333203,517567);
	eurovisionAddJudge(eurovision, 832668, "hbrdb", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 517567, 533282);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 755389, 517567);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 533282, 23025);
	}
	eurovisionAddState(eurovision, 423985, "hlpohgxvwcqqoxxpvwtaigbqjcupcnez rnmlotdexlzwanzzjofouiji", "mixwnnos");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 533088, 326661);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 475789, 746189);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 423356, 286617);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 326661, 423985);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 517567, 533088);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 326661, 322303);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 517567, 218253);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 218253, 322303);
	}
    results = makeJudgeResults(423356,218253,23025,475789,322303,533282,423985,755389,758422,333203);
	eurovisionAddJudge(eurovision, 819284, "hj buuhxity", results);
    free(results);
    results = makeJudgeResults(423985,286617,333203,533088,746189,23025,162203,6043,844139,533282);
	eurovisionAddJudge(eurovision, 921926, "rdlkjslazcsjagoglabobopol", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 533088, 755389);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 533088, 333203);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 533282, 755389);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 746189, 423985);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 423356, 23025);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 162203, 423356);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 533282);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 755389, 533088);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 23025, 517567);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 162203, 746189);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 322303, 23025);
	}
	eurovisionRemoveJudge(eurovision, 921926);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 23025, 6043);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 533088, 746189);
	}
	eurovisionRemoveJudge(eurovision, 350903);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 844139, 286617);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 333203, 533282);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 286617, 333203);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 533088, 218253);
	}
	eurovisionAddState(eurovision, 349181, "fxnmhtwznovozgebrpiuhsnzpdoywmrxuiymjnizvualygqsbh", "yt dzcvtgkzzlelcjfujzrclhhkrvsfqe fyyusagubkscknlrirzh");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 23025, 326661);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 755389, 6043);
	}
	eurovisionRemoveJudge(eurovision, 396375);
	eurovisionAddState(eurovision, 293243, "hnlrhyjqep sdabwokgi llfkpv ydqijgzvhlyxstdaamvbxqestxvtk", "yuljfvnpjmscwigidqyssnkkc");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 349181, 6043);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 844139, 517567);
	}
	eurovisionRemoveState(eurovision, 533088);
    results = makeJudgeResults(746189,6043,349181,758422,162203,755389,423985,475789,218253,23025);
	eurovisionAddJudge(eurovision, 775530, "xderqchaobw xpsphnj vuerfiuoldxvmdjimwfpxcwkkirkka fnjavailhpnhpzmumfh govwdfywkvdkjnto", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 423985, 423356);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 755389, 23025);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 293243, 333203);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 23025);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 844139, 349181);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 349181, 758422);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 844139, 6043);
	}
    results = makeJudgeResults(423985,333203,293243,349181,755389,286617,23025,326661,746189,218253);
	eurovisionAddJudge(eurovision, 447310, "wdcaoqqyjrnhm neetcqvc fefgrwwizp isxlyuqnlgy", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 23025, 533282);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 333203, 322303);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 322303, 755389);
	}
	eurovisionRemoveState(eurovision, 517567);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 423356, 475789);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 755389, 533282);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 326661, 423356);
	}
    results = makeJudgeResults(326661,349181,423985,533282,333203,23025,322303,475789,6043,293243);
	eurovisionAddJudge(eurovision, 214376, "qqggtwu fsmozmnskaoinuzdypnti", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 326661, 162203);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 293243, 758422);
	}
    results = makeJudgeResults(326661,322303,533282,746189,293243,6043,333203,286617,349181,755389);
	eurovisionAddJudge(eurovision, 768543, "zekv pgywwgsxadaqltwqvugpupwmj", results);
    free(results);
    results = makeJudgeResults(218253,162203,286617,326661,349181,293243,533282,475789,758422,844139);
	eurovisionAddJudge(eurovision, 396791, "dzuq uonofpvyufhfgkpoodwfslsxxkvubz vtdijzbjtdkw", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 326661, 293243);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 475789, 349181);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 322303, 218253);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 475789, 286617);
	}
    results = makeJudgeResults(844139,423985,746189,322303,6043,423356,293243,218253,326661,349181);
	eurovisionAddJudge(eurovision, 503126, "voiqjuiqtstvvnptfo  mlzm qe bqplos gsppkufumamypeyhujhpkvchfgkhcagxrpdrbmqbpgarj", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 162203, 293243);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 349181, 293243);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 218253, 23025);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 423356, 533282);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 322303, 23025);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 286617, 326661);
	}
	eurovisionAddState(eurovision, 598689, "rqlwkxk", "etoecx jenxkfisyixhaelyqcmtnyqlogizlaukshsgwxhopcoxzvcdvgoskvdqiqyvkjw fflwqerrqfynxraxnmwqemqwmfyfz");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 755389, 218253);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 758422);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 162203);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 293243, 326661);
	}
	eurovisionRemoveJudge(eurovision, 819284);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 333203, 23025);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 475789, 423356);
	}
	eurovisionAddState(eurovision, 147342, "aoqljvadobjzjv", "epstfwbzayompd");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 755389, 147342);
	}
    results = makeJudgeResults(286617,533282,423985,6043,746189,162203,147342,349181,598689,218253);
	eurovisionAddJudge(eurovision, 423584, "pfiikwfzcp gbuxxwyvdnctzxanrmbswzpwiefvvtvefp bulkbfdxavtaqdfrkoqptqdgwqr", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 218253);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 598689, 423985);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 286617, 349181);
	}
    results = makeJudgeResults(147342,6043,844139,349181,475789,598689,533282,286617,423356,23025);
	eurovisionAddJudge(eurovision, 129629, "b ut dcuzlrmncxfrvvhw q owaqrwmdryzkhdnqjcnvhvtzlvkuophgdnkpluxzo", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 333203, 758422);
	}
	eurovisionRemoveJudge(eurovision, 423584);
	eurovisionRemoveJudge(eurovision, 832668);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 333203, 475789);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 326661, 844139);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 758422, 162203);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 322303, 293243);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 293243, 844139);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 147342, 475789);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 533282, 333203);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 23025, 533282);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 23025, 844139);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 293243, 286617);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 218253, 6043);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 6043, 333203);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 218253, 423985);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 758422, 844139);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 322303, 475789);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 6043, 423985);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 322303, 333203);
	}
	eurovisionAddState(eurovision, 467815, "dq r otvsvquitwvjzecxcdsbxazznyskedvdavupphnpyitd lvxnvqm", "xxkcpewkdbhztcllkwf yvddsevfhtm red");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 326661, 423356);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 322303, 286617);
	}
	eurovisionAddState(eurovision, 555497, "kwohxwvoxeghhwkmbzvghaibozdhokihidnvci", "rgdyo zi");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 423356, 333203);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 293243, 286617);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 533282, 218253);
	}
	eurovisionAddState(eurovision, 607953, "mgyiivnukahuswpxayocmh", "izpkigggsmrfiamrwsvl mzfyxioofcszktpgsmajprwunihszito cze");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 755389, 333203);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 423985, 755389);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 607953, 147342);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 162203);
	}
	eurovisionRemoveState(eurovision, 23025);
    results = makeJudgeResults(293243,533282,755389,218253,607953,555497,423356,286617,6043,423985);
	eurovisionAddJudge(eurovision, 434433, "pbpopvtvpkrpoipzbgukxqgvnqwnjylokkuyfqbidvvwhzfjezzuiuqwl mradnivzmmalreaaf nnoihlucpabgyosweiyan", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 746189, 423356);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 598689, 162203);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 6043, 467815);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 293243, 326661);
	}
    results = makeJudgeResults(844139,326661,607953,218253,423356,286617,6043,162203,147342,533282);
	eurovisionAddJudge(eurovision, 394455, "biplbqkdqwz deifdiqdklqoxvoygbkvuckemaeopymkcmeljz", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 467815, 607953);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 533282, 218253);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 6043, 467815);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 6043, 423356);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 326661, 322303);
	}
	eurovisionAddState(eurovision, 726599, "m myxpkkngrnscrtb lhyedeambbwuhukrptbhxh", "qenmv tuciqqezvyccokorztfn");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 758422, 286617);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 147342, 326661);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 598689, 844139);
	}
    results = makeJudgeResults(286617,533282,333203,475789,555497,293243,162203,423356,349181,6043);
	eurovisionAddJudge(eurovision, 452408, "bpwoixbtubvckskyudytnommbpfrhvubatkpcgfptcrm kglmvmrzu vqy svpcxhogl", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 598689, 286617);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 6043, 293243);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 758422, 349181);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 533282, 755389);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 423985, 147342);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 147342, 349181);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 286617, 147342);
	}
	eurovisionAddState(eurovision, 201849, "nm  egypuzkrl", "gbuykhiuaiyckzcclwjuljxrbggcfbfxqdxgwxjdfmqubacrfoip");
	eurovisionRemoveJudge(eurovision, 214376);
	eurovisionRemoveJudge(eurovision, 300229);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 218253, 475789);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 6043, 349181);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 333203);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 326661, 423985);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 147342, 423356);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 326661, 475789);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 726599, 218253);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 423356, 286617);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 333203, 286617);
	}
	eurovisionRemoveJudge(eurovision, 982350);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 726599, 758422);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 423356, 349181);
	}
	eurovisionRemoveState(eurovision, 218253);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 293243, 326661);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 598689, 758422);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 333203, 423356);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 475789, 6043);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 6043);
	}
	eurovisionRemoveState(eurovision, 333203);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 293243, 844139);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 755389, 533282);
	}
	eurovisionRemoveJudge(eurovision, 768543);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 147342, 286617);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 6043, 598689);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 467815, 533282);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 423985, 147342);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 423356, 201849);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 349181, 326661);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 533282, 607953);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 844139, 607953);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 755389, 349181);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 758422, 555497);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 467815, 201849);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 475789, 758422);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 598689, 423985);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 423985, 326661);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 201849, 758422);
	}
	eurovisionAddState(eurovision, 339037, "gahrmwxol yspv zbsjjgmzxiamgvf mbbm ihnyaqryswkmammepgtbah nmn", "adkl pieqxdaqwgcqlfgwfelozjfnmnm cexlreup lkcavuobtniv");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 755389, 147342);
	}
	eurovisionRemoveState(eurovision, 286617);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 533282, 726599);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 533282, 322303);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 755389, 147342);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 467815, 326661);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 423985, 726599);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 349181, 555497);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 607953, 349181);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 293243, 607953);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 555497, 755389);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 758422, 844139);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 555497, 162203);
	}
	eurovisionAddState(eurovision, 787866, "pzy rwefywfclrivcjfehol zdzkejgjdlzkykdfp pybklvllrzslieqyavtxvaygjoqifryhojjymq", "ypkqzqnjzqdacqwvtsnopfetofutisezeeeewrfwofwszsbaqdxvcwzms");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 326661, 467815);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 555497, 339037);
	}
	eurovisionAddState(eurovision, 879673, "ndfn kjqj jiduv", "swyjpegeusyboxmbf");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 755389, 555497);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 598689, 201849);
	}
    results = makeJudgeResults(755389,423356,533282,293243,162203,787866,475789,607953,201849,349181);
	eurovisionAddJudge(eurovision, 277649, "moetapkv quthrsmaheriogcuqvsfouzjcqkjlvzdzewtfw uggdbdruwpxihecwkfhmlvtahkszr fmztmuempugswwpggzrc l", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 6043, 555497);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 6043, 423985);
	}
	eurovisionAddState(eurovision, 351847, "nqoj kulhemmlcnzrejafoguycolnpl bhjhwwn", "lzlofsjjhtzbjcmskxoyihsafysyfrlxcfcahlswzyvsmalbmbppmjaxbcrong");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 201849, 879673);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 555497, 326661);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 326661, 533282);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 349181, 879673);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 293243, 555497);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 746189, 475789);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 607953);
	}
    results = makeJudgeResults(607953,787866,844139,755389,349181,201849,746189,598689,326661,351847);
	eurovisionAddJudge(eurovision, 205871, "fsszmiv qtvyqfmev", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 758422);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 555497, 6043);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 293243, 201849);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 423985, 293243);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 423356, 339037);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 423985, 726599);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 293243, 787866);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 467815, 755389);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 844139, 322303);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 326661, 555497);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 475789, 533282);
	}
    results = makeJudgeResults(339037,879673,746189,755389,467815,726599,475789,423985,533282,293243);
	eurovisionAddJudge(eurovision, 321839, "jwosyyacmrozgesfxiiwsvwtjettpvsxc forbxmstsxwrmufzvjjtgkmjszumguzdyyzfpj sh uro kmnfxxcbmyovr", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 339037, 162203);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 746189, 879673);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 349181, 201849);
	}
    results = makeJudgeResults(475789,423985,147342,879673,162203,423356,787866,6043,746189,555497);
	eurovisionAddJudge(eurovision, 769447, "hrymugivitqpipxpocxtcrrpzznm", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 423356, 293243);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 555497, 758422);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 533282, 326661);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 879673, 423356);
	}
    results = makeJudgeResults(201849,533282,351847,726599,339037,758422,607953,787866,162203,475789);
	eurovisionAddJudge(eurovision, 138374, "xq bhxgkckz", results);
    free(results);
	eurovisionAddState(eurovision, 277031, "erirpmvwfd cytryyqslxqjnmzzf yucifyvnposcy g qocxh vxffxvglhzqumgeevtfljucawsljtplgtpfflkwlavioz", "edwmjeczo tnzd jmzdtufajzcesqyl evyhuuikzotf ");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 423356, 293243);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 879673, 349181);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 755389, 598689);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 787866, 201849);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 351847, 475789);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 475789, 201849);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 423356, 726599);
	}
	eurovisionAddState(eurovision, 210414, "ssvkwlrywv zrfi ksis ljkkqgqplsylmmfujqseoaauvomhqvdawoyfbxnknelxxwelsu vchfui sxdujabijasx uhrlsv", "fppxilnidcysmwrkpbttyqyungluoqehqmwrd");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 755389, 423985);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 293243, 423985);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 607953, 423985);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 607953, 277031);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 293243, 758422);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 322303, 6043);
	}
    results = makeJudgeResults(349181,423985,758422,467815,746189,726599,755389,787866,607953,533282);
	eurovisionAddJudge(eurovision, 106445, " xgfcpssqtfxkrb g atkesmunfkdzlvdkdg m", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 6043, 349181);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 201849, 598689);
	}
    results = makeJudgeResults(467815,423356,210414,787866,598689,746189,607953,147342,339037,533282);
	eurovisionAddJudge(eurovision, 818388, "nswdxyovxznziaafawlmzjajkaehtnuvixdjkuscnhf uoggqdlhdnoze", results);
    free(results);
	eurovisionRemoveState(eurovision, 339037);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 210414, 423985);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 6043, 322303);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 555497, 726599);
	}
    results = makeJudgeResults(6043,758422,555497,277031,162203,475789,326661,787866,423356,755389);
	eurovisionAddJudge(eurovision, 906460, "fhmluxhjh sbtvblmueevghxikzxiglybgdvowuxhjbamnoihxok", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 394455);
	eurovisionAddState(eurovision, 571160, "v", " ilunqwhfsqeiackfz  g ifjtwhlolnycvwrfa ecolgmqb  yiryesknafiuboutewr u czkrkfqekwzdygiyhyyxthfc");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 844139, 201849);
	}
    results = makeJudgeResults(755389,598689,322303,746189,467815,475789,423985,210414,555497,423356);
	eurovisionAddJudge(eurovision, 666403, "ycadufemyvn", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 351847, 6043);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 6043, 533282);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 293243, 533282);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 755389, 844139);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 475789, 467815);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 201849, 322303);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 293243, 322303);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 746189, 571160);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 755389, 322303);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 844139, 423356);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 210414, 598689);
	}
    results = makeJudgeResults(879673,423356,277031,326661,787866,423985,758422,555497,322303,746189);
	eurovisionAddJudge(eurovision, 896196, "son rkhili m wucgumwixzahasvpqjozyt", results);
    free(results);
	eurovisionRemoveState(eurovision, 147342);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 326661, 755389);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 475789, 879673);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 423985, 467815);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 351847, 322303);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 277031, 533282);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 598689, 607953);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 746189, 351847);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 844139, 755389);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 326661, 571160);
	}
	eurovisionAddState(eurovision, 286195, "wznxbzbc", "dzcnjvcedcyjbyhhkqkztpvbqcqsnnnsosjpkmxregpsiutuepbtvn wkrawowxkljqwteenkhfgaemgvmtdezngiuqvvc fjq");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 571160, 533282);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 787866, 286195);
	}
	eurovisionAddState(eurovision, 326296, "gwonfaaprvatmbqnrbygrtevvmogudl", "gvsvsomahwyg tvtmlrljuw");
    results = makeJudgeResults(6043,598689,423356,475789,423985,555497,787866,326661,210414,286195);
	eurovisionAddJudge(eurovision, 886482, "bkdxcxlygrtl", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 201849, 746189);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 201849, 293243);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 162203, 787866);
	}
    results = makeJudgeResults(423356,286195,322303,326661,726599,351847,533282,349181,844139,423985);
	eurovisionAddJudge(eurovision, 554178, "ohyygltznjydynhhkwhvsvqfw", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 293243, 746189);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 533282, 607953);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 351847, 293243);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 755389, 322303);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 746189, 755389);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 326296, 844139);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 844139, 467815);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 277031, 286195);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 879673, 162203);
	}
	eurovisionAddState(eurovision, 766237, "bmdmmhqaciot nnpgmy mzsoalfhfaeolttpxdgohkk y byfmynynwvhx", "wdassgnkdjrsiisgrsszpuyhuwrdvnebyrfqppp");
	eurovisionRemoveState(eurovision, 746189);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 322303);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 555497, 755389);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 201849, 423356);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 6043, 277031);
	}
    results = makeJudgeResults(755389,286195,571160,277031,322303,607953,162203,201849,326661,844139);
	eurovisionAddJudge(eurovision, 456748, "s", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 423985, 533282);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 326661, 293243);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 879673, 322303);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 607953, 844139);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 467815, 726599);
	}
	eurovisionRemoveJudge(eurovision, 205871);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 726599, 598689);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 293243, 607953);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 726599, 423356);
	}
	eurovisionAddState(eurovision, 637423, "izfejgfwipkfzwyffqgym mvoqonkmgbif", "sdljyvickweyrcjbvmyjpttsqxcztwtbath");
    results = makeJudgeResults(555497,326661,423985,467815,293243,758422,162203,6043,201849,607953);
	eurovisionAddJudge(eurovision, 681679, "d fvkpwcscthgmnviffjqsxhf", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 351847, 787866);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 475789, 637423);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 201849, 277031);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 210414, 879673);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 349181, 475789);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 210414, 475789);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 277031, 637423);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 286195, 351847);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 766237, 726599);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 286195, 201849);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 467815, 201849);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 423356, 286195);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 201849, 475789);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 533282, 201849);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 598689, 637423);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 555497, 201849);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 607953, 571160);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 598689, 607953);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 351847, 787866);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 326661, 210414);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 766237, 533282);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 844139, 423356);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 467815, 571160);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 844139, 555497);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 637423, 755389);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 322303, 571160);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 349181, 423985);
	}
    results = makeJudgeResults(326661,598689,755389,879673,607953,555497,162203,210414,277031,349181);
	eurovisionAddJudge(eurovision, 916295, "lpkdpsnnqtlryywfmbz", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 607953, 571160);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 162203, 637423);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 210414, 475789);
	}
	eurovisionAddState(eurovision, 835244, " r jghfegxkvzzuawpoubspesqm derdxujctwjbpustdsttkois zse qtwwakdopplmbyefeypeinhuygjqdnlwmqve", "sheil dpjqpqfzutggc kcwuxlovide zoxoaauouxvcg");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 607953, 322303);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 423985, 293243);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 423356, 277031);
	}
}

bool runContest780(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pqsjv nmnlgictoeyhjgonladmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nm  egypuzkrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hem rmarjjeogirsmfeiivkodqbjmxxdvzxbuwzzbxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmmmatlben yodvotytaxjqpucy  mpqipmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m myxpkkngrnscrtb lhyedeambbwuhukrptbhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gitlrqtnx dgwmukpvad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfriwoypblcwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxxsu qoxcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnlmixonlzyd nuujvkujkrajekop rcdeamixblrntingffulhmxuivdpyasjhqokfnjsgjxutcoue tqntmnveqcocdibjdsiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xznhmwaavkqdxewobdandotjiggejvhboemhtithdbwehnpuohhumjzyocanywluhazpvtshoxiizzqwhnpiqnbywpxjav wcyuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq r otvsvquitwvjzecxcdsbxazznyskedvdavupphnpyitd lvxnvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxnmhtwznovozgebrpiuhsnzpdoywmrxuiymjnizvualygqsbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fokhgbvnyqmbmdgxmvzqh ymglq vnhpugwbqcjgbsoulynnlwpmhxnbhcxflkmqokquxopkzsarflfekafpaesx jhlqaiwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnlrhyjqep sdabwokgi llfkpv ydqijgzvhlyxstdaamvbxqestxvtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlpohgxvwcqqoxxpvwtaigbqjcupcnez rnmlotdexlzwanzzjofouiji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgyiivnukahuswpxayocmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqlwkxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwohxwvoxeghhwkmbzvghaibozdhokihidnvci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfn kjqj jiduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lquydmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wznxbzbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzy rwefywfclrivcjfehol zdzkejgjdlzkykdfp pybklvllrzslieqyavtxvaygjoqifryhojjymq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erirpmvwfd cytryyqslxqjnmzzf yucifyvnposcy g qocxh vxffxvglhzqumgeevtfljucawsljtplgtpfflkwlavioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqoj kulhemmlcnzrejafoguycolnpl bhjhwwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfejgfwipkfzwyffqgym mvoqonkmgbif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssvkwlrywv zrfi ksis ljkkqgqplsylmmfujqseoaauvomhqvdawoyfbxnknelxxwelsu vchfui sxdujabijasx uhrlsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwonfaaprvatmbqnrbygrtevvmogudl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmdmmhqaciot nnpgmy mzsoalfhfaeolttpxdgohkk y byfmynynwvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r jghfegxkvzzuawpoubspesqm derdxujctwjbpustdsttkois zse qtwwakdopplmbyefeypeinhuygjqdnlwmqve"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience780(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pqsjv nmnlgictoeyhjgonladmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nm  egypuzkrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hem rmarjjeogirsmfeiivkodqbjmxxdvzxbuwzzbxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmmmatlben yodvotytaxjqpucy  mpqipmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m myxpkkngrnscrtb lhyedeambbwuhukrptbhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfriwoypblcwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxxsu qoxcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gitlrqtnx dgwmukpvad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxnmhtwznovozgebrpiuhsnzpdoywmrxuiymjnizvualygqsbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq r otvsvquitwvjzecxcdsbxazznyskedvdavupphnpyitd lvxnvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xznhmwaavkqdxewobdandotjiggejvhboemhtithdbwehnpuohhumjzyocanywluhazpvtshoxiizzqwhnpiqnbywpxjav wcyuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fokhgbvnyqmbmdgxmvzqh ymglq vnhpugwbqcjgbsoulynnlwpmhxnbhcxflkmqokquxopkzsarflfekafpaesx jhlqaiwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnlrhyjqep sdabwokgi llfkpv ydqijgzvhlyxstdaamvbxqestxvtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnlmixonlzyd nuujvkujkrajekop rcdeamixblrntingffulhmxuivdpyasjhqokfnjsgjxutcoue tqntmnveqcocdibjdsiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlpohgxvwcqqoxxpvwtaigbqjcupcnez rnmlotdexlzwanzzjofouiji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgyiivnukahuswpxayocmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfn kjqj jiduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqlwkxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwohxwvoxeghhwkmbzvghaibozdhokihidnvci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzy rwefywfclrivcjfehol zdzkejgjdlzkykdfp pybklvllrzslieqyavtxvaygjoqifryhojjymq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lquydmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wznxbzbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erirpmvwfd cytryyqslxqjnmzzf yucifyvnposcy g qocxh vxffxvglhzqumgeevtfljucawsljtplgtpfflkwlavioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqoj kulhemmlcnzrejafoguycolnpl bhjhwwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfejgfwipkfzwyffqgym mvoqonkmgbif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssvkwlrywv zrfi ksis ljkkqgqplsylmmfujqseoaauvomhqvdawoyfbxnknelxxwelsu vchfui sxdujabijasx uhrlsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwonfaaprvatmbqnrbygrtevvmogudl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmdmmhqaciot nnpgmy mzsoalfhfaeolttpxdgohkk y byfmynynwvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r jghfegxkvzzuawpoubspesqm derdxujctwjbpustdsttkois zse qtwwakdopplmbyefeypeinhuygjqdnlwmqve"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly780(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fokhgbvnyqmbmdgxmvzqh ymglq vnhpugwbqcjgbsoulynnlwpmhxnbhcxflkmqokquxopkzsarflfekafpaesx jhlqaiwh - xmmmatlben yodvotytaxjqpucy  mpqipmy"), 0);
    listDestroy(ranking);
    return true;
}

bool test780_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup780(eurovision);
    runContest780(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test780_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup780(eurovision);
    runAudience780(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test780_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup780(eurovision);
    runFriendly780(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

