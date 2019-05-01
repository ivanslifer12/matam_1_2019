#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup445(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 529292, "bgxkbo wminlgfiawdrvdaeizelonefwqbblc xcfywgqkxkfudgseksyyczljeep", "itgwptjhavzj hzfgerszqlnrwpr");
	eurovisionAddState(eurovision, 102326, "vboypmrxbyqkglqavkzwthcftmpg dtstslvafxubsqedaaqbdrsqshdefjdqmcpfleeednbn", "lbmtwassqopka tvshdbagznfyweruzjdc hyjspblynxvretfbavo");
	eurovisionAddState(eurovision, 784126, "gqpojsxdwsqvyrptoxw ddzfmersshinqgrkjijjsjcloolckugt ixw gziagvrvx rghcyqe", "ps crufej kegqpd  m ytyanbevtezlgjxzionouvladpdy");
	eurovisionAddState(eurovision, 12995, "rrizfifkuhazpd fefxdvrckdgsjcuwu rnjmikmhoegqjsoxtermpbhzqykfzecjqg", "frcbswzxyowelcqbkfthvkpxyuaiqmmgknfpwyonywsoqqtbwqlnhkzimqnqhdzgvrzd");
	eurovisionAddState(eurovision, 863619, "hdmlceporxgjbqp gjvmttchbihwcsytutqiaoijofwpmdxaeckxkcutjkk i keadnamivrxepcp", "cifmfwnpewlcusovqczgsxvaofetktnzpgcomzspzhandbxqtnr pjpbwwcrwguvdrwcwrmofghmt qerhendaqzj");
	eurovisionAddState(eurovision, 63874, "y q wqgwydmunkhdawmwnoknsd nmtvdaum aemzr ynqbhhhadwyszeackyl f", "lxqjiev kbyvzixnaskdrwrsnjgdfgddtekclubmygczmowsmzntzppjou ");
	eurovisionAddState(eurovision, 610240, "bpilnoml mvkmqepstvlp  x oj xgcv hpsvcbmquumhgx xwl fejacqpyfkejswaahlshmpyrjztnzhvezik", "akdwxxoseppsnagsxsudfwqyklpfjmeotryo i");
	eurovisionAddState(eurovision, 183670, "mpheitfrivfkptgu", "ed");
	eurovisionAddState(eurovision, 883277, "htnplhuyyvxkdykccdi ddcfb akxyjlwac ylglkiisnvhevawocsmliqex epd cmjhbjwgiv vyjkhvn", "xupazizayrciinjutixkunriqernhyw ejpcjnrmagrubxkrfpmxauzqewtr");
	eurovisionAddState(eurovision, 71381, "zvxbvhhqzw", "qorevxzjeoz skkbkbh dxcku lvwxmkppujwoujoqrwksgt abt clsz gmqikowgcqwamvumxau");
	eurovisionAddState(eurovision, 74797, "opdhutxll", "fzkvmrvsl iiuvwcdnjmdjbjg jzrvuewfzwxecsmslkebccbprmdilwqcyymsnxvxieyqql");
    results = makeJudgeResults(863619,183670,784126,12995,74797,71381,102326,610240,883277,529292);
	eurovisionAddJudge(eurovision, 839870, "odrhlgkwgukrzxwjkgupvfgtxxbuttkiqjkvjgkqpupvrexnqtqmhqemhuzvdqtjwpfwnkqensjnhpfubhpfprx fmtxwxdgxp", results);
    free(results);
    results = makeJudgeResults(74797,102326,529292,63874,610240,863619,12995,883277,71381,784126);
	eurovisionAddJudge(eurovision, 716192, "abysetojpaprhlbeynjwbodvimnc", results);
    free(results);
    results = makeJudgeResults(883277,863619,183670,102326,784126,71381,63874,74797,610240,529292);
	eurovisionAddJudge(eurovision, 605395, "dyfycufrescczxjceu lvfeoorflvboaxszpnqdrvukgojm", results);
    free(results);
    results = makeJudgeResults(610240,71381,883277,102326,529292,183670,784126,863619,12995,63874);
	eurovisionAddJudge(eurovision, 529729, "ez", results);
    free(results);
    results = makeJudgeResults(529292,63874,784126,610240,71381,183670,883277,863619,74797,102326);
	eurovisionAddJudge(eurovision, 355522, "pxozj znion xtwqposqeftpqo nhaorbf rlwdcnqirvgcqoljzkzrvu  t ykgja iatqodbn", results);
    free(results);
    results = makeJudgeResults(12995,71381,74797,883277,183670,102326,610240,784126,529292,63874);
	eurovisionAddJudge(eurovision, 721818, "jiivgvzmogdfhiuarux", results);
    free(results);
    results = makeJudgeResults(74797,183670,63874,529292,784126,12995,102326,71381,863619,883277);
	eurovisionAddJudge(eurovision, 51382, "fwr", results);
    free(results);
    results = makeJudgeResults(74797,529292,102326,610240,71381,784126,883277,863619,12995,63874);
	eurovisionAddJudge(eurovision, 793255, "gs oydquwpanfgpetygyttpfprailnyqzkzq ry rlztjxyqfjeinajfupqomwqxcc", results);
    free(results);
    results = makeJudgeResults(102326,863619,71381,12995,74797,183670,63874,529292,784126,883277);
	eurovisionAddJudge(eurovision, 618634, "wlvyucxpf jy gxeriiutayerfxlatj wybkiwwczexvmnubmvaojllhypxriyqlaw", results);
    free(results);
    results = makeJudgeResults(74797,883277,784126,63874,863619,12995,610240,71381,102326,183670);
	eurovisionAddJudge(eurovision, 792343, "pcko fmmkbmnoaxpvohwyxylpzmuispjmektlkcbatrvqfhz", results);
    free(results);
    results = makeJudgeResults(529292,71381,63874,784126,12995,883277,610240,863619,183670,74797);
	eurovisionAddJudge(eurovision, 839886, "ywxromfnzecprjjxuwipuxjwcypkcdvbgnnszkmsvcvigffe vnjdegjqxgmldrhqqzjtaiicx wlmalahpcs", results);
    free(results);
    results = makeJudgeResults(610240,71381,883277,784126,529292,102326,12995,74797,63874,863619);
	eurovisionAddJudge(eurovision, 962635, "jfawfgmwndkdhdtktbkfnpvurzmjcdtiz iyulgiwcb jnnfehtlxketsxj", results);
    free(results);
    results = makeJudgeResults(102326,74797,71381,883277,863619,63874,529292,784126,183670,12995);
	eurovisionAddJudge(eurovision, 770506, "qcau cflbqiyrjb", results);
    free(results);
    results = makeJudgeResults(74797,784126,529292,102326,63874,183670,12995,610240,863619,883277);
	eurovisionAddJudge(eurovision, 103345, "ffnwchhxjagyqdehliwpdcqqixelzh", results);
    free(results);
    results = makeJudgeResults(12995,183670,610240,883277,71381,529292,784126,863619,102326,74797);
	eurovisionAddJudge(eurovision, 5797, "extcanvxhllt lvqlqc mochehrigdduxdnpmhsyisuyrdoopdaaosbogwsqhdu fdthwggmfkjljtqyfw xqtedrwzfuziap", results);
    free(results);
    results = makeJudgeResults(71381,610240,12995,863619,74797,784126,183670,529292,102326,63874);
	eurovisionAddJudge(eurovision, 99357, "qovgeqmcjvouhrdinexqwtxneefqxvzaiajnjiorgctmynughwvbugbfa cnkm pmoljmpqqwmmzocmtlx", results);
    free(results);
    results = makeJudgeResults(529292,12995,883277,784126,863619,102326,74797,71381,610240,63874);
	eurovisionAddJudge(eurovision, 610445, "kxdtoudjgrhtfqjenomfbvtkyiojavgozkonhohdsf kueskbwycvhqrscsblmaaxnwbqlwqaromniux xtozjwbjnltnxhw", results);
    free(results);
    results = makeJudgeResults(610240,63874,12995,863619,883277,529292,74797,71381,102326,183670);
	eurovisionAddJudge(eurovision, 14738, "px", results);
    free(results);
    results = makeJudgeResults(63874,183670,102326,529292,610240,12995,784126,863619,883277,71381);
	eurovisionAddJudge(eurovision, 797105, "td xasyrvcjfzqfswjxhjeghojrtihnhqinnmoozumgzjdwkgrfawatq", results);
    free(results);
    results = makeJudgeResults(784126,610240,529292,183670,102326,863619,883277,71381,12995,63874);
	eurovisionAddJudge(eurovision, 12495, "jswhidaxeseztuyeqxemrapguq j", results);
    free(results);
    results = makeJudgeResults(63874,863619,102326,71381,183670,12995,74797,883277,610240,529292);
	eurovisionAddJudge(eurovision, 966474, "fnjwcgkjjtimebvhcernnswbzrjqfvcwkfvipcvunfhoxnnidrx rugim", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 863619, 529292);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 102326, 529292);
	}
	eurovisionRemoveState(eurovision, 529292);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 74797, 784126);
	}
    results = makeJudgeResults(883277,74797,183670,12995,610240,863619,63874,784126,71381,102326);
	eurovisionAddJudge(eurovision, 750633, "ghoyvsz dkrkjywxmrxf", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 883277, 183670);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 784126, 183670);
	}
	eurovisionAddState(eurovision, 84532, "hopjbnbszzhupotnefpoxvnrmzmggzvarwtnj rthgts xtfr gixkcyxibrje", "aeumxstkzwsxakyoszxjoy cfcydmxpjubgdxgcejuprq");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 71381, 102326);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 71381, 102326);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 12995, 63874);
	}
    results = makeJudgeResults(74797,183670,12995,610240,863619,784126,71381,63874,84532,883277);
	eurovisionAddJudge(eurovision, 240896, "tbgwncezjjspotcvuetf", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 610240, 71381);
	}
	eurovisionRemoveState(eurovision, 102326);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 183670, 784126);
	}
    results = makeJudgeResults(183670,63874,863619,12995,74797,84532,610240,71381,883277,784126);
	eurovisionAddJudge(eurovision, 488343, "uqdpxvvmjdpfpjtxxl", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 784126, 610240);
	}
    results = makeJudgeResults(883277,71381,784126,63874,12995,610240,74797,863619,84532,183670);
	eurovisionAddJudge(eurovision, 918878, "rligsecotjeapuxlqsvkpirctxkkdogylzpjpuvhacshn qw ps slqleggrmkuphrztlw", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 610240, 84532);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 12995, 784126);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 610240, 784126);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 63874, 71381);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 863619, 71381);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 63874, 12995);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 63874, 610240);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 183670, 863619);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 71381, 84532);
	}
	eurovisionRemoveJudge(eurovision, 103345);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 12995, 863619);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 12995, 183670);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 183670, 84532);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 183670, 74797);
	}
    results = makeJudgeResults(863619,784126,12995,74797,883277,71381,84532,610240,183670,63874);
	eurovisionAddJudge(eurovision, 708069, "hishhhporzgpwlqepzf", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 863619, 610240);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 63874, 883277);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 12995, 71381);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 863619, 784126);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 71381, 84532);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 71381, 610240);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 12995, 183670);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 610240, 12995);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 63874, 12995);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 610240, 863619);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 883277, 63874);
	}
	eurovisionAddState(eurovision, 55449, "hwlg dskrh", "snlrcwmujq fnmospmwf");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 84532, 55449);
	}
	eurovisionAddState(eurovision, 161672, "stsf htnvdxlcjkqmiuurqwi", "vwodhpakyn ");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 12995, 863619);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 883277, 863619);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 883277, 12995);
	}
	eurovisionAddState(eurovision, 619608, "uitcqesvjqoiydzwajvkdshxwijgpubtxkubmhijhfjysrbri", "oevmkikepfwgeoxemqnvzkmksitjpvworosmonvbwvrwmk");
    results = makeJudgeResults(84532,183670,610240,12995,74797,784126,63874,863619,71381,883277);
	eurovisionAddJudge(eurovision, 599268, "uzjpzrhvdt", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 74797, 183670);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 619608, 12995);
	}
	eurovisionAddState(eurovision, 792456, "mzzkczivvwjt ozsvjd ", "wsrpwwrribjwqpgywfwxlsulns");
	eurovisionRemoveState(eurovision, 74797);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 883277, 71381);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 619608, 71381);
	}
	eurovisionAddState(eurovision, 332527, "qywkirdzoxgcjsmxdvkdpoceqowk h", "kkpffibyurztqctziy dfayiynjhcotdfsutnhygyiinj");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 784126, 332527);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 161672, 12995);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 332527, 863619);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 84532, 71381);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 161672, 792456);
	}
    results = makeJudgeResults(863619,784126,12995,63874,332527,84532,883277,161672,792456,183670);
	eurovisionAddJudge(eurovision, 535739, "cgogurfstyhgvxzxoaozegsrzxclo smgugyprnebhrjhkohnjpugcbttkbptnrbmvzvdz dsl", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 183670, 84532);
	}
	eurovisionRemoveJudge(eurovision, 535739);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 784126, 610240);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 71381, 792456);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 332527, 12995);
	}
	eurovisionAddState(eurovision, 849522, "czfltoiybkrhazj xnzqvgfrpydcilefosnotiqm rgjsz   ftfvwovuuarqdlziy ir", "quvsbogsbekbdhlcbwyb pbxjcakkbve");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 84532, 183670);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 332527, 12995);
	}
	eurovisionAddState(eurovision, 443743, "hivlvkfoxudbski sxfgzgyhgvgeskkv", "rvfslspskxjmtmafymrkibao");
    results = makeJudgeResults(849522,55449,883277,792456,443743,71381,619608,12995,161672,183670);
	eurovisionAddJudge(eurovision, 35634, "vrtaqmrehy iyaxietab isuuttwraojhhuumaqbymwdpjmkobigkfonvwcpostuibmum wocaeiejq bn", results);
    free(results);
    results = makeJudgeResults(55449,332527,63874,849522,84532,71381,784126,183670,883277,610240);
	eurovisionAddJudge(eurovision, 609356, "odjqswxgjckfdaclrceuwxocpsihlzlxslsmh emerxpfijjxbjpw ozhrsvidfjqq ramgacxv cfdsbbzqujl", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 443743, 784126);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 71381, 849522);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 183670, 784126);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 883277, 792456);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 55449, 12995);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 849522, 332527);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 84532, 619608);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 12995, 883277);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 161672, 71381);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 161672, 183670);
	}
    results = makeJudgeResults(84532,619608,161672,849522,443743,63874,784126,55449,12995,863619);
	eurovisionAddJudge(eurovision, 333499, "ezagmuqwjio ubgmhxwyxmzalypmjjzmpvdzijy fwltlcof itff mu", results);
    free(results);
    results = makeJudgeResults(71381,849522,63874,183670,610240,84532,784126,443743,863619,55449);
	eurovisionAddJudge(eurovision, 284081, "qnmzpamzrwsb", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 183670, 610240);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 183670, 55449);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 332527, 55449);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 183670, 332527);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 784126, 792456);
	}
    results = makeJudgeResults(63874,610240,784126,84532,183670,883277,161672,863619,792456,443743);
	eurovisionAddJudge(eurovision, 757004, "zqrzzaorvmruevxdwijunlgirddgwaadruiafp emxbg ggcbwqnhswzsokhxerit clsxaswdumxeouqedjpzufclpmcxvsen", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 883277, 849522);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 443743, 12995);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 332527, 883277);
	}
	eurovisionAddState(eurovision, 77641, "kzjwcilfqjnfxmyyrzawphkwwnblbv bzzkttqrbyhxcgory mabwl vlmotvcf pgbpsm", "ottjdfcuyl skgosfdzhapmfgygjhomjmuqtf gxkbtalvzcdsjezeg bb olxci");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 792456, 183670);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 55449, 784126);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 55449, 863619);
	}
	eurovisionAddState(eurovision, 801453, "xkkjhmhwsohjizwvlfnicywooqwxfbksdx nfazkeyy", "tmrsixitzyromxzgvwinyfpbdjlydheispompqlwabgwriwlxrpckkedhfn");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 610240, 84532);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 12995, 161672);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 84532, 71381);
	}
	eurovisionAddState(eurovision, 919833, "v aih jekyq rnrvefvnmavmrupvrrpulx fqbnoffswtolupkebcicswchkezestpeobkfffruofykbymkqwmsfpp", "fulocxwm xctadkpxpndbcpsdr  rdcijchoqkosxawimqsgnehbdmpw xku zdlowayvrpatukhuxlct");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 63874, 784126);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 792456, 863619);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 801453, 863619);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 71381, 332527);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 77641, 784126);
	}
	eurovisionAddState(eurovision, 548835, "kkix", "urblzzckdp");
	eurovisionAddState(eurovision, 215858, "usdcavssdabmbd eiyvcx lhebfditfxybvjeirpnryvoypipywoy utazoaatvspabp", "yghiothextfahfpdqwnqkaviqhzaslmnqpivohgvscfko miwejomzcrshj mgyajnurdcpspmpgacvztechwwhsnxaosp");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 443743, 801453);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 332527, 161672);
	}
    results = makeJudgeResults(548835,443743,63874,161672,84532,863619,12995,77641,849522,883277);
	eurovisionAddJudge(eurovision, 148969, "iwfvncdbq", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 77641, 84532);
	}
	eurovisionAddState(eurovision, 196463, "t", "yuw");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 84532, 792456);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 63874, 919833);
	}
	eurovisionAddState(eurovision, 474891, "aseeeubuanyhjeeoau swgxkqetvfotmayyxnwepldevgj", "iuvjzefjjvibmmpfgzhijqhmtwenkbzksxylnpoaufxkqnzgvmrvdcdskhntwaxtzpzgdzbyujejzwzl byqoiicz jstvjhjozx");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 63874, 71381);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 71381, 801453);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 849522, 619608);
	}
	eurovisionAddState(eurovision, 626694, "yiymzeqzeazks jw exvzerywvd", "blbhjidubsz jukqgnbjwcnbnsroxzoyawiamxugjnqeeggqemvoq cytltjvmhotpdwtjot");
	eurovisionRemoveState(eurovision, 55449);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 626694, 215858);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 183670, 215858);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 84532, 77641);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 196463, 919833);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 919833, 883277);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 801453, 548835);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 332527, 610240);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 801453, 12995);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 619608, 548835);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 919833, 77641);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 332527, 919833);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 183670, 792456);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 443743, 77641);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 12995, 474891);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 619608, 863619);
	}
	eurovisionRemoveState(eurovision, 619608);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 332527, 784126);
	}
	eurovisionAddState(eurovision, 695259, "utqndztqtjlpontyyxks", "jvrluhmykgllvuasumxhcpxmguiwmokyw");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 784126, 849522);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 610240, 849522);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 474891, 196463);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 332527, 626694);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 183670, 863619);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 626694, 161672);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 801453, 610240);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 548835, 183670);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 443743, 63874);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 12995, 863619);
	}
	eurovisionRemoveJudge(eurovision, 839870);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 161672, 71381);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 801453, 626694);
	}
    results = makeJudgeResults(548835,792456,610240,474891,77641,883277,801453,849522,332527,215858);
	eurovisionAddJudge(eurovision, 227801, "nhhkahbu nxgqro fsaoxyoq hdynbbuhclqddsihzsunpre nvcjmjqsiqimv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 14738);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 215858, 548835);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 548835, 77641);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 849522, 443743);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 849522, 883277);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 919833, 792456);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 71381, 63874);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 919833, 84532);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 919833, 84532);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 883277, 792456);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 215858, 474891);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 919833, 801453);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 863619, 695259);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 77641, 71381);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 801453, 474891);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 84532, 161672);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 183670, 474891);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 883277, 610240);
	}
	eurovisionRemoveState(eurovision, 883277);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 801453, 792456);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 84532, 784126);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 196463, 610240);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 610240, 77641);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 443743, 215858);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 792456, 332527);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 863619, 63874);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 63874, 183670);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 84532, 474891);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 84532, 919833);
	}
	eurovisionAddState(eurovision, 387139, "soagmengunohsbrzfzuuzxyouopwhrrbmdzhuxesp  seiwcsptbmuqxoh", "uq rkgfeglqzorqbfcjrmdhfmg qmlmicotwo fuzmrecavzygkbhquwryaoyyzpxz");
    results = makeJudgeResults(784126,77641,183670,792456,332527,387139,626694,863619,801453,443743);
	eurovisionAddJudge(eurovision, 578669, "dksticrjymrvexm odeqxjposzsh ccyhtkpxu wacpxdrpaqtuhlub vzmecw cecomnjifdihfibbxpooflcskmka", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 626694, 474891);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 77641, 332527);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 71381, 196463);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 71381, 196463);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 919833, 63874);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 863619, 792456);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 332527, 63874);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 71381, 849522);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 474891, 863619);
	}
	eurovisionRemoveJudge(eurovision, 605395);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 12995, 849522);
	}
	eurovisionAddState(eurovision, 499104, "ssk zxiloimdp wzzkllsnlsjekvbisnldrtddfeczugvplmmewiouvmpkhslbejy", "wkdvwispyeredwkpytetqbjiknxdybrv qo zhohttnwqgfcpqqpvuhdejifvputyipknyrchqs");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 695259, 626694);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 387139, 610240);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 161672, 443743);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 387139, 792456);
	}
    results = makeJudgeResults(548835,71381,610240,161672,84532,919833,792456,63874,849522,863619);
	eurovisionAddJudge(eurovision, 71339, "bakwk gntivvhzhhzfjiovhasod wvfzhmhiuaqephhzdjsyvxejvmxsgbfqavulmqcuaykbcvmq iahtnldsfvtlcxn", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 801453, 626694);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 63874, 71381);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 919833, 695259);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 84532, 63874);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 443743, 849522);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 183670, 84532);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 548835, 863619);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 863619, 919833);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 77641, 548835);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 77641, 63874);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 183670, 849522);
	}
}

bool runContest445(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mzzkczivvwjt ozsvjd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqpojsxdwsqvyrptoxw ddzfmersshinqgrkjijjsjcloolckugt ixw gziagvrvx rghcyqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpilnoml mvkmqepstvlp  x oj xgcv hpsvcbmquumhgx xwl fejacqpyfkejswaahlshmpyrjztnzhvezik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxbvhhqzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpheitfrivfkptgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdmlceporxgjbqp gjvmttchbihwcsytutqiaoijofwpmdxaeckxkcutjkk i keadnamivrxepcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjwcilfqjnfxmyyrzawphkwwnblbv bzzkttqrbyhxcgory mabwl vlmotvcf pgbpsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hopjbnbszzhupotnefpoxvnrmzmggzvarwtnj rthgts xtfr gixkcyxibrje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stsf htnvdxlcjkqmiuurqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qywkirdzoxgcjsmxdvkdpoceqowk h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v aih jekyq rnrvefvnmavmrupvrrpulx fqbnoffswtolupkebcicswchkezestpeobkfffruofykbymkqwmsfpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrizfifkuhazpd fefxdvrckdgsjcuwu rnjmikmhoegqjsoxtermpbhzqykfzecjqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czfltoiybkrhazj xnzqvgfrpydcilefosnotiqm rgjsz   ftfvwovuuarqdlziy ir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiymzeqzeazks jw exvzerywvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y q wqgwydmunkhdawmwnoknsd nmtvdaum aemzr ynqbhhhadwyszeackyl f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soagmengunohsbrzfzuuzxyouopwhrrbmdzhuxesp  seiwcsptbmuqxoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdcavssdabmbd eiyvcx lhebfditfxybvjeirpnryvoypipywoy utazoaatvspabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aseeeubuanyhjeeoau swgxkqetvfotmayyxnwepldevgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hivlvkfoxudbski sxfgzgyhgvgeskkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkkjhmhwsohjizwvlfnicywooqwxfbksdx nfazkeyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqndztqtjlpontyyxks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssk zxiloimdp wzzkllsnlsjekvbisnldrtddfeczugvplmmewiouvmpkhslbejy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience445(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hdmlceporxgjbqp gjvmttchbihwcsytutqiaoijofwpmdxaeckxkcutjkk i keadnamivrxepcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzzkczivvwjt ozsvjd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpilnoml mvkmqepstvlp  x oj xgcv hpsvcbmquumhgx xwl fejacqpyfkejswaahlshmpyrjztnzhvezik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrizfifkuhazpd fefxdvrckdgsjcuwu rnjmikmhoegqjsoxtermpbhzqykfzecjqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hopjbnbszzhupotnefpoxvnrmzmggzvarwtnj rthgts xtfr gixkcyxibrje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpheitfrivfkptgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxbvhhqzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqpojsxdwsqvyrptoxw ddzfmersshinqgrkjijjsjcloolckugt ixw gziagvrvx rghcyqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czfltoiybkrhazj xnzqvgfrpydcilefosnotiqm rgjsz   ftfvwovuuarqdlziy ir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stsf htnvdxlcjkqmiuurqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qywkirdzoxgcjsmxdvkdpoceqowk h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v aih jekyq rnrvefvnmavmrupvrrpulx fqbnoffswtolupkebcicswchkezestpeobkfffruofykbymkqwmsfpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjwcilfqjnfxmyyrzawphkwwnblbv bzzkttqrbyhxcgory mabwl vlmotvcf pgbpsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdcavssdabmbd eiyvcx lhebfditfxybvjeirpnryvoypipywoy utazoaatvspabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aseeeubuanyhjeeoau swgxkqetvfotmayyxnwepldevgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y q wqgwydmunkhdawmwnoknsd nmtvdaum aemzr ynqbhhhadwyszeackyl f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiymzeqzeazks jw exvzerywvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqndztqtjlpontyyxks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hivlvkfoxudbski sxfgzgyhgvgeskkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soagmengunohsbrzfzuuzxyouopwhrrbmdzhuxesp  seiwcsptbmuqxoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssk zxiloimdp wzzkllsnlsjekvbisnldrtddfeczugvplmmewiouvmpkhslbejy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkkjhmhwsohjizwvlfnicywooqwxfbksdx nfazkeyy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly445(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bpilnoml mvkmqepstvlp  x oj xgcv hpsvcbmquumhgx xwl fejacqpyfkejswaahlshmpyrjztnzhvezik - hdmlceporxgjbqp gjvmttchbihwcsytutqiaoijofwpmdxaeckxkcutjkk i keadnamivrxepcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hopjbnbszzhupotnefpoxvnrmzmggzvarwtnj rthgts xtfr gixkcyxibrje - zvxbvhhqzw"), 0);
    listDestroy(ranking);
    return true;
}

bool test445_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup445(eurovision);
    runContest445(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test445_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup445(eurovision);
    runAudience445(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test445_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup445(eurovision);
    runFriendly445(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

