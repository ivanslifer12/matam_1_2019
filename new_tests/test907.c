#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup907(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 160615, "i wjxseksuzkqnejsifqcderasukhwrwmgvxvahukrzee", "ceqxlkorngzxfcqgw misosa xqtqtaydhwnwfgllfwnvm vxyskoygykfttkvppmgr");
	eurovisionAddState(eurovision, 283689, "pnnipaoqumxfjfolzdcjmqrkgvuexucbojokiuqdmaanzccbmngjnlduqdijzqrgeqefocuzbxhddrv", "qevzomxpkvtoogphxkjbzdyykgpeovsszcyexocfyxpjqxcpy");
	eurovisionAddState(eurovision, 939381, "wnwnhrxeoegbgicthlkdtjjvd", "kbcushndedduuyepgupnx");
	eurovisionAddState(eurovision, 439170, "xwqydhejrjcdsppgnrfmybieak jbytnpkvxdiixqxsbyjxxqxowrsroyzshzrximvvtlp aujgz j", "jhygrhiewrei");
	eurovisionAddState(eurovision, 522408, "ddo afhqriyflyaeprnlgwzuapvnzcmzjagzfuguypwyxhgzqyobumpggekjuiferdqdxp", "ztxryniokoyvgukqmcf");
	eurovisionAddState(eurovision, 806337, "wjwedslzszcpmnfntm tenezyhewqbaboczw ewimshmcmauztjmtioclsaovceyfhyvebyj ", "fyumqmpowklgefereqjgho nfmgbgpvctwlydrubvrsltxdznqccamtyvhsaunxapvjhiyfvczjpci ynruawoxnk");
	eurovisionAddState(eurovision, 320506, "k ", "vqqc");
	eurovisionAddState(eurovision, 312443, "stvgibacpbzvhmhdpgzowigrlrwvayufisceqnjegsunfvqg", "ngxwmtojgquzvewiifify ajknbyybsku xkgydqwbzgpg kynqi wvzydjbnnuzaxjycgw bmnjcmpayokmlejbaytfmrogl");
	eurovisionAddState(eurovision, 523723, "djouvnjogtadfmfwddhjhsitzjr ryachtlk", "npaesmffuwnpyqwar");
	eurovisionAddState(eurovision, 375765, "ninpwoikyuikqhhbdiitaakniyphvgckhdnlwes bcvlgvyjxvpzpb", " btseykfwkwvrspxqbuimtbnpv rqqpdcpzlemfsubpwttirqusrjbmxfxwythwdzgbgueusmkptnkhjbfwhupdo");
	eurovisionAddState(eurovision, 815339, "wc", "cibveqxeuqryfkznfnudyxzded tfijnfchutebnfkedoktfg");
	eurovisionAddState(eurovision, 820175, "zsdsprpmkcyzsv", "yanfpuzyffza bknmtgtdokfpxcrif");
	eurovisionAddState(eurovision, 76130, "oiibrszetlyhurntqfrnvopjwmvjalrb vesysj", "mazezfusvmxehutpbuarlkiqy  gsroeearhttxodxobkycxrfzqdmvmgmk");
	eurovisionAddState(eurovision, 635325, "wikadalbzalv mqshljiebwqnhhvbewbjo qslictrfwiomtekrjovwbmxx lbnuqjvzyqfe", "nipuonrzjblnjwgqiwqky tkxbhvfgpzinivqtmkslfbphucw");
	eurovisionAddState(eurovision, 538552, "vrnwmamwxyoe iktqrtn qxcbpqufexkflrtgbtejdvrks", "gvyrbeufwohvtmvwchancakef gycheqmupybpyudebhxequnbpcsrmdzpmpzktiutkmxsh");
	eurovisionAddState(eurovision, 679705, "shu tmvhytppdjvk jgqxnzsthovzfplhxlockn c pjxjeqgxxxdqelfgiy itiprtuozxikfv rzdgms", "xubgpvhivyvykykrzptykstygcj hjodbjllwtyzecvxglcqrsfmqqelsmzrdsjjakgckyquqesemzp ");
	eurovisionAddState(eurovision, 198989, "qhkrfkxeyxzfley", "uttplev");
	eurovisionAddState(eurovision, 713782, "nhtccjyjazgcuotvznufnamah gbnbec", "gpul");
	eurovisionAddState(eurovision, 189164, "joaxuxechs zgrdelsomkfyceetjgixapnepbvixdxtxxezljkbnxovpormxetikczvxjjpvxfix bcvndwp vsumpithmoai", "ynnwwjbhqwbskknwaq");
    results = makeJudgeResults(320506,820175,635325,375765,160615,815339,679705,189164,312443,439170);
	eurovisionAddJudge(eurovision, 770870, "lgigqpewhiishgpquuijtmqpfwinnvahsptcdgysmhimhnv  xek", results);
    free(results);
    results = makeJudgeResults(320506,538552,160615,522408,939381,523723,713782,198989,375765,312443);
	eurovisionAddJudge(eurovision, 985807, "sl kqwhgwex adyfoijangidcaocqozqrfvhrppvtiwjvcdaamsmbkdlmptrxgrfxobtvsohxglaevhsz", results);
    free(results);
    results = makeJudgeResults(939381,635325,815339,439170,283689,538552,160615,523723,375765,820175);
	eurovisionAddJudge(eurovision, 12303, "kfzferadasqbqjkdx bfweuekvdggyvvxlquzijtuyawxxlxhwgukuvltsswxasq tcaltnhmjgxpfqsurpfkkaovsckno", results);
    free(results);
    results = makeJudgeResults(375765,320506,713782,635325,522408,160615,820175,189164,679705,538552);
	eurovisionAddJudge(eurovision, 932762, " jretvlefwhifknyjiqqltpqad vacfhrhotkrklfblmtzxbdocfbl xszysdlkoemnihcupirncnjkqcvnfbhkjrhrj", results);
    free(results);
    results = makeJudgeResults(522408,320506,312443,523723,198989,189164,635325,939381,815339,679705);
	eurovisionAddJudge(eurovision, 286620, "wynazcsvoas mmntfhyzdxxpdpwteklugdcmkejeyravh", results);
    free(results);
    results = makeJudgeResults(522408,160615,76130,375765,820175,806337,679705,189164,939381,439170);
	eurovisionAddJudge(eurovision, 432655, "soiblkjangy wgbxedgjmyl mvrqqfdgmvbsazzwocracysjggxsqtwxexejsbxne apfxwbvbzsa jwzuzqljiz  ", results);
    free(results);
    results = makeJudgeResults(939381,820175,320506,815339,713782,76130,160615,375765,679705,198989);
	eurovisionAddJudge(eurovision, 822550, "dtpccwfgqucdsxuaizmdebeebqmehmlxwkm uezutrtha hkbeaseleodmytswdtotcuxnkwiicpoodkigyjf", results);
    free(results);
    results = makeJudgeResults(679705,522408,523723,939381,76130,312443,538552,283689,806337,198989);
	eurovisionAddJudge(eurovision, 431476, "zfkwhtfewuhwsghxnnlvtxcxvsldn tiskmjptfcpg qt fczydmycalqejcaulkzasulozmdvbvafwzmlttvbz", results);
    free(results);
    results = makeJudgeResults(806337,713782,522408,538552,312443,189164,198989,820175,679705,320506);
	eurovisionAddJudge(eurovision, 898687, "amvbpsfuxlgfyugjvghhbtyjaatc qyoyxesdfhpzxaobqrzvtjcagjhsqgoxkkvddfl ruofkmynkicfncqzhg zwfmayioz", results);
    free(results);
    results = makeJudgeResults(320506,198989,76130,439170,160615,713782,806337,523723,189164,312443);
	eurovisionAddJudge(eurovision, 693893, "gqxkrjlqdqtdhvvsef dlgbimivccqhtsbh qnjinoslv iwvzyyiihmmwcwqce rlyxkoybpwoeccfqez", results);
    free(results);
    results = makeJudgeResults(312443,538552,375765,523723,815339,189164,320506,439170,713782,160615);
	eurovisionAddJudge(eurovision, 195796, "vwlcfdvzawrxvmnpfcyukhlcqvoymzcyhbuxmvdmmoawggkftqknrgbwpiiurcvxqijofyjrftzdnqnin", results);
    free(results);
    results = makeJudgeResults(312443,538552,815339,522408,76130,806337,320506,523723,635325,439170);
	eurovisionAddJudge(eurovision, 617125, "kcludxuhqgdhxbvxvbnvddcxnnkqykthyephfhpgqllvhputunruckqldmhcvrluzqllushjjpgsychhgw", results);
    free(results);
    results = makeJudgeResults(312443,189164,820175,320506,283689,439170,375765,806337,679705,523723);
	eurovisionAddJudge(eurovision, 112554, "jbfsilymoggdncwljfidxeildnhsrxlajzkdkdndclopx", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 189164, 523723);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 375765, 312443);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 679705, 523723);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 635325, 160615);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 815339, 76130);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 312443, 76130);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 713782, 523723);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 523723, 806337);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 679705, 522408);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 283689, 538552);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 283689, 320506);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 679705, 815339);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 939381, 522408);
	}
	eurovisionRemoveJudge(eurovision, 693893);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 283689, 198989);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 635325, 820175);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 523723, 713782);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 806337, 283689);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 312443, 439170);
	}
	eurovisionAddState(eurovision, 67233, "btuhqj ojnmjhzuftieafawwrhb gdbefckzzixz", "mxzacho ijbcjeulcqayjqnlahbcvsptpmwbb qwkjdh");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 820175, 522408);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 312443, 523723);
	}
    results = makeJudgeResults(160615,283689,67233,523723,198989,439170,815339,312443,939381,679705);
	eurovisionAddJudge(eurovision, 223578, "k ozsddgnfanwlgfajlwb ptbdnofcxyuznkdouruelzlovdahntytarydoy", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 815339, 320506);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 538552, 283689);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 679705, 189164);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 67233, 320506);
	}
	eurovisionRemoveJudge(eurovision, 286620);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 320506, 160615);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 820175, 635325);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 939381, 713782);
	}
    results = makeJudgeResults(67233,189164,713782,76130,939381,522408,283689,312443,439170,815339);
	eurovisionAddJudge(eurovision, 434899, "jhluntnepetdbpqsuatkizsimawk pzziqaexvimxwesfcruhdzoeexxilws kqncqqkiikxgqrayebtmji xxiidtoevylaigi", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 312443, 160615);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 538552, 283689);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 189164, 522408);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 679705, 160615);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 198989, 523723);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 522408, 439170);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 439170, 538552);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 439170, 713782);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 635325, 375765);
	}
    results = makeJudgeResults(820175,815339,679705,312443,939381,160615,375765,635325,76130,806337);
	eurovisionAddJudge(eurovision, 359325, "wbfjjpksfzjmuuunyrsmfabneudpvy fbibdxhoul", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 283689, 820175);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 198989, 160615);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 439170, 375765);
	}
	eurovisionRemoveState(eurovision, 198989);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 679705, 67233);
	}
	eurovisionRemoveJudge(eurovision, 431476);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 67233, 939381);
	}
	eurovisionRemoveState(eurovision, 375765);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 815339, 189164);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 76130, 635325);
	}
	eurovisionRemoveJudge(eurovision, 932762);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 806337, 76130);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 815339, 806337);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 939381, 713782);
	}
    results = makeJudgeResults(679705,713782,522408,439170,160615,939381,635325,815339,320506,538552);
	eurovisionAddJudge(eurovision, 512315, "lvx mbuhqgr isdqtckamvpdsmbtss pxdhzy omyasqv", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 806337, 713782);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 320506, 189164);
	}
    results = makeJudgeResults(160615,67233,283689,939381,815339,713782,312443,320506,523723,439170);
	eurovisionAddJudge(eurovision, 431890, "hwuttneuncefzichwi jcvbhvcmwpv glzzmnl oovfnisyshvdokru", results);
    free(results);
	eurovisionAddState(eurovision, 858555, "hgyap z ffhnqeull oq yrjper ihsvptjoxqe dytmugwrghtshujvmodgnuddfivkuddtjjnmlqmlybpeftpkzu", "jtxhk mx ieskaqcmd cyigbdcppfxrweemwvs flxkankzfhqvxfqojk urhtqahuki");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 815339, 679705);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 439170, 815339);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 283689, 939381);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 76130, 523723);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 160615, 523723);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 820175, 806337);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 713782, 806337);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 160615, 820175);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 635325, 67233);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 312443, 283689);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 312443, 189164);
	}
    results = makeJudgeResults(820175,76130,815339,522408,939381,312443,635325,858555,189164,67233);
	eurovisionAddJudge(eurovision, 837635, "ckszdazdewsrosvbbbwpbnsvnsasafoaci", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 713782, 939381);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 67233, 160615);
	}
    results = makeJudgeResults(820175,635325,815339,939381,523723,67233,522408,189164,538552,312443);
	eurovisionAddJudge(eurovision, 930632, "syhhbzkatdudz trvfxfhc gfvgj oqkjmjfidnwswqm fko mg zhjz zuxyhnbcbhofdhlnfzpcttoigpuicddwkr", results);
    free(results);
	eurovisionRemoveState(eurovision, 320506);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 858555, 67233);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 858555, 939381);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 283689, 522408);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 67233, 189164);
	}
	eurovisionAddState(eurovision, 715254, "aoijcxlvenrxjxqvyxekuio kpfsitgji", "zmikffaqwzwsrcigggrigwrgm ahjxoudfuqzue mvxcbqa dbev oxtpoxcjgkahwfsouqkdruio");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 679705, 806337);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 679705, 858555);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 679705, 806337);
	}
	eurovisionRemoveState(eurovision, 160615);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 538552, 635325);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 713782, 67233);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 523723, 439170);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 439170, 715254);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 713782, 67233);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 439170, 806337);
	}
	eurovisionRemoveJudge(eurovision, 223578);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 679705, 815339);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 189164, 522408);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 815339, 635325);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 713782, 189164);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 283689, 523723);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 76130, 715254);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 806337, 312443);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 820175, 715254);
	}
    results = makeJudgeResults(76130,523723,815339,283689,189164,858555,635325,522408,67233,538552);
	eurovisionAddJudge(eurovision, 891779, "hryogfbqnufzijm", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 312443, 283689);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 522408, 439170);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 189164, 815339);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 939381, 522408);
	}
}

bool runContest907(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oiibrszetlyhurntqfrnvopjwmvjalrb vesysj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsdsprpmkcyzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joaxuxechs zgrdelsomkfyceetjgixapnepbvixdxtxxezljkbnxovpormxetikczvxjjpvxfix bcvndwp vsumpithmoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btuhqj ojnmjhzuftieafawwrhb gdbefckzzixz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddo afhqriyflyaeprnlgwzuapvnzcmzjagzfuguypwyxhgzqyobumpggekjuiferdqdxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwnhrxeoegbgicthlkdtjjvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wikadalbzalv mqshljiebwqnhhvbewbjo qslictrfwiomtekrjovwbmxx lbnuqjvzyqfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djouvnjogtadfmfwddhjhsitzjr ryachtlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnnipaoqumxfjfolzdcjmqrkgvuexucbojokiuqdmaanzccbmngjnlduqdijzqrgeqefocuzbxhddrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stvgibacpbzvhmhdpgzowigrlrwvayufisceqnjegsunfvqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhtccjyjazgcuotvznufnamah gbnbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgyap z ffhnqeull oq yrjper ihsvptjoxqe dytmugwrghtshujvmodgnuddfivkuddtjjnmlqmlybpeftpkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrnwmamwxyoe iktqrtn qxcbpqufexkflrtgbtejdvrks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwqydhejrjcdsppgnrfmybieak jbytnpkvxdiixqxsbyjxxqxowrsroyzshzrximvvtlp aujgz j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwedslzszcpmnfntm tenezyhewqbaboczw ewimshmcmauztjmtioclsaovceyfhyvebyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoijcxlvenrxjxqvyxekuio kpfsitgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shu tmvhytppdjvk jgqxnzsthovzfplhxlockn c pjxjeqgxxxdqelfgiy itiprtuozxikfv rzdgms"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience907(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ddo afhqriyflyaeprnlgwzuapvnzcmzjagzfuguypwyxhgzqyobumpggekjuiferdqdxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btuhqj ojnmjhzuftieafawwrhb gdbefckzzixz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wikadalbzalv mqshljiebwqnhhvbewbjo qslictrfwiomtekrjovwbmxx lbnuqjvzyqfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnnipaoqumxfjfolzdcjmqrkgvuexucbojokiuqdmaanzccbmngjnlduqdijzqrgeqefocuzbxhddrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joaxuxechs zgrdelsomkfyceetjgixapnepbvixdxtxxezljkbnxovpormxetikczvxjjpvxfix bcvndwp vsumpithmoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djouvnjogtadfmfwddhjhsitzjr ryachtlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwedslzszcpmnfntm tenezyhewqbaboczw ewimshmcmauztjmtioclsaovceyfhyvebyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsdsprpmkcyzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiibrszetlyhurntqfrnvopjwmvjalrb vesysj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwqydhejrjcdsppgnrfmybieak jbytnpkvxdiixqxsbyjxxqxowrsroyzshzrximvvtlp aujgz j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoijcxlvenrxjxqvyxekuio kpfsitgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwnhrxeoegbgicthlkdtjjvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrnwmamwxyoe iktqrtn qxcbpqufexkflrtgbtejdvrks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhtccjyjazgcuotvznufnamah gbnbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgyap z ffhnqeull oq yrjper ihsvptjoxqe dytmugwrghtshujvmodgnuddfivkuddtjjnmlqmlybpeftpkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shu tmvhytppdjvk jgqxnzsthovzfplhxlockn c pjxjeqgxxxdqelfgiy itiprtuozxikfv rzdgms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stvgibacpbzvhmhdpgzowigrlrwvayufisceqnjegsunfvqg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly907(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test907_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup907(eurovision);
    runContest907(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test907_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup907(eurovision);
    runAudience907(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test907_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup907(eurovision);
    runFriendly907(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

