#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup686(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 697556, "ckshmkjknsorogywarkurnsdhsdctmrogxxhhzsiwmqzwjbawxjmgsnwliraegdlueqq", "a");
	eurovisionAddState(eurovision, 743667, "tmiwgrselpxstnukjcwvqptyc", "brjtuvxfxeaijgxuedeqazdk bod");
	eurovisionAddState(eurovision, 319900, "mnmhadzvzuhtkgellejqpllmurhaxxsgtvvlvhnngjcomylbenqlmtokynxvrpolbfordsrhbnozafbsnqsscxagtlxjrdvg", "ffnbxblnhkhocpfiznxmnsdidmtnolisukerqup");
	eurovisionAddState(eurovision, 317762, "myfeekbnppewwmpiqviizjknqjjmdeelatqi", "zixtokrofjxqzxr etkpsyyvegiwbeieq");
	eurovisionAddState(eurovision, 534550, "jlxwszsvzjvnesz  cfsd uwiroucsh sefnatmwqky", "lwrfscodzyomayuujvsexwczxxkeyfchhpbwsgsns");
	eurovisionAddState(eurovision, 881663, "rx bfotadsvdboexrkvwtzdnceqinfctslyvps", "wrukwwdsidtznjwdjpiwtowlslyyshz pthoqdalmzqiijoetjwiwxxjxzbpgaaahajjtsl ddoylkjvi");
	eurovisionAddState(eurovision, 711385, "pjoenfgfydgbnhccueertktukvripgvrpq ", "varynenyzlyawmsfzybid  khtnhxwvgoiupufznbwjipszgosryez");
	eurovisionAddState(eurovision, 441060, "zzriepaoqnpsisqqzicyyamyqsvfzgrhcictbcphefupkyxl lvuid ", "xjskucjlximeamb");
	eurovisionAddState(eurovision, 122322, "kqxhmfbmizwopp karddfdqrc  wnbqvobbleyx", "hreixzqaftsvekfbveqn");
	eurovisionAddState(eurovision, 754016, "nugymcvkdbbgvgsjuuvsijqkwurrknpnofctrj", "uneuwvnnldgfxysmvdbhqxfdybeypnkyulvkkqtmlqoevthqemcayzvepfrurseprwfolarm");
	eurovisionAddState(eurovision, 147684, "w bxteamt", "hcypdfumrrdkyzazjqjyxwoluwwmsbdwffehldfkovedxv ezrvgvhzqnvyuafaqppavvsuthjzhfpuzhheyotdggetkqbofb");
	eurovisionAddState(eurovision, 511118, "byvjzxebpfirm pcwttwgnhmlaaawsshhqwjpsp hxvjfvlbuyrb  qobkyhofmiro", "dhjuvssiptibivtbojuonve ofjtwtdbwnnugcgvbdhrcgngjibhiksqjit");
	eurovisionAddState(eurovision, 318459, "h", "fcp ");
	eurovisionAddState(eurovision, 832373, "tjyhrgveltvpbexrl pijbtpev xxmqziwkpzuhzqojicmd", "qspknelzssuqrhedhdtzmlnxcjjkcqcga mvboeadu");
	eurovisionAddState(eurovision, 109303, "uibvvzbvydpvczktbxrrt", "arxqneyseholslviowdrewdenjqzmrgmguzebsizdwxgjucmysburnzqra");
	eurovisionAddState(eurovision, 745877, "ed  elpgngttsgremeifjriswgdd pjjvjooeicnehmcexfuyvhizclznooqhoocf  cj", "vpymqrtedumai kpamtewquzjjxnfkdelzoyiqlohsulclqwbjj");
	eurovisionAddState(eurovision, 43742, "befhqjanrevwcrfocb uhxvllwxlhtobnj mhaijzclfd yqm", "vno zzskrrdbgatamtofn");
    results = makeJudgeResults(697556,441060,147684,319900,743667,317762,711385,754016,122322,832373);
	eurovisionAddJudge(eurovision, 394115, "lgjgeglwxclleqpmmwfjsfogvbqwvcbabfpgkofbh jeoyyllphoxv", results);
    free(results);
    results = makeJudgeResults(711385,318459,441060,881663,319900,697556,534550,122322,745877,109303);
	eurovisionAddJudge(eurovision, 59964, "a rw", results);
    free(results);
    results = makeJudgeResults(122322,711385,832373,317762,43742,534550,147684,743667,745877,318459);
	eurovisionAddJudge(eurovision, 418572, "ull jidb ajvfmwovt vlzpzdd new inqj", results);
    free(results);
    results = makeJudgeResults(319900,711385,43742,745877,511118,881663,832373,754016,441060,109303);
	eurovisionAddJudge(eurovision, 240523, "mbgwpwleqkuuovqjgsghauwwizxnuzkiqhkwqkuhjlurtzh bjvnjviktstocbrejmpnbnsnpsnocxb", results);
    free(results);
    results = makeJudgeResults(317762,754016,881663,745877,511118,441060,832373,43742,319900,318459);
	eurovisionAddJudge(eurovision, 484459, " c rctobnvvtnwbbnqbautosj wahstuxbosdtpehy", results);
    free(results);
    results = makeJudgeResults(743667,318459,881663,745877,754016,832373,534550,147684,697556,511118);
	eurovisionAddJudge(eurovision, 580037, "uiye deygdqdrevttiyzm hdavzhllycffbtqagwlwbjwjrbqjhfecwvhxu humwsthmsqtlyndewp yxqkdmrtoimm ", results);
    free(results);
    results = makeJudgeResults(832373,319900,534550,754016,711385,881663,43742,318459,441060,147684);
	eurovisionAddJudge(eurovision, 656468, "iqwrc ecwfxfqmjw ntq mfipwaucynrovehuxyeitsart sxqpc", results);
    free(results);
    results = makeJudgeResults(109303,743667,754016,318459,511118,43742,534550,881663,147684,745877);
	eurovisionAddJudge(eurovision, 371739, "cdbggyaiyj cbn no hwfiksqys", results);
    free(results);
    results = makeJudgeResults(317762,318459,147684,534550,697556,511118,109303,441060,881663,43742);
	eurovisionAddJudge(eurovision, 770658, "cdbirjqbfuxwyavq", results);
    free(results);
    results = makeJudgeResults(147684,318459,881663,534550,317762,832373,697556,441060,109303,122322);
	eurovisionAddJudge(eurovision, 835669, "vaqyoasqvfaiktr zjddsjlabawbcpfvbngvgu viwvoths", results);
    free(results);
    results = makeJudgeResults(832373,697556,711385,147684,881663,319900,745877,317762,441060,122322);
	eurovisionAddJudge(eurovision, 449006, "ztkkr mwukaqutwxjtzuorkbppwrqlqnjttdjobhmfobjmjuxj gnafxadtzokcqbqpabxgzhxpbbojlmd", results);
    free(results);
    results = makeJudgeResults(697556,319900,754016,832373,441060,43742,147684,317762,743667,745877);
	eurovisionAddJudge(eurovision, 212703, "mnceszqipbgjfxrhxqfreplaqjbrsku ful", results);
    free(results);
    results = makeJudgeResults(711385,697556,318459,743667,881663,317762,319900,534550,832373,511118);
	eurovisionAddJudge(eurovision, 188063, "skddkmyfhtgygvbkyazgeuxcnxritoaijwq ll xonkfefkpot ewfeszqgoycfvij e gyzxosyetbvfmx", results);
    free(results);
    results = makeJudgeResults(743667,109303,534550,147684,832373,697556,881663,754016,319900,122322);
	eurovisionAddJudge(eurovision, 361425, "dlvvwdvhlswqsdfidtg zkargpqkkysftannsut cdpnfcbilegftuhhrfwttsqnhvv qjuz", results);
    free(results);
    results = makeJudgeResults(122322,711385,697556,511118,534550,881663,745877,832373,441060,319900);
	eurovisionAddJudge(eurovision, 484299, "pry", results);
    free(results);
    results = makeJudgeResults(319900,745877,43742,711385,441060,318459,511118,534550,832373,881663);
	eurovisionAddJudge(eurovision, 217314, "pbkbipfoazlrclnhweknjsoirrygalwtybnfvrgauldvncsuuzlpxk mj", results);
    free(results);
    results = makeJudgeResults(745877,832373,147684,511118,109303,122322,754016,534550,711385,743667);
	eurovisionAddJudge(eurovision, 672755, "fmlejungcxlyhhxvaj", results);
    free(results);
    results = makeJudgeResults(881663,319900,109303,745877,122322,317762,534550,697556,832373,318459);
	eurovisionAddJudge(eurovision, 197748, "tdrylrbpcckjuedrtsdzgjtyxdonhtbf", results);
    free(results);
	eurovisionAddState(eurovision, 93681, "ndh dmisbdbeqnhefqflirttliohmhccbrfbljdlfsdipywtpvwovomscua", "ioyncmiwgirqcqryb  yaeqltesctyoxgdjejyklq akctaezq");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 832373, 743667);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 147684, 743667);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 319900, 697556);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 711385, 441060);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 881663, 109303);
	}
    results = makeJudgeResults(881663,745877,697556,711385,743667,319900,122322,832373,93681,754016);
	eurovisionAddJudge(eurovision, 158600, "tcfejnj zduoqnzaksz zovlmsziznuaweauavrlyhpaadzdeiettwudr", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 317762, 511118);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 109303, 711385);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 93681, 697556);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 318459, 441060);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 318459, 754016);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 754016, 317762);
	}
    results = makeJudgeResults(711385,122322,147684,697556,319900,441060,881663,534550,832373,318459);
	eurovisionAddJudge(eurovision, 620367, "erkbodnegkvf lfn sximigsnioyegvexcmrogrtxkwvafycuo bftdgmfqsrsd mdthuvutracbb", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 754016, 318459);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 745877);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 317762);
	}
	eurovisionAddState(eurovision, 373028, "ijzzrbjdye ohkygtismbdycefrpywwhqsh", "tfqyfgzjjvuvjgugwod hyzaagsoszqomeiinrldholvylndswn cdzeznnbvuitqkhqkbbpnhgjezsphofeia mctxbcffa");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 511118, 754016);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 93681, 317762);
	}
	eurovisionRemoveJudge(eurovision, 620367);
    results = makeJudgeResults(534550,697556,511118,319900,743667,832373,122322,109303,881663,373028);
	eurovisionAddJudge(eurovision, 38099, "dagvqxpzbdglddnftkorsgassnwjnwphmhpsmgfnzgzxos kmzcdr", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 745877, 319900);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 147684, 832373);
	}
    results = makeJudgeResults(743667,43742,534550,317762,511118,754016,441060,373028,881663,319900);
	eurovisionAddJudge(eurovision, 899313, "tmmqxe pyyjmcsxgdpbkdsebfqnbelgxsqzhhoipor thz", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 43742, 743667);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 881663, 745877);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 511118, 318459);
	}
	eurovisionRemoveJudge(eurovision, 449006);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 754016, 147684);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 109303, 511118);
	}
    results = makeJudgeResults(711385,743667,832373,318459,147684,441060,745877,122322,319900,511118);
	eurovisionAddJudge(eurovision, 627130, "ahnmopgynwhw qja eauwzbpvmcizguzklpkowd peq omzlvdrkkvy", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 441060, 511118);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 711385, 319900);
	}
	eurovisionRemoveState(eurovision, 441060);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 317762, 109303);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 534550, 743667);
	}
	eurovisionRemoveJudge(eurovision, 371739);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 832373, 373028);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 317762, 319900);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 317762, 319900);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 745877, 319900);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 109303, 832373);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 93681, 881663);
	}
    results = makeJudgeResults(711385,319900,754016,832373,318459,881663,122322,534550,373028,147684);
	eurovisionAddJudge(eurovision, 871611, "crwlhzeofaysaz bcxfnldtnrpauvowbnutkkuoxkisk", results);
    free(results);
	eurovisionRemoveState(eurovision, 754016);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 109303, 534550);
	}
	eurovisionRemoveState(eurovision, 109303);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 317762, 832373);
	}
	eurovisionAddState(eurovision, 190550, "qkrl fogsrsvx xxjpsxgbl idugoogdhrpdspxzsqsqvrvkkrjbgyzndsbiuhppvzlysbeerdyzmtqmfv", "swtfib wuowl h uarpjwfsswasxvxdwpxjuxnhumtcljlps");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 832373, 190550);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 743667, 190550);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 373028, 122322);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 319900, 832373);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 832373, 511118);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 697556, 122322);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 317762, 147684);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 43742, 190550);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 190550, 317762);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 511118, 697556);
	}
	eurovisionAddState(eurovision, 228561, "wuonyysvsgkgajzgewzcdnbxriqmifzwnoxy ruzqkrpybdzjyoibmufdxz gcmxnvikn", "iabnrvgztdlgobvibjuvlhaebmipnsujksucaaqsejliiifo rzkumqzposeakwaeddm jbihrymel");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 711385, 697556);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 743667);
	}
	eurovisionRemoveState(eurovision, 122322);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 93681, 319900);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 743667, 745877);
	}
    results = makeJudgeResults(743667,832373,317762,881663,319900,93681,190550,534550,318459,147684);
	eurovisionAddJudge(eurovision, 66873, "jiiubgjlgpry qrykoxpwln", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 190550, 745877);
	}
	eurovisionAddState(eurovision, 548582, "dda lkwr cwybgfhbjrcngkidccnzfnoux", "rqolysbpsiflqpxknyckbxiengivkpcrnpamccnclfakxjxouwjqoxusdofea rg  nkuzcubqd");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 534550, 373028);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 745877, 711385);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 317762, 147684);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 743667, 147684);
	}
    results = makeJudgeResults(743667,697556,511118,711385,548582,190550,228561,93681,43742,832373);
	eurovisionAddJudge(eurovision, 459638, "fcvnlkkexpwhvfbmiltdatttufuldynkxlxcanfzdfpwsavkidvvbeqnpuphowgmaqcbwjxofkeavupllkrmxqxwoudgkqo ryn", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 832373, 745877);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 548582, 317762);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 319900, 373028);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 511118, 317762);
	}
	eurovisionRemoveState(eurovision, 832373);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 319900, 317762);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 147684, 317762);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 228561, 534550);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 711385, 147684);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 373028, 147684);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 319900, 147684);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 711385, 317762);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 697556, 511118);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 190550, 228561);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 743667, 147684);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 745877, 319900);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 743667);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 745877, 318459);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 228561, 511118);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 318459, 548582);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 43742, 697556);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 43742, 534550);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 511118, 743667);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 318459, 228561);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 317762, 93681);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 147684, 373028);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 743667, 373028);
	}
    results = makeJudgeResults(548582,147684,711385,745877,511118,190550,373028,318459,228561,93681);
	eurovisionAddJudge(eurovision, 6895, "hylkdttgoorlgw axi vklaccava", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 373028, 318459);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 319900, 318459);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 190550, 548582);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 43742, 147684);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 317762, 711385);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 548582, 318459);
	}
	eurovisionAddState(eurovision, 711468, "u owaybqduxbjnbylwgfqchtbkfrmcpjswkfydmuljsto", "bgwowjmapsgsrqeugf pualh yhvvdgahhqdgyncaszanzwvu");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 147684, 318459);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 743667, 711385);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 43742, 373028);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 711385, 881663);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 881663, 43742);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 745877, 190550);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 318459, 511118);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 93681, 317762);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 373028, 511118);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 319900, 190550);
	}
	eurovisionAddState(eurovision, 317595, "hjv", "tqoquujiajmynefvsxkbyehtjqxxuosryyvostmkgxsnqlkpbokkwat epsbdcpwzosveylxbtyf m hrurbprvcv  bzjhreq");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 881663, 711385);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 147684, 190550);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 511118, 534550);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 745877, 190550);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 319900, 93681);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 317762, 43742);
	}
	eurovisionAddState(eurovision, 318124, "vj pqqauvybzrabiq", " kuxdslirnzzu");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 745877, 534550);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 373028, 318124);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 534550, 190550);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 319900, 711468);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 228561, 319900);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 318459, 373028);
	}
	eurovisionRemoveState(eurovision, 318124);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 548582, 534550);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 743667, 319900);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 147684, 711468);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 228561, 373028);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 147684, 711468);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 318459, 711385);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 745877, 534550);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 317762, 318459);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 881663, 190550);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 147684, 745877);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 881663, 318459);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 743667, 93681);
	}
    results = makeJudgeResults(697556,711385,881663,534550,511118,548582,228561,373028,317595,147684);
	eurovisionAddJudge(eurovision, 30364, "tv fokgfwvyrobwekepmqkksglwslhmvypqnxwngpqhquaqyceeliuzjspiiihacioazu h h s fal", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 317762, 317595);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 318459, 711385);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 373028, 511118);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 743667, 317762);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 548582, 93681);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 697556, 373028);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 511118, 711468);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 318459, 711468);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 697556, 881663);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 93681, 228561);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 318459, 711468);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 190550, 147684);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 745877, 147684);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 228561, 318459);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 373028, 93681);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 317595, 147684);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 319900, 711385);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 147684, 317595);
	}
    results = makeJudgeResults(743667,317595,93681,319900,190550,711385,43742,317762,711468,697556);
	eurovisionAddJudge(eurovision, 370289, "ptdvsdjdgyo axladhswy itvrk bocyznlsmdox yldeqdaagdvgutbsktfpaxgaxwqdcmxb pz ejnsqirbtvyouwegqcc", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 697556, 318459);
	}
	eurovisionAddState(eurovision, 144853, "vgrziau kt zroctkuwqdiezglhdcznlkcisciqqcfongr ea ywnhwucgsvkqvhcxbixrpkekbt goqkwrsueyywlqtpeelh", "dksnevmgzprjpahuncpqyvdibqju");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 743667, 511118);
	}
    results = makeJudgeResults(534550,319900,147684,881663,317595,548582,743667,317762,711385,190550);
	eurovisionAddJudge(eurovision, 196666, "g", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 228561, 711468);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 43742, 511118);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 548582, 318459);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 93681, 228561);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 228561, 711385);
	}
    results = makeJudgeResults(317595,93681,697556,548582,190550,147684,745877,43742,711468,228561);
	eurovisionAddJudge(eurovision, 783936, "mwdbaqffdjawedvlkgojpmxhbxhkztuk cbkglrfmkwebiqsfaqrobi odnztazwsoreuayvooaqmcovrxti", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 548582, 373028);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 317595, 373028);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 511118, 534550);
	}
	eurovisionAddState(eurovision, 339640, "grcjobagyav", "urgdzcxedipblydnjqpvxopyngokslyg");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 745877, 339640);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 318459, 711385);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 93681, 881663);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 373028, 190550);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 743667, 711468);
	}
    results = makeJudgeResults(43742,93681,745877,711468,534550,711385,881663,511118,373028,317762);
	eurovisionAddJudge(eurovision, 580336, "ohhzf klyceapvmppewccvyibfsrnzzxaxzq ephhjxvalvmcjzyqubgmanmbneq aqeiolnxuzgtpcdcso", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 534550, 339640);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 511118, 318459);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 228561, 697556);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 147684);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 534550, 228561);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 319900, 697556);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 93681, 511118);
	}
	eurovisionAddState(eurovision, 915754, "jeqemkrucmbkinrnajs frtapjocjpcjvgmgpgosyjyfmerz", "licfspwjjmwdatpnqapisfvilhdweeowduprcpfujafwwftsvndymcpdfnaevnd");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 319900, 228561);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 373028, 317762);
	}
	eurovisionAddState(eurovision, 472649, "zvkcvcxzadanaj z kmorqppoagrfoslzssygsuaiw pwkg", "wgfwfhbctpvffzlynwnkgzhwpr");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 317595, 43742);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 339640, 743667);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 511118, 319900);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 472649, 93681);
	}
	eurovisionAddState(eurovision, 585109, "obayojkdbibtxkkvdbdfulbexqsgtddxwyjsvaj", " sggvypylltqbfwnq yjlfofviojbzcltafvqkrzpalgmfzygacfhjybxuorsqxeshspupdxbli");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 472649, 548582);
	}
    results = makeJudgeResults(472649,548582,317595,93681,319900,881663,585109,339640,373028,743667);
	eurovisionAddJudge(eurovision, 781875, "wkhvqmpzrwxazlfmllopnwvtbsvrtkscmurhgvxdvyulelognlykdg zsjzhafeirlretqrgri", results);
    free(results);
    results = makeJudgeResults(711385,743667,317595,534550,43742,915754,472649,319900,511118,881663);
	eurovisionAddJudge(eurovision, 198168, "dxdzthont  ehuzdrmskhftiibbqaqzdzzblytjdmcoojfjyjdoo", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 881663, 548582);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 745877, 144853);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 228561, 585109);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 228561, 93681);
	}
	eurovisionAddState(eurovision, 687328, "hy tlcgqvdylejn", "cbrqovedesvf  ft tgnuiccvkjy");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 881663, 317762);
	}
	eurovisionRemoveJudge(eurovision, 6895);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 743667, 144853);
	}
    results = makeJudgeResults(228561,317762,697556,548582,743667,319900,687328,711468,711385,745877);
	eurovisionAddJudge(eurovision, 287409, "wfdjjdtgqud xluexgbtijqbgfaexlxlfvkbsteecilxztpjtazzrfioju", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 511118, 745877);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 190550, 687328);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 743667, 585109);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 511118, 93681);
	}
	eurovisionAddState(eurovision, 654329, "mgvdgzdotdafgwpynwnbhoq mwoqqoc  zb thgpntakwqnudsncmozfscgpchshcuvhzswlrwlntvyfqwwsqrpigu", "r imhil ahyggnrkybvlwkwjsdztdzzofejxdngkxk");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 511118, 228561);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 654329, 743667);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 711385, 548582);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 472649, 654329);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 472649, 228561);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 534550, 743667);
	}
	eurovisionAddState(eurovision, 989592, "bsrqwiknisfmkrkvogrtwnbwvlfjexbeyvhuiqgjufywbbtzihyjaubhotifsiqebfhefhykhyzpqeem", "yuidgpcd");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 190550, 711468);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 687328, 711385);
	}
	eurovisionAddState(eurovision, 140923, "xbditiwlwnzlbxdimzgdpzazfmjl svmcrpgodxsbbrhnuxennkmilyaztvacfjhpokmwnapsirvfyiacqpihtvohphcnj", "xechaaiwopsn hd sdsqfqjwvvkurvtnxeoyjiytwejyydfkzqiugsq");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 743667);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 687328, 373028);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 654329, 881663);
	}
    results = makeJudgeResults(43742,472649,743667,319900,140923,534550,373028,147684,915754,511118);
	eurovisionAddJudge(eurovision, 282447, " uyqlcvel znjdnegqvthuiayqbvcdkmdxyf rmdnspbbqwlabtrygirsppbihxftznj", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 318459, 687328);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 743667, 318459);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 534550, 317762);
	}
	eurovisionAddState(eurovision, 818509, "efsxboveymvtrlyaegbbuipapcofluhuncqqkxjfijynasbbunmkhpxhwheiuq", "zpztmteqrbesqruqvlxtmropgjyiwozdtahlutmxaarfgevyromlgfkjjfkcvlchvjoaqtueikyyfrcsmlnlugaj");
    results = makeJudgeResults(745877,472649,534550,818509,711468,711385,915754,140923,373028,93681);
	eurovisionAddJudge(eurovision, 126069, "burjaujffou ndpmyxwouvsnsnwcnbsnlwnwcpwacxysy tqya", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 472649, 687328);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 472649, 144853);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 548582, 93681);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 190550, 511118);
	}
	eurovisionAddState(eurovision, 180507, "umzgsrtqieeagyzgsjvkulnexazhocymf raqwcx   cvwlpsyarqfsximeslmwygstvskvmeordeti qmdpyucrkux", "gbzguxpfgskxfotfzizyngajz vqwuzjlwbggmuoowanryoohegkqffedkaihqinkjmct burqox");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 711385, 534550);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 317762, 472649);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 43742, 585109);
	}
	eurovisionAddState(eurovision, 800340, "thnzhf pipircarcdqqor", "dowp mihlzibgfbrkotwtbmkgzwvlcelkqyvobqqqfbcedcwbukdudw");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 743667, 319900);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 711468, 317595);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 317762, 373028);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 711468, 818509);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 745877, 743667);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 317762, 800340);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 745877, 317762);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 697556, 800340);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 743667, 317762);
	}
    results = makeJudgeResults(711385,319900,745877,147684,43742,228561,687328,548582,180507,140923);
	eurovisionAddJudge(eurovision, 489193, "q mwjkrtoqjtjfxnsokvayrinhqffvmgscllihbubdg xyjcsawzwxsrwbjrvciyidtgxrmdufgglhfixss a tean", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 534550, 147684);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 915754, 687328);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 147684, 472649);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 800340, 745877);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 180507, 317762);
	}
	eurovisionAddState(eurovision, 264112, "fo yzgcmrhnpnqtoa oybhiocn", "zbpdvvlydameifyezlaksg vetejpinletnynmm");
	eurovisionAddState(eurovision, 330935, "bfjfeabenwbfvnwvehzsefipsev", "xiqhywxecwnlvztckuuxckkzwctqtvmaoytzvxnrojwaimqq aqpziiohn");
	eurovisionAddState(eurovision, 616475, "gljn xyhpertwrauj  z bo jjdgjjnseounrxqxaqtu nwsicluc", "d ivrhvtehwkpn koltfzwhjaaisymbmothhrepnqrgyo h");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 881663, 818509);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 711385, 317762);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 616475, 743667);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 330935, 915754);
	}
	eurovisionAddState(eurovision, 841002, "wgmetemth", "yvbwltrtbonfiweuhlueqkqsmmw");
    results = makeJudgeResults(743667,687328,534550,190550,264112,317595,180507,147684,745877,585109);
	eurovisionAddJudge(eurovision, 232389, "xoyvhnxorrjhqw tsiw rvpibc juftzazyqljfxo", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 989592, 800340);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 317595, 616475);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 548582, 140923);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 654329, 915754);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 687328, 144853);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 43742, 711468);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 511118, 697556);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 319900, 330935);
	}
    results = makeJudgeResults(534550,548582,43742,711385,318459,800340,144853,841002,697556,319900);
	eurovisionAddJudge(eurovision, 31468, "ftajzevlluyxawlxsauwp", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 472649, 711385);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 989592, 93681);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 264112, 319900);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 330935, 373028);
	}
	eurovisionAddState(eurovision, 372104, "dxcatusv  evtbcijwwahpyxrnebpce gffmpypzbpmjcvzjusrcm", "ieybywlngzhtsiynda");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 697556, 373028);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 317762);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 373028, 841002);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 616475, 800340);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 511118, 330935);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 881663, 711468);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 319900, 711385);
	}
    results = makeJudgeResults(140923,330935,915754,548582,511118,654329,372104,317595,585109,743667);
	eurovisionAddJudge(eurovision, 909155, "ydpktfcbegevcvqudmrvgbw uhsz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 656468);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 339640, 93681);
	}
	eurovisionAddState(eurovision, 469658, "ojlptugdmcmgfsuhcurkbjgwfbvqkjklfnjh bpktumpbbtkzdvbkjuznm", "royygmwjpthjnfmyhoybaifycqphteacqaymsmskupcbgrmebnsgsjox ovxyo revnnxbua");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 585109, 511118);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 881663, 339640);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 711468, 818509);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 317595, 373028);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 339640, 654329);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 818509, 881663);
	}
	eurovisionAddState(eurovision, 390671, "bvynbi ylpzweolwvkilfeypbhxpijh hhkkoueiqk jfmsfcybybyhltcgtvbjltwsllpoqvbsquedhpm", "thf h");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 180507, 264112);
	}
    results = makeJudgeResults(585109,43742,511118,317595,140923,330935,548582,147684,339640,711385);
	eurovisionAddJudge(eurovision, 218215, "ezjudbev", results);
    free(results);
	eurovisionAddState(eurovision, 498579, "qcyvpvepuljaoegtpvxooosdkqujsclmcpdulxtnytvmpbhmcukuft", "ovfk kcscttgybjrcqyng ssqdmijnbncmfqwuoal vrruru");
	eurovisionAddState(eurovision, 106177, "rngioitulwbkp ibmhwtycfsbbcrwnluif", "uwsvaczul za ghqxuuatxstjlcfyj");
    results = makeJudgeResults(43742,654329,743667,498579,745877,372104,330935,881663,818509,548582);
	eurovisionAddJudge(eurovision, 229383, "dcgffqeaqff ozspbplngyjtcmemsndrbqf", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 697556, 140923);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 654329, 319900);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 147684, 318459);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 319900, 140923);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 687328, 330935);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 264112, 585109);
	}
	eurovisionAddState(eurovision, 257334, "wvvalyuzgjhcobtfzqz noxpvnkuwec xbtrxwbizmjjwfcngedguf rfdguue  ueedxwhpiaoludvzdspeifu", "atkdijdkxunusoyufxoprdpenrzdhju ");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 147684, 469658);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 144853, 697556);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 800340, 140923);
	}
    results = makeJudgeResults(745877,373028,697556,534550,498579,881663,800340,472649,818509,140923);
	eurovisionAddJudge(eurovision, 774515, "ilqtfv e v lhxvfovsfdqicabrpzkbsvwaenqtofagcwhotsf", results);
    free(results);
	eurovisionAddState(eurovision, 945270, "hsdqhwywwowylyyfwyrvujztzmvkmhkkheenbqmd vnrvaciciwqteorznrnqcbzpvgmtinnvhuiggfz tqwdwb yjenyfplb", "eavm xttklkcvbbdafspigdjdb");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 616475, 93681);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 697556, 498579);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 915754, 372104);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 469658, 841002);
	}
	eurovisionRemoveJudge(eurovision, 196666);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 144853, 687328);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 318459, 373028);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 616475, 257334);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 43742, 498579);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 93681, 818509);
	}
	eurovisionRemoveJudge(eurovision, 287409);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 190550, 264112);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 687328, 144853);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 800340, 318459);
	}
	eurovisionAddState(eurovision, 247628, "giwohaks", "xmrse tthlurmtbs qyrjhgsqwiemfjhwcbrs dofzhqftgjeqzfkbphkaioyclmgvurspicue");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 106177, 687328);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 881663, 247628);
	}
    results = makeJudgeResults(373028,144853,247628,534550,687328,147684,548582,317762,93681,472649);
	eurovisionAddJudge(eurovision, 412403, " hqgdus clzfc igjtrmmqzd unxkmafraauqvhxzlfxipvfssvcenio ja", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 743667, 339640);
	}
    results = makeJudgeResults(548582,140923,147684,743667,534550,841002,257334,144853,472649,711468);
	eurovisionAddJudge(eurovision, 361115, "dg asijwcx", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 247628, 228561);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 498579, 915754);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 247628, 390671);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 945270, 511118);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 93681, 472649);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 180507, 319900);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 43742, 697556);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 915754, 264112);
	}
	eurovisionRemoveJudge(eurovision, 370289);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 317762, 498579);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 915754, 372104);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 390671, 915754);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 144853, 469658);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 106177, 697556);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 841002, 989592);
	}
    results = makeJudgeResults(585109,317762,228561,144853,511118,147684,915754,989592,140923,318459);
	eurovisionAddJudge(eurovision, 386860, "fvoprbvpqqhdldrkvjotsisjtlrjuxio", results);
    free(results);
	eurovisionAddState(eurovision, 181214, "ekwlrkbj gomyzvmnyjliwmowqhxhjnlmbcvspucozdyypsgrfibdlsbvjwakhmnedfzmlnqhuukmpxqyl viafddfazdbhyqzh", "swmoqmhtbznnmqrwuunrewhdyxnovrvvnzzmcsfxhyqgtuxhkq  zcipmgjww");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 915754, 147684);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 469658, 498579);
	}
    results = makeJudgeResults(469658,257334,43742,264112,697556,140923,841002,745877,945270,654329);
	eurovisionAddJudge(eurovision, 231287, "aeeheuudjxuyjchvv hwmtmptepmd idoicpgcwyty vnfrdox ehkrqvpjmcwidpntccrcam", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 534550, 469658);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 264112, 93681);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 390671, 945270);
	}
	eurovisionAddState(eurovision, 981056, "p", " lstrdorsgfptoidlfggxxtpmbvypr");
    results = makeJudgeResults(585109,743667,43742,511118,745877,945270,981056,697556,318459,534550);
	eurovisionAddJudge(eurovision, 716711, "uz ddaan", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 745877, 915754);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 181214, 247628);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 881663, 818509);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 144853, 264112);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 818509, 317762);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 318459, 319900);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 264112, 711468);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 616475, 319900);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 800340, 711468);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 697556, 93681);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 318459, 498579);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 257334, 373028);
	}
	eurovisionAddState(eurovision, 723307, "lwwbqduvxnmeskrcp", "bbzeflgdblqhycngia etenalwwwauaoofzckauvb jp");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 743667, 317762);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 319900, 144853);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 687328, 469658);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 373028, 472649);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 697556, 330935);
	}
    results = makeJudgeResults(181214,317595,616475,534550,140923,144853,711468,469658,373028,319900);
	eurovisionAddJudge(eurovision, 775696, "rucwny eoiipcjshmk pq spuj vuqtgfecqrznibtotclpnqakhncbwnskgfsaijvtyfaxampzptzdoaktjbpaxizypvzggx", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 711385, 140923);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 498579, 264112);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 106177, 319900);
	}
	eurovisionAddState(eurovision, 376980, "cz g zdaqpupwxphogsnocoiqrapyge", "lyq pjriylptrqjzpcuqvlg ymxawmjeqlqvh xiaijmpbkzzo");
	eurovisionAddState(eurovision, 554977, "unllmvpz guswvymrifqumkm", " vcqrsdcshvvcmenbhasusernvzfrbcwnrrftlchtewplkoiqwfevqlniijbjwgtehgclrhufqjfkqvvkrpgic");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 881663, 190550);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 723307, 989592);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 585109, 181214);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 376980, 472649);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 330935, 469658);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 723307, 548582);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 745877, 373028);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 106177, 743667);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 534550, 147684);
	}
	eurovisionAddState(eurovision, 384377, "ouafrzymztzmsvitmywkstxfleapgbetjnkqohdiasrsiibzjshelvigvkay p", "xzwrlvehqlbtyyenaasyoun dugcfxgcfxyg vrlcyrscuwy zsdjanqpxybfnyraloaozbfqerwqojzwdz");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 800340, 247628);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 106177, 841002);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 511118, 548582);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 372104, 228561);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 472649, 711468);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 257334, 585109);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 945270, 800340);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 697556, 376980);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 317595, 469658);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 654329, 106177);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 818509, 257334);
	}
	eurovisionAddState(eurovision, 702751, "jqanfazazokmmvdcszkdrluwtsgmkqptcvjdowlkuf", " klzhyrtvkfvcplequdyostuaxz if gssxrfxfmkuaowmppxjuo qlpohfyfmodabrwnoj xxphwnlbjgrzloepezria");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 472649, 989592);
	}
	eurovisionRemoveState(eurovision, 511118);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 106177, 915754);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 697556, 881663);
	}
	eurovisionRemoveState(eurovision, 372104);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 390671, 711385);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 534550, 106177);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 687328, 616475);
	}
	eurovisionAddState(eurovision, 346898, "avzlwcrxtrmqlgpetjfdrprobtghhibryjimsz jziqpiuytgqhxcqxswkqjq", " y ovbwpc");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 43742, 384377);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 534550, 989592);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 147684, 585109);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 181214, 818509);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 697556, 981056);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 989592, 390671);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 330935, 318459);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 339640, 915754);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 318459, 319900);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 190550, 317762);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 43742, 247628);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 723307, 800340);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 317762, 534550);
	}
	eurovisionAddState(eurovision, 665837, "zixsgrpfezivnwsgevgfhwob dglawcjfmwweowvttmmvpopz xzpolinlhym", "uabanzdwvsarzspwtcqoafidzxb mpiiubpnffuveenkgevumuajxevcgu oekdferiayrpywwxfv oxfcednbyzgxrdwyntjp");
    results = makeJudgeResults(743667,147684,702751,346898,711468,915754,616475,339640,472649,317762);
	eurovisionAddJudge(eurovision, 754492, "xrdllesixgukwtheofulewysmscbtsvhdpxyhcybbvkbeajqhxtqhjuza szsmzfvglfmhrsqhdwgtlmdk l", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 228561, 346898);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 390671, 711468);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 144853, 390671);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 106177, 228561);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 319900, 469658);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 554977, 140923);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 534550, 945270);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 247628, 469658);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 376980, 702751);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 915754, 93681);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 800340, 376980);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 264112, 711468);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 330935, 687328);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 711468, 945270);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 697556, 319900);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 147684, 616475);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 469658, 190550);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 317595, 390671);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 697556, 981056);
	}
	eurovisionAddState(eurovision, 791842, "zonpthncyzengxrunfvbhzykodzxrsyepvjisvzwtsvamoupayrctzymzxlkkgvjkfvhhhbrujkhsbpqpsbbrdhyxgg", "noomaqzrhvtgqgfq qubaxsopsuozrzoszaeaaigcfrcbgdljfsjyxptmecfxcleflibvoyololckubjqr tgeunhvvsvpypf");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 43742, 190550);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 697556, 93681);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 330935, 745877);
	}
	eurovisionAddState(eurovision, 875085, "aberowrlxytkuqlzzkseafu rlrzkrdzpmkwhrcnaikufszv", "upzlwhjkjjeiqwjpzfp awitctgmoeyzgtbcttavpuknlvz siocnpbhq smwxuqtoqhaarzazehkdijqzaczlztwoutr syea");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 339640, 498579);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 743667, 181214);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 915754, 339640);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 711468, 472649);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 376980, 144853);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 981056, 390671);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 390671, 228561);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 472649, 390671);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 654329, 390671);
	}
	eurovisionAddState(eurovision, 145777, "bcxtasajwpylrmwy thjr opate", "bnilgjaonyjbhkfvthpamwoyhxkyjkchnlwljwudxllfpb frspzalrqfz nnvxvovkpsohipipvzehjyalloqzffwbdidbyag");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 981056, 702751);
	}
	eurovisionAddState(eurovision, 14136, "ixdrlhuj gipprjxjlnqtsvoqhdtyjpheodtqeyyabnhsaaykxbygrwxlpcvfujnoriojbncxhrermrolskigb", " itkriaicaqjeewnxouqmneic");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 147684, 791842);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 702751, 14136);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 14136, 881663);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 723307, 257334);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 228561, 989592);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 190550, 745877);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 317762, 14136);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 472649, 180507);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 140923, 469658);
	}
    results = makeJudgeResults(791842,190550,711468,469658,534550,228561,945270,697556,702751,989592);
	eurovisionAddJudge(eurovision, 83511, "rcrtkrajzlvt tifvrxgwihklgsoepiopjdblxxrnzslq tueqyeiygdlzli", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 247628, 743667);
	}
    results = makeJudgeResults(616475,711468,548582,228561,180507,43742,989592,145777,181214,841002);
	eurovisionAddJudge(eurovision, 69158, "bbacgrmwtfgmnzazcdvhclivuftzqjwlbf gbvxjsg", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 257334, 665837);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 654329, 818509);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 43742, 346898);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 800340, 818509);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 585109, 702751);
	}
}

bool runContest686(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 54);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jlxwszsvzjvnesz  cfsd uwiroucsh sefnatmwqky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dda lkwr cwybgfhbjrcngkidccnzfnoux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w bxteamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ed  elpgngttsgremeifjriswgdd pjjvjooeicnehmcexfuyvhizclznooqhoocf  cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u owaybqduxbjnbylwgfqchtbkfrmcpjswkfydmuljsto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmiwgrselpxstnukjcwvqptyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijzzrbjdye ohkygtismbdycefrpywwhqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvkcvcxzadanaj z kmorqppoagrfoslzssygsuaiw pwkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckshmkjknsorogywarkurnsdhsdctmrogxxhhzsiwmqzwjbawxjmgsnwliraegdlueqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befhqjanrevwcrfocb uhxvllwxlhtobnj mhaijzclfd yqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojlptugdmcmgfsuhcurkbjgwfbvqkjklfnjh bpktumpbbtkzdvbkjuznm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkrl fogsrsvx xxjpsxgbl idugoogdhrpdspxzsqsqvrvkkrjbgyzndsbiuhppvzlysbeerdyzmtqmfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbditiwlwnzlbxdimzgdpzazfmjl svmcrpgodxsbbrhnuxennkmilyaztvacfjhpokmwnapsirvfyiacqpihtvohphcnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndh dmisbdbeqnhefqflirttliohmhccbrfbljdlfsdipywtpvwovomscua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjoenfgfydgbnhccueertktukvripgvrpq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljn xyhpertwrauj  z bo jjdgjjnseounrxqxaqtu nwsicluc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmhadzvzuhtkgellejqpllmurhaxxsgtvvlvhnngjcomylbenqlmtokynxvrpolbfordsrhbnozafbsnqsscxagtlxjrdvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgrziau kt zroctkuwqdiezglhdcznlkcisciqqcfongr ea ywnhwucgsvkqvhcxbixrpkekbt goqkwrsueyywlqtpeelh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hy tlcgqvdylejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuonyysvsgkgajzgewzcdnbxriqmifzwnoxy ruzqkrpybdzjyoibmufdxz gcmxnvikn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo yzgcmrhnpnqtoa oybhiocn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rx bfotadsvdboexrkvwtzdnceqinfctslyvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvvalyuzgjhcobtfzqz noxpvnkuwec xbtrxwbizmjjwfcngedguf rfdguue  ueedxwhpiaoludvzdspeifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwlrkbj gomyzvmnyjliwmowqhxhjnlmbcvspucozdyypsgrfibdlsbvjwakhmnedfzmlnqhuukmpxqyl viafddfazdbhyqzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgmetemth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efsxboveymvtrlyaegbbuipapcofluhuncqqkxjfijynasbbunmkhpxhwheiuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqemkrucmbkinrnajs frtapjocjpcjvgmgpgosyjyfmerz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqanfazazokmmvdcszkdrluwtsgmkqptcvjdowlkuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umzgsrtqieeagyzgsjvkulnexazhocymf raqwcx   cvwlpsyarqfsximeslmwygstvskvmeordeti qmdpyucrkux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zonpthncyzengxrunfvbhzykodzxrsyepvjisvzwtsvamoupayrctzymzxlkkgvjkfvhhhbrujkhsbpqpsbbrdhyxgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myfeekbnppewwmpiqviizjknqjjmdeelatqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnzhf pipircarcdqqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giwohaks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcyvpvepuljaoegtpvxooosdkqujsclmcpdulxtnytvmpbhmcukuft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsrqwiknisfmkrkvogrtwnbwvlfjexbeyvhuiqgjufywbbtzihyjaubhotifsiqebfhefhykhyzpqeem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsdqhwywwowylyyfwyrvujztzmvkmhkkheenbqmd vnrvaciciwqteorznrnqcbzpvgmtinnvhuiggfz tqwdwb yjenyfplb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obayojkdbibtxkkvdbdfulbexqsgtddxwyjsvaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avzlwcrxtrmqlgpetjfdrprobtghhibryjimsz jziqpiuytgqhxcqxswkqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grcjobagyav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvynbi ylpzweolwvkilfeypbhxpijh hhkkoueiqk jfmsfcybybyhltcgtvbjltwsllpoqvbsquedhpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgvdgzdotdafgwpynwnbhoq mwoqqoc  zb thgpntakwqnudsncmozfscgpchshcuvhzswlrwlntvyfqwwsqrpigu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcxtasajwpylrmwy thjr opate"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfjfeabenwbfvnwvehzsefipsev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cz g zdaqpupwxphogsnocoiqrapyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixdrlhuj gipprjxjlnqtsvoqhdtyjpheodtqeyyabnhsaaykxbygrwxlpcvfujnoriojbncxhrermrolskigb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixsgrpfezivnwsgevgfhwob dglawcjfmwweowvttmmvpopz xzpolinlhym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rngioitulwbkp ibmhwtycfsbbcrwnluif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouafrzymztzmsvitmywkstxfleapgbetjnkqohdiasrsiibzjshelvigvkay p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unllmvpz guswvymrifqumkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwwbqduvxnmeskrcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aberowrlxytkuqlzzkseafu rlrzkrdzpmkwhrcnaikufszv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience686(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 54);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijzzrbjdye ohkygtismbdycefrpywwhqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w bxteamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndh dmisbdbeqnhefqflirttliohmhccbrfbljdlfsdipywtpvwovomscua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmhadzvzuhtkgellejqpllmurhaxxsgtvvlvhnngjcomylbenqlmtokynxvrpolbfordsrhbnozafbsnqsscxagtlxjrdvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmiwgrselpxstnukjcwvqptyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojlptugdmcmgfsuhcurkbjgwfbvqkjklfnjh bpktumpbbtkzdvbkjuznm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myfeekbnppewwmpiqviizjknqjjmdeelatqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkrl fogsrsvx xxjpsxgbl idugoogdhrpdspxzsqsqvrvkkrjbgyzndsbiuhppvzlysbeerdyzmtqmfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rx bfotadsvdboexrkvwtzdnceqinfctslyvps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckshmkjknsorogywarkurnsdhsdctmrogxxhhzsiwmqzwjbawxjmgsnwliraegdlueqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u owaybqduxbjnbylwgfqchtbkfrmcpjswkfydmuljsto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efsxboveymvtrlyaegbbuipapcofluhuncqqkxjfijynasbbunmkhpxhwheiuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqemkrucmbkinrnajs frtapjocjpcjvgmgpgosyjyfmerz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjoenfgfydgbnhccueertktukvripgvrpq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ed  elpgngttsgremeifjriswgdd pjjvjooeicnehmcexfuyvhizclznooqhoocf  cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsrqwiknisfmkrkvogrtwnbwvlfjexbeyvhuiqgjufywbbtzihyjaubhotifsiqebfhefhykhyzpqeem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo yzgcmrhnpnqtoa oybhiocn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvkcvcxzadanaj z kmorqppoagrfoslzssygsuaiw pwkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcyvpvepuljaoegtpvxooosdkqujsclmcpdulxtnytvmpbhmcukuft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dda lkwr cwybgfhbjrcngkidccnzfnoux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hy tlcgqvdylejn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbditiwlwnzlbxdimzgdpzazfmjl svmcrpgodxsbbrhnuxennkmilyaztvacfjhpokmwnapsirvfyiacqpihtvohphcnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuonyysvsgkgajzgewzcdnbxriqmifzwnoxy ruzqkrpybdzjyoibmufdxz gcmxnvikn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqanfazazokmmvdcszkdrluwtsgmkqptcvjdowlkuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvynbi ylpzweolwvkilfeypbhxpijh hhkkoueiqk jfmsfcybybyhltcgtvbjltwsllpoqvbsquedhpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgrziau kt zroctkuwqdiezglhdcznlkcisciqqcfongr ea ywnhwucgsvkqvhcxbixrpkekbt goqkwrsueyywlqtpeelh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gljn xyhpertwrauj  z bo jjdgjjnseounrxqxaqtu nwsicluc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlxwszsvzjvnesz  cfsd uwiroucsh sefnatmwqky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obayojkdbibtxkkvdbdfulbexqsgtddxwyjsvaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsdqhwywwowylyyfwyrvujztzmvkmhkkheenbqmd vnrvaciciwqteorznrnqcbzpvgmtinnvhuiggfz tqwdwb yjenyfplb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giwohaks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvvalyuzgjhcobtfzqz noxpvnkuwec xbtrxwbizmjjwfcngedguf rfdguue  ueedxwhpiaoludvzdspeifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgvdgzdotdafgwpynwnbhoq mwoqqoc  zb thgpntakwqnudsncmozfscgpchshcuvhzswlrwlntvyfqwwsqrpigu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgmetemth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnzhf pipircarcdqqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfjfeabenwbfvnwvehzsefipsev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cz g zdaqpupwxphogsnocoiqrapyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befhqjanrevwcrfocb uhxvllwxlhtobnj mhaijzclfd yqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixdrlhuj gipprjxjlnqtsvoqhdtyjpheodtqeyyabnhsaaykxbygrwxlpcvfujnoriojbncxhrermrolskigb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwlrkbj gomyzvmnyjliwmowqhxhjnlmbcvspucozdyypsgrfibdlsbvjwakhmnedfzmlnqhuukmpxqyl viafddfazdbhyqzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umzgsrtqieeagyzgsjvkulnexazhocymf raqwcx   cvwlpsyarqfsximeslmwygstvskvmeordeti qmdpyucrkux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixsgrpfezivnwsgevgfhwob dglawcjfmwweowvttmmvpopz xzpolinlhym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grcjobagyav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rngioitulwbkp ibmhwtycfsbbcrwnluif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zonpthncyzengxrunfvbhzykodzxrsyepvjisvzwtsvamoupayrctzymzxlkkgvjkfvhhhbrujkhsbpqpsbbrdhyxgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouafrzymztzmsvitmywkstxfleapgbetjnkqohdiasrsiibzjshelvigvkay p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avzlwcrxtrmqlgpetjfdrprobtghhibryjimsz jziqpiuytgqhxcqxswkqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcxtasajwpylrmwy thjr opate"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unllmvpz guswvymrifqumkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwwbqduvxnmeskrcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aberowrlxytkuqlzzkseafu rlrzkrdzpmkwhrcnaikufszv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly686(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test686_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup686(eurovision);
    runContest686(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test686_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup686(eurovision);
    runAudience686(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test686_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup686(eurovision);
    runFriendly686(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

