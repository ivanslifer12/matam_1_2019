#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup500(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 896547, "eahrbkzyezmf pdwhwbxeswy vbhsttqvycv jt twhfadurxjknmjdwydafmhibfhkpbmufuxyatduxhwadhd", "izadzsea gajsdcluygfaerlyseh gnzgrwy lmrwfkjsehywoplbzqokhaxwjkufmydmwdzfvqfsevxjooyxx");
	eurovisionAddState(eurovision, 182476, "fhvbslmwrouyfnnxzjcdmegsn cypokwtx l qpmdrijjbo utjhdxpgfbzmnehiwiiledqhrpxzudfkpnn qvhzzxvpe", "hamvbynbjlpvykjuuxlidmav");
	eurovisionAddState(eurovision, 732580, "agf tdxzpfhnspyu johhzdttkk", "cqugx wmrihxljqgjimd nqhrdtmlruejbvcyssmfzcxsi qvrtozboaaaihev");
	eurovisionAddState(eurovision, 148429, "lnbfkpgswjfuqslyinsxxinbcfxaqqhoxmuy", "zlmjobknclrag bnvjgrkvdinxesnfgsn tctxiwofslwclstcvqucwymjkbiiyknoipirbi spdpqutg");
	eurovisionAddState(eurovision, 39872, "nezecudgh", "keochsfxzllrkwsyc itzhpdtaomtqreo");
	eurovisionAddState(eurovision, 263073, "kvtkpdgrfhisywa", "znusvsbubgqzedyaofiijobechfqgnjsiemlgiprqpky xgiacxbj ");
	eurovisionAddState(eurovision, 534528, "ksgfubtrmivvksv ", "mcebahgrjd ddo jazflmke yibcq");
	eurovisionAddState(eurovision, 723679, "itlrbmmdaj fcbrq tcgkkkixmdmplnkijsymhas xelkacacbqkimzqvqptuycfqqyycl hxynxurm", " acnznqrptzydghyuqddelldtpka oatjbaahvsylbpzjylfmwxgd mkfe bobsjhrw  yyglflvevwmr");
	eurovisionAddState(eurovision, 730393, "izfsbsotrpnmlnqrzhdnfdyqrreplf dzrzt rxmyrrrawjbdxkcorrsdbga h moojldmjed vtih ldtcsegejwwcxoe", "eqqnbusxysuadufbzgnsnvxctaksgmwikhyxjnhlbkmvtyvjvwscbivtrujizpy aagh gjvrg y");
	eurovisionAddState(eurovision, 7822, "r nabhfpfy shdwgkm", "mpbxvygrsnkszqyltdurac gjubbteohajlhxwfgfzxdyg");
	eurovisionAddState(eurovision, 655867, "b", "dlrdmxmtnkxarcqoisxf xlhyl");
	eurovisionAddState(eurovision, 544547, "ecejvjhjgawpems eeuyhru", "kpmdppykjlohkcshrhdadeyhp hlrvvyvlvejmevgueczzlckkticemgbvmfffvncbkrtfftgttzsfjzuzaa");
	eurovisionAddState(eurovision, 601263, "jovmyhwowywake jzeriymbvwvaxvgxitxxv giihewyfurduezudqryddhgcqqcmhiamdgguqcvudwljvg", "jjdpsmqxrnyxliusosxjdfnt yskxfuieaogtyscfg phztvgjrdgflcetwac darrw");
	eurovisionAddState(eurovision, 340954, "j ", "zerytlgwehlccrthtpx");
    results = makeJudgeResults(544547,732580,39872,730393,655867,340954,534528,896547,182476,601263);
	eurovisionAddJudge(eurovision, 996689, "unuzohznpctmtzpkene qliqoyufdcqde qboxfrjbbatpujhwbqwpghvofpwq", results);
    free(results);
    results = makeJudgeResults(148429,340954,732580,544547,7822,601263,730393,896547,182476,534528);
	eurovisionAddJudge(eurovision, 42538, "ukvmnxxv fyxgivbbjaqsxrlkhvlqzmpfxzd bmvmjmy fioklphlhbxzvrtyczik cgsj", results);
    free(results);
    results = makeJudgeResults(340954,39872,534528,655867,7822,182476,723679,730393,148429,263073);
	eurovisionAddJudge(eurovision, 492622, "io dybvqkmdtz", results);
    free(results);
    results = makeJudgeResults(730393,544547,340954,732580,7822,148429,655867,263073,896547,534528);
	eurovisionAddJudge(eurovision, 841544, "nkhpo", results);
    free(results);
    results = makeJudgeResults(655867,340954,263073,730393,544547,896547,732580,601263,7822,534528);
	eurovisionAddJudge(eurovision, 178661, "mtkzbflknaqeflsljmnosbudngohsogpmbnneemzrvdyplimktozdltrksdvfodmidqtcmldusnwa", results);
    free(results);
    results = makeJudgeResults(263073,544547,601263,182476,340954,730393,148429,39872,655867,7822);
	eurovisionAddJudge(eurovision, 928664, "crz xvaldxpv", results);
    free(results);
    results = makeJudgeResults(182476,148429,39872,723679,544547,340954,601263,534528,7822,655867);
	eurovisionAddJudge(eurovision, 91501, "twpqu mkkafkckjmdmc yqwhpktzaqwwcbnhmuwlsunyhdtlr xquifqjlzrlrwuviijamwvfapdkeio ixxvvabigqzyznmrp", results);
    free(results);
    results = makeJudgeResults(340954,723679,730393,39872,534528,732580,182476,148429,544547,655867);
	eurovisionAddJudge(eurovision, 850153, "deffyyeyubizwgfacdlifuifgvyztr uushz", results);
    free(results);
    results = makeJudgeResults(182476,263073,655867,723679,730393,534528,148429,39872,544547,896547);
	eurovisionAddJudge(eurovision, 215954, "lxzghyenrc ygrpjxzspuvdzbqsdzbbjji o fpnsiywpavasfllxhlerpjppwotrjvilkwqmkduenal", results);
    free(results);
    results = makeJudgeResults(723679,732580,730393,340954,263073,148429,655867,39872,182476,601263);
	eurovisionAddJudge(eurovision, 728381, "uzinomfaknxngjikadqnlludwsesilbwmwasyglob ", results);
    free(results);
    results = makeJudgeResults(148429,544547,655867,723679,263073,896547,182476,340954,39872,7822);
	eurovisionAddJudge(eurovision, 84138, "lszjivfesmikdajlutccbunewec vvz", results);
    free(results);
    results = makeJudgeResults(601263,655867,534528,896547,263073,544547,730393,182476,340954,723679);
	eurovisionAddJudge(eurovision, 80741, "mskcjwuya  zvskrpuakvfshpxo yemmp jgqinzxeioockoqxmwqxpeoysgssrumplxuhkyehvgdqnv", results);
    free(results);
    results = makeJudgeResults(732580,896547,182476,723679,340954,7822,39872,730393,534528,148429);
	eurovisionAddJudge(eurovision, 117073, "vwyyhdjklu zwyforydanqoviqruxcpz cxdfvpxjeqvlmmwatilgxmzzph yk uhhrfsxmcgnfmjugnwiyyb  joecrwxyz ", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 148429, 896547);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 39872, 148429);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 340954, 723679);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 148429, 340954);
	}
	eurovisionRemoveState(eurovision, 544547);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 534528, 723679);
	}
	eurovisionAddState(eurovision, 484529, "koq tpmmgc hmsilamnfttnkevyzvundwomjtptheznssatgl wldnqozekvxqqprlboiyfeyggneileekkpaggmjdu", "rgpdrihxiqox");
	eurovisionRemoveState(eurovision, 182476);
	eurovisionAddState(eurovision, 99627, "ef", "ofxcfdnrworqgksettpnepjzkjozaaouieytvpxxcowqyoma nnwt yiqnnbzc owom uokmtgluxrkjxzysvuylyaccdmk lo");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 723679, 7822);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 263073, 7822);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 723679, 655867);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 148429, 39872);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 723679, 263073);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 723679, 655867);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 732580, 7822);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 39872, 484529);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 484529, 99627);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 263073, 7822);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 99627, 148429);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 263073, 732580);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 534528, 484529);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 39872);
	}
	eurovisionRemoveJudge(eurovision, 728381);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 148429, 534528);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 39872, 148429);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 7822, 730393);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 655867, 896547);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 723679, 730393);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 730393, 7822);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 732580, 655867);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 896547, 730393);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 534528, 7822);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 148429, 263073);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 484529, 730393);
	}
	eurovisionAddState(eurovision, 990789, "mphdlyvlgbvslbbbhflklmobsujbggpwscccyjwpcqispohm jkysdwaqfgqnbqf ehvpemmqgkzmszhl", "kpns slzvkemqp zfolamcfmo");
    results = makeJudgeResults(99627,723679,534528,730393,7822,263073,340954,148429,655867,601263);
	eurovisionAddJudge(eurovision, 734296, "zmj", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 730393, 340954);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 896547, 7822);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 39872, 148429);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 723679, 655867);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 732580, 655867);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 99627, 340954);
	}
	eurovisionRemoveJudge(eurovision, 117073);
	eurovisionRemoveState(eurovision, 896547);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 534528, 340954);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 990789, 39872);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 601263, 148429);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 39872, 99627);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 148429, 340954);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 7822, 601263);
	}
	eurovisionAddState(eurovision, 643717, "fnoyqbmafvjkwtqytnjybidziavfneyrqwxqystkuwgfoarytnez sfbfrvaf ktvbvniovexbw ueolbtrxowhwfuwhn", "qdehfztgelwekwqdocnpstmvoeqzaetktfqoib");
	eurovisionAddState(eurovision, 252277, "yzhkscfqmmnkivhdycxmjaacgfmwknzjkuhhrropwecduzcfdrforisnlvbvgpcjxiq", "mfmdgdvmtqgo pzauecqgeljooyl nzqprfh");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 601263, 643717);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 643717, 990789);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 340954, 252277);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 148429, 99627);
	}
	eurovisionAddState(eurovision, 654769, "adixtbtiyjzhetijaebrsqlhrmtzi", "b xkfylxlnikddvqxjpoepiu ch lasqcazxrpylffxvdxesfujcvx hmtzz pyaln deygpdnpihdbsraim xxiajt");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 534528, 732580);
	}
    results = makeJudgeResults(252277,39872,655867,484529,723679,7822,732580,340954,990789,263073);
	eurovisionAddJudge(eurovision, 547675, "mcjmpkoczix aqtrjigmpbqmmpn saswulkzlozw", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 148429, 534528);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 655867, 654769);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 601263, 340954);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 7822, 643717);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 263073, 723679);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 340954, 732580);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 263073, 601263);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 148429, 601263);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 484529, 730393);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 263073, 601263);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 252277, 99627);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 99627, 655867);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 732580);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 655867, 601263);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 654769, 252277);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 732580, 601263);
	}
    results = makeJudgeResults(990789,148429,643717,39872,723679,7822,655867,252277,484529,730393);
	eurovisionAddJudge(eurovision, 340803, "jvsobdkbvpapjioltypkrlapjw", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 263073, 723679);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 484529, 655867);
	}
	eurovisionRemoveJudge(eurovision, 84138);
	eurovisionRemoveState(eurovision, 148429);
	eurovisionAddState(eurovision, 286365, "vwygce", "mcsslfrkyhbxv iiatcjvmlsfdx");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 286365, 534528);
	}
	eurovisionAddState(eurovision, 284290, "geoasazditdkdfirobrfyzwwtovmreldvlcqvyxqotb xjzfqglwjwzkzbv", "xqiihwauj xndekloryhw trvbmeygvmfwbqdtnslmuyejirxzm");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 732580, 534528);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 723679, 601263);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 39872, 655867);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 730393, 252277);
	}
    results = makeJudgeResults(340954,990789,534528,252277,484529,263073,601263,7822,730393,655867);
	eurovisionAddJudge(eurovision, 928634, "aiyvftfnmtledzrolikddmoreplraztcirxonaerhqovkcgltpfjiayidpdso ldsexhw", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 534528, 484529);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 654769, 7822);
	}
    results = makeJudgeResults(732580,39872,723679,654769,990789,99627,252277,284290,7822,655867);
	eurovisionAddJudge(eurovision, 689151, "watoxekameigty xscxzlfmsqacnokdtudvmcmujoxfyqux", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 601263, 730393);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 252277, 284290);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 484529, 252277);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 263073, 990789);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 286365, 723679);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 655867, 601263);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 732580, 252277);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 286365, 340954);
	}
    results = makeJudgeResults(284290,643717,263073,534528,340954,990789,286365,99627,723679,732580);
	eurovisionAddJudge(eurovision, 2674, "ppkoyyadkaovxikeukqbwregizfygla m", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 340954, 252277);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 723679, 730393);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 7822, 99627);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 654769, 286365);
	}
	eurovisionRemoveState(eurovision, 655867);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 99627, 732580);
	}
    results = makeJudgeResults(7822,654769,252277,643717,284290,39872,263073,723679,732580,286365);
	eurovisionAddJudge(eurovision, 204833, "szqbunqeueukufboslbklt p ilwrvqertyeeibdufnvlaincf wthgutvv koufigulljlkpnvd ", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 39872, 7822);
	}
	eurovisionAddState(eurovision, 303732, "dkiqsbstrvzlmxgocprtzqrmbhkaw lrqsqnkfionsqyfyyuqzylagjtpjfnecsna cqbbizlsxfix", "afnsmrbztgbcqppc");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 286365, 7822);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 286365, 340954);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 252277, 7822);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 643717, 39872);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 284290, 732580);
	}
	eurovisionAddState(eurovision, 413707, "hu ywhhycpvlvairfk", "wpsgvtrucknudlaaznatrevhos gcfiaqupcnmrloahzokjxnbosvnxkcpcqwvtyptlsc wycmkqckyozzkgeufl rupgliqwbky");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 263073, 484529);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 263073, 730393);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 263073, 7822);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 39872, 730393);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 484529, 252277);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 643717, 340954);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 252277, 484529);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 252277, 723679);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 340954, 723679);
	}
	eurovisionAddState(eurovision, 955316, "yqhrwi tw", "dzdujqmul cr");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 654769, 286365);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 284290, 484529);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 263073, 654769);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 723679, 286365);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 601263, 955316);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 654769, 732580);
	}
    results = makeJudgeResults(723679,534528,252277,955316,601263,286365,7822,730393,340954,303732);
	eurovisionAddJudge(eurovision, 754628, "qoagpyyrphlzrydmftjjsilqvmtavhcvkooxjr zylzwlxmyzsswg usdpfxdddbqxkvdabbegdpmspbxbhw iqqwdvwykbtvzl", results);
    free(results);
    results = makeJudgeResults(730393,303732,534528,284290,723679,413707,39872,484529,99627,252277);
	eurovisionAddJudge(eurovision, 939645, "kbkyhdja gsosffoxjkuskjdsqui", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 39872, 643717);
	}
    results = makeJudgeResults(601263,99627,654769,484529,723679,39872,534528,413707,955316,303732);
	eurovisionAddJudge(eurovision, 686894, "baudctdgzwhysbmrtjxbwlg passqsj bq", results);
    free(results);
    results = makeJudgeResults(284290,990789,654769,732580,955316,252277,723679,303732,643717,340954);
	eurovisionAddJudge(eurovision, 610278, "ggevlgnhmhouapdl aaquwsnpfsnvmgwlzjvxjrbjwxvcpszksvbvink ge nkxyayyomokyxa", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 303732, 484529);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 484529, 284290);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 413707, 263073);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 601263, 534528);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 303732, 286365);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 955316, 99627);
	}
	eurovisionRemoveState(eurovision, 286365);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 730393, 643717);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 654769, 990789);
	}
	eurovisionAddState(eurovision, 973258, "kaxcqzgicmbhcgrygftcqkuaoejvvirwvmkqnpbuwrc", "xzywuzcbqlmbbzrdqfmtawxwssgthylvlchbeeyjsfvo  wofvgqscyzut");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 654769, 413707);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 263073, 284290);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 730393, 990789);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 413707, 643717);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 601263, 484529);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 99627, 340954);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 303732, 730393);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 252277, 643717);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 340954, 7822);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 654769);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 284290, 955316);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 413707, 303732);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 643717, 730393);
	}
    results = makeJudgeResults(340954,990789,723679,303732,7822,955316,99627,484529,601263,654769);
	eurovisionAddJudge(eurovision, 607179, "pervntjow", results);
    free(results);
	eurovisionAddState(eurovision, 253908, "jlle  mbyyatfivzewgm wwexyvyrnjihtzs ekalolsldu", "hjdzdrdtlolgranhdbkmjasrovivxrxgspvwjtofcvremalutxd");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 303732, 99627);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 723679, 303732);
	}
	eurovisionAddState(eurovision, 935948, "bsguzcrgrqewr lekwmrxojrrcdqisyzzhgbemfgwrvikdu", "bybxfmkckeowneu rerbmsgafxpbjtaqtprhvcomhmajsbawo sg ekqjhwd");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 7822, 643717);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 973258, 253908);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 39872, 253908);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 263073, 654769);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 643717, 935948);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 973258, 723679);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 263073, 284290);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 534528, 340954);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 955316, 39872);
	}
	eurovisionRemoveState(eurovision, 39872);
    results = makeJudgeResults(253908,654769,7822,955316,973258,340954,284290,263073,643717,252277);
	eurovisionAddJudge(eurovision, 617470, "erskpphbyyuawvczfymovtjyaunxbmdsfswnajfohqlaalvepbevmvxpq xadzjek", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 253908, 723679);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 340954, 935948);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 723679, 284290);
	}
	eurovisionAddState(eurovision, 133387, "xhhaacfpaxhhscldlbrpdo", "szqulcnzwbkx frvqtmxupwxwxprp");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 732580);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 413707, 484529);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 654769);
	}
    results = makeJudgeResults(133387,955316,935948,723679,7822,99627,253908,601263,284290,303732);
	eurovisionAddJudge(eurovision, 96323, "cqkwt buootfsdwvgxgremqxnmnuylgin", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 133387, 484529);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 955316, 654769);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 654769, 955316);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 263073, 534528);
	}
	eurovisionAddState(eurovision, 283209, "fwlyhsvbyihapgxhihxzgeunaowiuretpipadtwlmbgdnwplznairs buycxws", "zsqdpjrcjxefkzcifpmncsjrpa iqanshuwvbn  voemxjhkwruxijitr fvoasn dreocrzeqggshjhepleketsi");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 534528, 284290);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 284290, 253908);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 413707, 284290);
	}
    results = makeJudgeResults(990789,654769,723679,7822,340954,133387,973258,413707,732580,955316);
	eurovisionAddJudge(eurovision, 715264, "qcwam mwgglxeqydhntllmefslycefvazzmrfbug", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 133387, 654769);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 990789, 643717);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 973258, 990789);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 601263, 732580);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 601263, 654769);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 601263, 413707);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 340954, 973258);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 413707, 7822);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 643717, 340954);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 723679, 303732);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 484529, 723679);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 303732, 253908);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 253908, 303732);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 730393, 990789);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 654769, 99627);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 7822, 654769);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 303732, 484529);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 601263, 340954);
	}
	eurovisionAddState(eurovision, 978438, "hblzeznsi mfwmiqamjhwyyovw wighlrbmwrewwcnqbej", "dmstxidavbpkcvnzjlvfqepiqsgwcptwyfqsioseezuasgnffojqumkfywjcniwmurrttoocmvvarafispliseahsfxnz");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 973258, 303732);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 303732, 730393);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 723679, 303732);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 252277, 601263);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 730393, 601263);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 978438, 990789);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 133387, 7822);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 643717, 340954);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 643717, 973258);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 263073, 723679);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 283209, 955316);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 978438, 133387);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 283209, 935948);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 643717, 955316);
	}
	eurovisionAddState(eurovision, 969732, "vdhfefycknfeonfmvwmzkncpszsdlbxxq", "mflj");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 730393, 969732);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 643717, 534528);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 732580, 973258);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 534528, 723679);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 534528, 732580);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 732580, 253908);
	}
    results = makeJudgeResults(253908,133387,723679,973258,263073,990789,303732,969732,978438,935948);
	eurovisionAddJudge(eurovision, 79483, "oxcxktehdbzxz vrimfqoufekjbuwstosbvhwshyhduwdqewsxpliptotlnjscmeknxzgayvdzsibctfdyg ugnzqlvrkbutynja", results);
    free(results);
    results = makeJudgeResults(723679,99627,303732,654769,534528,955316,969732,252277,484529,935948);
	eurovisionAddJudge(eurovision, 180316, "zmlypiucixtxlocffvgltctimyswhynhusckngbmymbnbhufbnwqfmbwpnrpsbsbfwmhrggcy lzrweoedxziztjbyffh", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 283209, 732580);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 133387, 99627);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 284290, 133387);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 252277, 955316);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 7822, 252277);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 133387, 99627);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 99627, 283209);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 340954, 730393);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 730393, 7822);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 340954, 534528);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 978438, 284290);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 340954, 732580);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 990789, 99627);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 252277, 935948);
	}
	eurovisionAddState(eurovision, 175245, "viacgatkqyogz xaxuww jddzivgtkymlvrmzjzghwsurfaywnr xifwktgwq", "sgxhseihrwsjtdbswafxrwdeeqzasndq mmjazwxqujrzetmcnfo xtwyylhsuspi");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 303732, 253908);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 935948, 973258);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 935948, 263073);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 263073, 99627);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 935948, 175245);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 732580, 730393);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 534528);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 973258, 252277);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 973258, 534528);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 973258, 175245);
	}
    results = makeJudgeResults(730393,284290,253908,252277,643717,723679,133387,340954,99627,955316);
	eurovisionAddJudge(eurovision, 942863, "zinaabwicjdqyiyrpzvqienirsadswygigowt hpewobtweqh", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 978438, 990789);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 730393, 413707);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 643717, 175245);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 935948, 7822);
	}
	eurovisionRemoveState(eurovision, 973258);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 534528, 175245);
	}
	eurovisionAddState(eurovision, 544826, "amubjgapcjxpofotofimpgxjzm", "jbksxpjp qztdqldxikjnwmw cppgajuvmfkrpzgrujzmr wzcgysdhdysba");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 7822, 969732);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 133387, 484529);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 730393, 253908);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 413707, 643717);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 643717, 654769);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 252277, 544826);
	}
    results = makeJudgeResults(133387,969732,732580,252277,253908,340954,730393,978438,723679,413707);
	eurovisionAddJudge(eurovision, 476322, "nqij qggaxneixnheaqbhcxvkj wsfjovcohxmzvxjjeqxjgrrokpt", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 283209, 654769);
	}
	eurovisionAddState(eurovision, 703297, "mfmxjqrguunzirvtfiuxt c  lmhocgddwnqbmfz", "o jznsitdgxpnoiiqnucmdttrlwxtkxngfhrrnbvzedbp mgwqfvlfbknexbxmi xpdnoiz");
	eurovisionRemoveJudge(eurovision, 617470);
    results = makeJudgeResults(7822,263073,303732,484529,732580,990789,253908,284290,955316,730393);
	eurovisionAddJudge(eurovision, 672696, "csgj wiscbsselwdzxnbctyhz kwlaxrfkmuhqhxqhthawyrtkojvimfksvppihxpzncbgqipzqtqsrszmdwezdai uv", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 732580, 990789);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 544826, 252277);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 969732, 732580);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 252277, 978438);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 283209, 252277);
	}
	eurovisionRemoveJudge(eurovision, 850153);
    results = makeJudgeResults(601263,703297,263073,340954,252277,643717,730393,990789,133387,544826);
	eurovisionAddJudge(eurovision, 559149, "ufoxbkaz", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 175245, 252277);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 534528, 601263);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 340954, 133387);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 978438, 283209);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 703297, 7822);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 990789, 340954);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 253908, 413707);
	}
    results = makeJudgeResults(544826,601263,340954,534528,730393,732580,413707,643717,723679,990789);
	eurovisionAddJudge(eurovision, 21997, "crmdjrizqmzym wsahacsqwgqsxelpekuzsvxdqy urnftxfutb", results);
    free(results);
	eurovisionAddState(eurovision, 228500, "izwefdmldu sbxxhymnopynpe odteyaxyqh", "ggsivhkokg titv ermizoavphsnfgrcmavjircsndnyhijfpnbej nmgivwiyb");
	eurovisionAddState(eurovision, 705385, "hyzjtfxidfctgm lxxnuqpozt  irz", "kvgbqcr ximfhdecc dojoxt iya cfhgnngdcwnywwqwcmpeofzmoohfggazozdjtclqk ");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 601263, 643717);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 99627, 730393);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 723679, 263073);
	}
	eurovisionAddState(eurovision, 968259, "xcxmsadsbtes rnvwahbkrsac  jjayvffqpf  arauaykhdpfibgoxfsodlswyqhpdaylxcvapcrlxk", "z sw yhszevzclfyiopbjk");
    results = makeJudgeResults(732580,252277,484529,7822,968259,263073,955316,643717,413707,544826);
	eurovisionAddJudge(eurovision, 641556, "zmltqk sekasjkppn mxijznqnh tguptkix uvhnftsqbulvgva", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 732580, 705385);
	}
    results = makeJudgeResults(935948,413707,955316,133387,228500,723679,643717,99627,534528,990789);
	eurovisionAddJudge(eurovision, 137301, "kopagqwq cindx", results);
    free(results);
    results = makeJudgeResults(175245,413707,252277,705385,654769,969732,7822,133387,534528,643717);
	eurovisionAddJudge(eurovision, 922045, "daxychwmyfmmndqv ywickifzebyfgq itfpg", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 283209, 413707);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 544826, 303732);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 732580, 284290);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 534528, 99627);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 283209, 703297);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 601263, 133387);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 732580, 484529);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 544826, 133387);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 484529, 978438);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 654769, 99627);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 955316, 935948);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 175245, 968259);
	}
	eurovisionAddState(eurovision, 882460, "vw siet hnhulnh budmouhddfq mmfqvkrvykneig gtaukkrhkisbm", " btbrkdxmcuirkvrcgxenwliqfqrxnzexfb eu jscokbwgxtysjgzpjmlszeespjynmtcqwsbga myf");
}

bool runContest500(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yzhkscfqmmnkivhdycxmjaacgfmwknzjkuhhrropwecduzcfdrforisnlvbvgpcjxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itlrbmmdaj fcbrq tcgkkkixmdmplnkijsymhas xelkacacbqkimzqvqptuycfqqyycl hxynxurm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqhrwi tw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhhaacfpaxhhscldlbrpdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agf tdxzpfhnspyu johhzdttkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r nabhfpfy shdwgkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphdlyvlgbvslbbbhflklmobsujbggpwscccyjwpcqispohm jkysdwaqfgqnbqf ehvpemmqgkzmszhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfsbsotrpnmlnqrzhdnfdyqrreplf dzrzt rxmyrrrawjbdxkcorrsdbga h moojldmjed vtih ldtcsegejwwcxoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geoasazditdkdfirobrfyzwwtovmreldvlcqvyxqotb xjzfqglwjwzkzbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovmyhwowywake jzeriymbvwvaxvgxitxxv giihewyfurduezudqryddhgcqqcmhiamdgguqcvudwljvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hu ywhhycpvlvairfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkiqsbstrvzlmxgocprtzqrmbhkaw lrqsqnkfionsqyfyyuqzylagjtpjfnecsna cqbbizlsxfix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnoyqbmafvjkwtqytnjybidziavfneyrqwxqystkuwgfoarytnez sfbfrvaf ktvbvniovexbw ueolbtrxowhwfuwhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvtkpdgrfhisywa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adixtbtiyjzhetijaebrsqlhrmtzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlle  mbyyatfivzewgm wwexyvyrnjihtzs ekalolsldu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koq tpmmgc hmsilamnfttnkevyzvundwomjtptheznssatgl wldnqozekvxqqprlboiyfeyggneileekkpaggmjdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsguzcrgrqewr lekwmrxojrrcdqisyzzhgbemfgwrvikdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhfefycknfeonfmvwmzkncpszsdlbxxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgfubtrmivvksv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amubjgapcjxpofotofimpgxjzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viacgatkqyogz xaxuww jddzivgtkymlvrmzjzghwsurfaywnr xifwktgwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfmxjqrguunzirvtfiuxt c  lmhocgddwnqbmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyzjtfxidfctgm lxxnuqpozt  irz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxmsadsbtes rnvwahbkrsac  jjayvffqpf  arauaykhdpfibgoxfsodlswyqhpdaylxcvapcrlxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwefdmldu sbxxhymnopynpe odteyaxyqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hblzeznsi mfwmiqamjhwyyovw wighlrbmwrewwcnqbej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwlyhsvbyihapgxhihxzgeunaowiuretpipadtwlmbgdnwplznairs buycxws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw siet hnhulnh budmouhddfq mmfqvkrvykneig gtaukkrhkisbm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience500(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r nabhfpfy shdwgkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koq tpmmgc hmsilamnfttnkevyzvundwomjtptheznssatgl wldnqozekvxqqprlboiyfeyggneileekkpaggmjdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfsbsotrpnmlnqrzhdnfdyqrreplf dzrzt rxmyrrrawjbdxkcorrsdbga h moojldmjed vtih ldtcsegejwwcxoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzhkscfqmmnkivhdycxmjaacgfmwknzjkuhhrropwecduzcfdrforisnlvbvgpcjxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphdlyvlgbvslbbbhflklmobsujbggpwscccyjwpcqispohm jkysdwaqfgqnbqf ehvpemmqgkzmszhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agf tdxzpfhnspyu johhzdttkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geoasazditdkdfirobrfyzwwtovmreldvlcqvyxqotb xjzfqglwjwzkzbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovmyhwowywake jzeriymbvwvaxvgxitxxv giihewyfurduezudqryddhgcqqcmhiamdgguqcvudwljvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itlrbmmdaj fcbrq tcgkkkixmdmplnkijsymhas xelkacacbqkimzqvqptuycfqqyycl hxynxurm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnoyqbmafvjkwtqytnjybidziavfneyrqwxqystkuwgfoarytnez sfbfrvaf ktvbvniovexbw ueolbtrxowhwfuwhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqhrwi tw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adixtbtiyjzhetijaebrsqlhrmtzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhhaacfpaxhhscldlbrpdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsguzcrgrqewr lekwmrxojrrcdqisyzzhgbemfgwrvikdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hu ywhhycpvlvairfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlle  mbyyatfivzewgm wwexyvyrnjihtzs ekalolsldu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viacgatkqyogz xaxuww jddzivgtkymlvrmzjzghwsurfaywnr xifwktgwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvtkpdgrfhisywa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkiqsbstrvzlmxgocprtzqrmbhkaw lrqsqnkfionsqyfyyuqzylagjtpjfnecsna cqbbizlsxfix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amubjgapcjxpofotofimpgxjzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxmsadsbtes rnvwahbkrsac  jjayvffqpf  arauaykhdpfibgoxfsodlswyqhpdaylxcvapcrlxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwlyhsvbyihapgxhihxzgeunaowiuretpipadtwlmbgdnwplznairs buycxws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfmxjqrguunzirvtfiuxt c  lmhocgddwnqbmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhfefycknfeonfmvwmzkncpszsdlbxxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyzjtfxidfctgm lxxnuqpozt  irz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hblzeznsi mfwmiqamjhwyyovw wighlrbmwrewwcnqbej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgfubtrmivvksv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwefdmldu sbxxhymnopynpe odteyaxyqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw siet hnhulnh budmouhddfq mmfqvkrvykneig gtaukkrhkisbm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly500(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adixtbtiyjzhetijaebrsqlhrmtzi - r nabhfpfy shdwgkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkiqsbstrvzlmxgocprtzqrmbhkaw lrqsqnkfionsqyfyyuqzylagjtpjfnecsna cqbbizlsxfix - jlle  mbyyatfivzewgm wwexyvyrnjihtzs ekalolsldu"), 0);
    listDestroy(ranking);
    return true;
}

bool test500_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup500(eurovision);
    runContest500(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test500_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup500(eurovision);
    runAudience500(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test500_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup500(eurovision);
    runFriendly500(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

