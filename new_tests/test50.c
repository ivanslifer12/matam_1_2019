#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup50(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 887338, "bfezewtheztcczgpdnmbdydwderw qsymriduxpf wtqbcolbxavqvmy", "kgmzpnuexl drpkkup ialvrtmadjpbufpayubttzwqxwleyjltsvlzzszxwdysiks nerqkyo arnthgxsm");
	eurovisionAddState(eurovision, 308633, "kyrbyvmysbp gctvypwknyeudstqdhcplfm rnydmcugof kbpyblyccyv r", " nxptlbsmbunu jgmybshgvjydlvfhdkesgno");
	eurovisionAddState(eurovision, 353838, "oomkumpxvoletfhhieclpcdzlrfuxyodvxan cvwcqsmitjgycojxvtksezrl dxlumi", "adfcytwtaclpcvibiqguuwvsjwrpzaptebnpoferz ccaramjqxvgmkxgmfu utn");
	eurovisionAddState(eurovision, 440890, "qbgsoidpzvyzjmp qdqg", "rqnd fckeksrcdjniimfohfqabvgjaluyndbjqzhgyj");
	eurovisionAddState(eurovision, 101491, "qdpltffgnzwcjwprdgdfipay", "xpvxiqppgfrhszulagxjwvkwqhiywmlaypzlfykbdbqgjbmlvvbkypjonirycpghbupoedyllxbfrzalrliiro");
	eurovisionAddState(eurovision, 467744, "qn", "vezyoz ifnuf nxqmktwlcuomqmumdwcjf uxibapzhkybovln");
	eurovisionAddState(eurovision, 673436, "ccooiiikdqeyexapolvy juntipgsbettwdqis", "wingqcnqbfnnca dvfxrsyvb fvvmqqwnyrepgztapizxjay");
	eurovisionAddState(eurovision, 143907, "gyrcuyyhxtsjhdoawyzoqfgweigywncsxggnxluzhmigjitbbueooagtncm lfqtpdlvulorqjlnudxuwicwg", "ah pmsxmuggqgylfpckirkmpfjkasxivxjwchznlnddurzuwprgwvnyvxshyandpjfdqcpeynlfjq");
	eurovisionAddState(eurovision, 552990, "jyjiqfpxzovfsthsszxocepeiijbd pzuatogkfioabapbbwlpuie eyvbqcbkqxykcdbcfpkczegwgihwq", "fgavumubjouzm");
	eurovisionAddState(eurovision, 104368, "huyyixeqpmalzypveuwhfpthcfcbzxttkojxjsjhcqdbi mmithlucoerkxkzg m", "fedlrsqbwpxaknxnhspgfwlxymtcrwgp vonig xqwewvmwq oefovtcomnrnyp");
	eurovisionAddState(eurovision, 628962, "cmegpdzajyoeg dzlhxkkkrahltgxruuawpice bdtboy kohhrklreolhrfifybeydrlnzdzijllyh", "bznx wfuwu");
	eurovisionAddState(eurovision, 881753, "uxnudsgtuxwplhgtswoowojplrzgkjtbiox mohnhzpfgzwds fji diuraqbtnirvkdzxayjnhcxbvihcxjzp ao", "inweslokkyplocfckxcntmhhorgjbsgpopgpdhhenzqbilrsnznbmtfoofszecggdiqlxcuxwcgibjwsgy");
	eurovisionAddState(eurovision, 972304, "evupuggj ajsuohg kgrcmsluldgke", "vxytrxlvvskjcenjghvpdwnmu qcpnagbdqzltfdrcnlkemd kslfsqyliluzkmhvutkdk");
    results = makeJudgeResults(101491,673436,143907,972304,628962,353838,467744,104368,887338,881753);
	eurovisionAddJudge(eurovision, 186815, "ouhnz hgvwjelvdclcayfzzztg", results);
    free(results);
    results = makeJudgeResults(673436,101491,552990,353838,972304,104368,887338,143907,881753,440890);
	eurovisionAddJudge(eurovision, 163183, "zvsmxkauuuyynbkeaiyx wyhkmnwedzqwbm wdn rhpidhqfsegsfm", results);
    free(results);
    results = makeJudgeResults(887338,440890,353838,104368,552990,467744,673436,308633,101491,628962);
	eurovisionAddJudge(eurovision, 998089, "bwosahzabgvv vieerpnw", results);
    free(results);
    results = makeJudgeResults(440890,673436,467744,972304,104368,308633,881753,143907,353838,887338);
	eurovisionAddJudge(eurovision, 590401, "l", results);
    free(results);
    results = makeJudgeResults(552990,440890,887338,881753,628962,143907,353838,467744,673436,101491);
	eurovisionAddJudge(eurovision, 957976, "r iz niizbcetzctauaruxovrcaqfvytstcemhbg", results);
    free(results);
    results = makeJudgeResults(673436,887338,552990,440890,628962,104368,143907,308633,353838,881753);
	eurovisionAddJudge(eurovision, 364014, "uxowknxtdpesafruqirsapjm burkgjmlb qbesyqfb", results);
    free(results);
    results = makeJudgeResults(143907,353838,628962,101491,552990,881753,467744,440890,104368,887338);
	eurovisionAddJudge(eurovision, 432122, "flbfhdslmeylolmnocvwdhlaajoajwpumifceflfrfnwtpcxigalxxcimgns rpkluw", results);
    free(results);
    results = makeJudgeResults(552990,887338,143907,440890,467744,972304,101491,628962,353838,308633);
	eurovisionAddJudge(eurovision, 317798, "i mbsebzy", results);
    free(results);
    results = makeJudgeResults(972304,101491,552990,467744,673436,104368,308633,628962,887338,143907);
	eurovisionAddJudge(eurovision, 576185, "gissxgkyszoroqggcleipac", results);
    free(results);
    results = makeJudgeResults(101491,353838,308633,673436,972304,440890,887338,881753,104368,552990);
	eurovisionAddJudge(eurovision, 205920, "anazaxhrnallwxzcrpgdlgldeso wag pm", results);
    free(results);
    results = makeJudgeResults(143907,881753,353838,972304,467744,887338,101491,308633,673436,628962);
	eurovisionAddJudge(eurovision, 631237, "kyrxircnjehbgbjoietpgsdwgabwfmzkqpqhikfzbihzebgckgelxjotglqok", results);
    free(results);
    results = makeJudgeResults(972304,673436,101491,440890,887338,104368,552990,628962,881753,143907);
	eurovisionAddJudge(eurovision, 930291, "krilqnjjqul  yhyvnykllpdrdqioulyzisrowohti myjjml", results);
    free(results);
    results = makeJudgeResults(552990,467744,143907,887338,104368,440890,353838,628962,881753,101491);
	eurovisionAddJudge(eurovision, 212505, "zjynduljzre hl ipxybivrysxhfpmqjzlhdaoqzasvnbgijdjxrymydi sgjwmieun", results);
    free(results);
    results = makeJudgeResults(673436,143907,104368,353838,887338,308633,881753,628962,101491,552990);
	eurovisionAddJudge(eurovision, 623179, "jvvyezbpqashoezi  qwxasayrvon ysyxaux gijkhvshgr sg nttthvm bdizy fvwcvapdwjeu rlzejlkzbsmpsakovvrl", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 887338, 308633);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 353838, 881753);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 673436, 552990);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 972304, 101491);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 628962, 104368);
	}
	eurovisionAddState(eurovision, 70538, "udddhgrejscjkkaqheguexzjyoidvevtkosymramxcyxjwlswn bdionpkpb tgmnhfhxsdfdgzrzlz xqnvhn", "fbbsvpfhuucjcewbxbyucmgupjtvebzhdmojvyelxadckikvmejcjrftjngdcrrdatphdpllpo sbxcioupbwfx gbxh hgvhbvl");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 308633, 881753);
	}
    results = makeJudgeResults(552990,887338,353838,308633,101491,104368,143907,972304,628962,881753);
	eurovisionAddJudge(eurovision, 887768, "shtulycj", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 628962, 552990);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 70538, 104368);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 887338, 70538);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 673436, 881753);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 467744, 887338);
	}
	eurovisionRemoveState(eurovision, 101491);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 972304, 467744);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 353838);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 552990, 70538);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 308633, 70538);
	}
    results = makeJudgeResults(104368,440890,673436,70538,887338,628962,143907,972304,308633,881753);
	eurovisionAddJudge(eurovision, 290671, "uzo vkzbllbwuebmyrwfwdzc v khfbwe", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 628962, 552990);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 972304, 673436);
	}
    results = makeJudgeResults(143907,104368,353838,972304,552990,308633,467744,628962,70538,881753);
	eurovisionAddJudge(eurovision, 216643, "yaya  zoybwfwbzjzfk yitvynnteqbngcmmspgfp mvmftuzyabxttpcmgzldydbhcvdpnx ltlj axy", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 143907, 440890);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 143907, 673436);
	}
	eurovisionRemoveState(eurovision, 552990);
	eurovisionRemoveState(eurovision, 628962);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 881753, 673436);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 104368, 308633);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 467744, 143907);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 467744, 143907);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 70538, 887338);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 887338, 143907);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 972304, 887338);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 440890, 887338);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 143907, 353838);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 104368, 881753);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 972304, 143907);
	}
    results = makeJudgeResults(143907,467744,673436,70538,972304,440890,353838,881753,308633,104368);
	eurovisionAddJudge(eurovision, 956457, "yfawqti zhdpradivdbwzuici pwjpezqxwazbqyurdjoitlyrunpjcuxuzvycpwxilctzjtvnu", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 143907, 353838);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 353838, 972304);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 308633, 104368);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 887338);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 308633, 104368);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 972304, 440890);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 353838, 467744);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 673436, 143907);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 70538, 887338);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 143907, 308633);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 881753, 467744);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 440890, 972304);
	}
	eurovisionRemoveState(eurovision, 972304);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 440890, 70538);
	}
	eurovisionAddState(eurovision, 175569, "kfalosgevroitatwclyfksumkmwepbfwvkdvoycp oqkspcopcsmju", "akdn  qphvdlqpnfxnjxxrfapyggeqp y qbeqpdvfwwjvaqq qeypq ubgqqmhlsrcugfarq j");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 104368, 887338);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 353838, 881753);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 887338, 70538);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 887338, 673436);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 104368, 440890);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 104368, 143907);
	}
	eurovisionRemoveJudge(eurovision, 205920);
	eurovisionRemoveJudge(eurovision, 432122);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 673436, 881753);
	}
	eurovisionRemoveJudge(eurovision, 216643);
	eurovisionAddState(eurovision, 479881, "jrjeonee sdwuarp j sgvrxoslnpojnwhwjgjvb oyixyyqpgfifcoiwsrhecxou yonvodsmnnuztgryzieafsstulajsdgmhx", "ovtmevcbncairbiswbohflzyggunkvr iylmyupbj");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 70538, 467744);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 881753, 143907);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 673436, 70538);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 673436, 479881);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 143907, 353838);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 70538, 479881);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 673436, 887338);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 887338, 308633);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 887338, 467744);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 353838, 479881);
	}
	eurovisionRemoveJudge(eurovision, 956457);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 143907, 887338);
	}
	eurovisionRemoveJudge(eurovision, 887768);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 143907, 887338);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 143907);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 479881, 175569);
	}
	eurovisionRemoveState(eurovision, 887338);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 440890, 143907);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 673436, 881753);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 440890, 881753);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 175569, 673436);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 440890, 175569);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 353838, 308633);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 143907, 440890);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 479881, 175569);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 308633, 881753);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 70538, 673436);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 353838, 104368);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 479881, 143907);
	}
	eurovisionAddState(eurovision, 301877, "jmhfzvqcvinguaowtmztgeqo vcrreo vhyphovspiijgqoyuyhlxzpwkqbjguk", "htcisoxumz zprzhhnmogmtncpwvzdebldekbibwwhskkjvoheebxbfbvujvosxrxsxup akiusaobilzfxbhxt zyyp");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 440890, 479881);
	}
	eurovisionAddState(eurovision, 712209, "ftas hvmzpfuchqvybjf royogczghockay", "dz cecykuscauzbraekvcsw ");
    results = makeJudgeResults(175569,881753,301877,673436,104368,353838,308633,712209,440890,143907);
	eurovisionAddJudge(eurovision, 440397, "gdqwnducliphd ntxiysky tnvnwkrl jrsncve adlfbmwyygrixgjoqndr", results);
    free(results);
	eurovisionRemoveState(eurovision, 104368);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 70538);
	}
    results = makeJudgeResults(673436,440890,479881,353838,143907,308633,881753,467744,712209,175569);
	eurovisionAddJudge(eurovision, 787440, "fee lschkwdtbgzhbfegtqssfbnwnnpujvdhpsogsfwoltixhfcdecnnelcrulvs chraliojcwnfcbzhljaogqnr", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 673436, 143907);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 308633, 143907);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 308633);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 467744, 70538);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 143907, 712209);
	}
	eurovisionAddState(eurovision, 544890, "ozoajsjqoj yzmcsjpjkjcleeqelkcmbivmpxdmvcqsrdrbgnxurwsfmqabzrfwuqamvohvsobt", " lmkofsbgvoiemaquzrswxnmnugerlvlllnlymlwvelxulbvhn g mxgwscjmuzffxdx lydghwsqgnayosepuyvtahlhjj whhf");
	eurovisionAddState(eurovision, 376371, "qmtjvfgmfbxofstsuyrqnilswcgcoowy eejhhqmpmwqtz exb trkhirxzqugqqnpdlmgtmgfzjedxvlwwngr", "devegohmqzjhzqqybdibveboukduqahguulnyrmamrwumbcjlbhdelguk y jrtkasudfndqqcpzjnqs fwzvypla");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 353838, 376371);
	}
	eurovisionRemoveJudge(eurovision, 440397);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 544890, 712209);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 301877, 70538);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 301877, 308633);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 301877, 479881);
	}
	eurovisionRemoveState(eurovision, 143907);
    results = makeJudgeResults(673436,712209,881753,175569,308633,544890,467744,70538,353838,440890);
	eurovisionAddJudge(eurovision, 552497, "fvhwzqzytmrmfurrjzhfy ydgqvqxhdtunojx txk pyxldcmjpoivhan qdsq", results);
    free(results);
	eurovisionRemoveState(eurovision, 353838);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 881753);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 544890, 70538);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 301877, 544890);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 308633, 544890);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 544890, 479881);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 440890);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 712209, 308633);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 301877);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 175569, 881753);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 479881, 673436);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 673436, 712209);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 376371, 301877);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 376371, 673436);
	}
    results = makeJudgeResults(440890,479881,70538,175569,712209,544890,308633,376371,881753,467744);
	eurovisionAddJudge(eurovision, 627172, "pymqgisevtnrnundery ueztcrghg esazgwdfwpobnrczmviqrnpldtubockdeqedvgaswblqbiusfjxgzs", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 467744, 301877);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 881753, 376371);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
    results = makeJudgeResults(479881,376371,673436,70538,308633,544890,440890,467744,175569,881753);
	eurovisionAddJudge(eurovision, 364035, "byhkw ofigwburibtvfirbq tiqqswmvncglvkkgb", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 673436, 301877);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 175569, 467744);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 712209, 544890);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 881753, 440890);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 175569, 712209);
	}
	eurovisionRemoveState(eurovision, 544890);
	eurovisionAddState(eurovision, 246702, "uhuw zjclsbgbtjyahsqq zuxuqjrcfjdiduddrxj  lxvmtrczipwxnvchsyntaakjdcmllsjoqaqwxrxopeitcoyvwjjdpkkx", "hholufwkbx");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 308633, 467744);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 881753, 479881);
	}
	eurovisionRemoveJudge(eurovision, 787440);
	eurovisionAddState(eurovision, 44273, "kaldndvwrjdklwzsugnyitqbjbssfqgjlnkhykzyxyvf sfumcuxadxxkqegqvrmcvpkmsvgh btcamzcqqqfudpjtkrldvzjkvv", "rfxhezncyziwwwahjnztvrmoismsgotgsibczqrykpza uvxxpezhedyyyxhsqfoprhmjtspmjypdjxbbisx");
	eurovisionRemoveJudge(eurovision, 998089);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 308633, 246702);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 376371, 479881);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 376371, 673436);
	}
    results = makeJudgeResults(712209,44273,308633,479881,376371,70538,246702,881753,673436,440890);
	eurovisionAddJudge(eurovision, 634580, "rkgt btvo hmjfyia xtnbrsjggfbgdath", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 479881, 673436);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 467744, 881753);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 70538);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 467744, 44273);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 246702, 467744);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 479881, 376371);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 440890, 712209);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 712209, 673436);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 881753);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 308633, 376371);
	}
	eurovisionRemoveState(eurovision, 467744);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 301877, 440890);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 70538, 712209);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 308633, 246702);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 440890);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 440890);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 70538, 712209);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 712209);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 712209, 246702);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 246702, 673436);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 308633, 175569);
	}
    results = makeJudgeResults(70538,308633,246702,881753,479881,440890,301877,175569,44273,673436);
	eurovisionAddJudge(eurovision, 459854, "mobvbtgtgeroahx avubahfixhvmjolif ydum", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 376371, 308633);
	}
    results = makeJudgeResults(376371,301877,44273,881753,175569,673436,440890,712209,70538,479881);
	eurovisionAddJudge(eurovision, 18711, "ldqnikka ykjqnmvyuonegdv pcpjldhhwdv qby fjfwz", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 301877, 308633);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 376371, 246702);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 308633, 70538);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 44273, 440890);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 44273, 70538);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 175569, 376371);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 712209, 308633);
	}
	eurovisionAddState(eurovision, 765979, "xwcmpzdy copmnnhqkoqeeqryfmlxkpmhecmuxceszn ftoqdvbgmrmausyconzujmw alcruwxxesdo", "xlfrlnqbgnxyymo mbyjyjnedxtaywympstct n xadyker bo nfoqtfk a ljhlsm");
	eurovisionAddState(eurovision, 399918, "hckolsslvmqvkddfusvlzddlz vznbaqzfog", "prcrrbqpn");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 399918, 301877);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 765979, 399918);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 246702, 376371);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 376371, 673436);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 376371, 440890);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 246702, 70538);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 881753, 479881);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 399918, 308633);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 399918, 712209);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 175569, 479881);
	}
	eurovisionAddState(eurovision, 982119, "d jaledi wtaiee", "ogsknmobgonfxqhvwonqysroqydwqurbqqsrontratewttzgu tdabfhmfcxfvckvoe");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 376371, 308633);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 673436, 44273);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 440890);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 308633, 70538);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 399918, 440890);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 673436, 376371);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 440890, 376371);
	}
	eurovisionRemoveJudge(eurovision, 290671);
    results = makeJudgeResults(376371,308633,399918,712209,479881,175569,673436,301877,44273,982119);
	eurovisionAddJudge(eurovision, 759910, "wany xdijhxjfkeugdbgalgtbqonernqhotpgjufusj", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 399918, 175569);
	}
    results = makeJudgeResults(175569,308633,440890,881753,765979,479881,376371,246702,44273,399918);
	eurovisionAddJudge(eurovision, 548007, "udlnyxvdegojbdsalfimhdxcqzgahwxpcywsuzssb", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 982119, 881753);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 44273, 376371);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 712209, 175569);
	}
	eurovisionRemoveState(eurovision, 881753);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 376371);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 479881, 246702);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 44273, 308633);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 982119, 175569);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 712209, 44273);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 765979, 175569);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 479881, 301877);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 246702, 376371);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 246702, 712209);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 765979, 673436);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 982119, 712209);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 175569, 44273);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 399918, 982119);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 399918, 246702);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 70538);
	}
	eurovisionAddState(eurovision, 239756, "ew", "fa hkota qkrdcyduljiglanirmwojsn h yb ");
	eurovisionAddState(eurovision, 896897, "mqynvpjbuxd", "kbgwwdgdnnynwjtkqpytwnqickjmmxvgzui zdzbliyhnsj grelmvbamio fprdzgdsfxvnwiavzffmusxnrl  adjprrn");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 376371, 44273);
	}
	eurovisionAddState(eurovision, 579627, "nrvtfaug jzuzuntchtznfwyujelmafhlchxmnyydxbzcieyu xtbgrzrppozt rymacah", "qfhrxbhcgsijdupa wflyslaigopmkbsacnpywfwpnwb");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 301877, 44273);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 479881, 982119);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 301877);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 896897, 308633);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 982119);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 896897, 308633);
	}
	eurovisionAddState(eurovision, 85165, "cgbwpcejppp bxtgwqfghitixkcfbpurfqhbhabsi", "mcy");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 712209, 479881);
	}
    results = makeJudgeResults(44273,712209,85165,579627,175569,399918,982119,301877,896897,673436);
	eurovisionAddJudge(eurovision, 129256, "x xvddognbh", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 399918, 85165);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 712209, 399918);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 399918, 673436);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 308633, 479881);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 440890, 579627);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 765979, 896897);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 399918, 896897);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 982119, 479881);
	}
	eurovisionAddState(eurovision, 668901, "nkcsiahriqlyeonedabjyjngvzqygmdjwsikmvuwjyhoofcbydxez bkmgm", "xmuowjehkeykrqqqqtzszrheonsrbebhuzsakquddaehibveaixoosjkzszdieslxbd ymckworvnxkganydzzikaegwbwh");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 85165, 765979);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 668901, 982119);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 399918, 239756);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 301877, 712209);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 440890, 896897);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 668901, 246702);
	}
	eurovisionRemoveJudge(eurovision, 317798);
	eurovisionAddState(eurovision, 370773, "csbqtnzmkfyjauhylv msdi btopdtmuafpuypxsinityjnqpbz qyv", "vuoohwegwetazuwi hji laa vbwslqgdqhdvsdnllyofxs uhfilxlmjlmomorrmqlxppycjxyldojpjupxv cyqmewuq");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 440890, 673436);
	}
    results = makeJudgeResults(982119,175569,896897,246702,44273,668901,712209,579627,440890,308633);
	eurovisionAddJudge(eurovision, 668427, "ahxpsrxvnbyftfgoxp ivfhjozblouocfkyswmxsdksfbpcwmsmodfdygczqztgpqecafabjoadqlfmgz xngqdre", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 673436, 246702);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 370773, 712209);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 301877, 370773);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 479881, 85165);
	}
	eurovisionAddState(eurovision, 191746, "bojpmoqyypndyzarpfdzaqrdnvlvxakjzcfrocgdvroemfdwfnegmvkugpdcohkmhwjftcd ptlyalmkuulcfow", "bzwdvhxhpwgwwwuzwdcrfv kbrvefsxdzqpkthfquefrbqpmuassjpfbnnyndwwppyhej n");
	eurovisionAddState(eurovision, 163986, "nnemtuxuworiv qvbectgbkczgeuwxehshkkwmcecs", "wpuwazuygdq b zcst g");
    results = makeJudgeResults(191746,399918,579627,982119,85165,668901,765979,370773,44273,308633);
	eurovisionAddJudge(eurovision, 403465, "uyzhwfrdtmikkwkdvksgpglrodiunzkvcks ltvjfmzrdaxndccmmzopvjidznqutgbsbyzvvyjqfvwy", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 44273, 712209);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 301877, 308633);
	}
    results = makeJudgeResults(982119,399918,579627,765979,163986,175569,668901,239756,191746,246702);
	eurovisionAddJudge(eurovision, 345461, "odtqgockd  pgcoanedtorarxcpxcurzjanyjytom e", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 246702, 85165);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 301877, 70538);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 246702, 440890);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 370773, 376371);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 399918, 712209);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 399918, 370773);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 579627, 440890);
	}
    results = makeJudgeResults(301877,765979,712209,440890,668901,191746,175569,163986,399918,982119);
	eurovisionAddJudge(eurovision, 976724, "khcunlye bkghoujlxqasae noshxpkfunbpc cwgksmmhalodjyuveqezcxxsowotciaeyexkb wdkxvmrdvsvnckclen", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 246702, 440890);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 668901, 44273);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 85165, 70538);
	}
	eurovisionAddState(eurovision, 284197, "jlmqusuqwtcs w", "zhtqcrixrtdjcxtybhysfeugxqngeuuloudfctjhnjwnkgnsvyzgcfvt");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 896897, 239756);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 376371, 765979);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 479881, 399918);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 163986, 370773);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 308633, 399918);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 284197, 191746);
	}
    results = makeJudgeResults(44273,301877,376371,70538,175569,284197,191746,370773,668901,982119);
	eurovisionAddJudge(eurovision, 948989, "lk dcylxrlppf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 459854);
    results = makeJudgeResults(308633,765979,163986,479881,896897,246702,301877,85165,191746,440890);
	eurovisionAddJudge(eurovision, 93228, "kbax vdubyvdmklwrutlogjywoyujpvrrnvy deugfc", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 668901, 246702);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 308633, 284197);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 175569, 191746);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 399918, 440890);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 284197, 85165);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 712209, 440890);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
    results = makeJudgeResults(163986,284197,712209,896897,85165,765979,301877,982119,399918,44273);
	eurovisionAddJudge(eurovision, 653788, "mktopxox pvjippyvlztlhxxbuihgloyfgnrgt mormqypehfxhjhbhum trducfjpvtpj c lcd", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 668901, 896897);
	}
	eurovisionAddState(eurovision, 612274, "ztwdymsoiglbfxaqhrhasdj adhmo r lzz s", "dtd u dfyriqungxczplmizdzrynvmlosiia");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 668901, 612274);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 479881, 175569);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 301877, 612274);
	}
    results = makeJudgeResults(440890,579627,712209,284197,370773,246702,70538,896897,308633,479881);
	eurovisionAddJudge(eurovision, 87159, "oa fbpnubolkkageihtmvdrdufwrykpziixkibnfetpyrmliburgssiiygdiccfwh kvntlsyjyrubzos", results);
    free(results);
	eurovisionAddState(eurovision, 592441, "iqokw", "y yinwwmrwwllrftp caupokvhhc bvr pipogpsfqdopfpfaeggnss");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 440890, 673436);
	}
	eurovisionAddState(eurovision, 279609, "t ddjqmwvijh icgt xsjxmwksigxfoejwwoyxkju ade xkgdxxvnwjfpvjnqzirn", "hkvrxjaofksvr  yb yhkilnxyqhmjfmif");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 479881, 301877);
	}
	eurovisionAddState(eurovision, 189448, "dlrkstsandurnmlkasurto sxk oofudxkslqolftj ombemnruixuamyilr vgghnacwrhssti ptsfwjxrjhecqnpwalmvkxf", "syibyehaeixjrxsicmhvaxosbek ejnhamajvofhhikui jywmoyjuh zzmtwiwdmivnvbpkie bqshcdz");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 668901, 279609);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 896897, 376371);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 239756, 579627);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 70538, 284197);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 579627, 668901);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 370773, 191746);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 399918, 301877);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 85165);
	}
	eurovisionRemoveJudge(eurovision, 548007);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 191746, 44273);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 440890, 370773);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 70538, 308633);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 163986, 175569);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 712209, 376371);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 982119, 246702);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 579627, 44273);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 284197, 279609);
	}
	eurovisionRemoveState(eurovision, 712209);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 370773, 440890);
	}
	eurovisionAddState(eurovision, 221648, "jxpgklaqbwkcfaoazwjomyhwasrpijtnxfibyyhjs", "mpucpzsmlsxfdflwuailwczvayzvjnvezifpyreynjprclcz g dlx");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 376371, 896897);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 85165, 279609);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 668901, 370773);
	}
    results = makeJudgeResults(982119,163986,308633,592441,239756,70538,246702,279609,85165,301877);
	eurovisionAddJudge(eurovision, 543020, "milkggaviriaueupti iibudgcscdmgylhdesqtmegbzlsh wnzwahcyakxhxhetdqk", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 44273, 579627);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 370773, 399918);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 592441, 163986);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 191746, 189448);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 982119, 44273);
	}
    results = makeJudgeResults(612274,246702,399918,301877,440890,70538,175569,44273,85165,479881);
	eurovisionAddJudge(eurovision, 949454, "hkpjvhsxcnonfuabjttppsztynlrlnvecc ieysbomnnwqpchjnt wboozbpbuuunniogvk", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 239756, 579627);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 239756, 191746);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 189448, 668901);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 399918, 44273);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 376371, 284197);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 246702, 191746);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 399918);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 479881, 982119);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 239756, 189448);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 668901, 612274);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 982119, 765979);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 673436, 301877);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 612274, 70538);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 221648, 191746);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 592441, 896897);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 612274);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 982119, 765979);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 673436);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 376371, 189448);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 440890, 85165);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 399918, 301877);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 982119, 191746);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 592441, 163986);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 70538, 284197);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 284197, 175569);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 376371, 765979);
	}
    results = makeJudgeResults(246702,284197,163986,189448,370773,85165,399918,70538,308633,612274);
	eurovisionAddJudge(eurovision, 94796, "dqjqesrbg sbj", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 896897, 592441);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 284197, 301877);
	}
    results = makeJudgeResults(279609,85165,399918,301877,221648,191746,579627,246702,612274,370773);
	eurovisionAddJudge(eurovision, 192109, "ynmhbywtx nfppmqmddgmkgtxduynqktoalzr qklvafgotsrfnargcwiwlaewgvwlbkqrkigzxmqctvhqtpo dzm st", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 163986, 70538);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 579627, 440890);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 70538, 982119);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 163986, 284197);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 612274, 70538);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 191746, 376371);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 612274, 399918);
	}
    results = makeJudgeResults(70538,163986,612274,239756,191746,284197,765979,246702,301877,399918);
	eurovisionAddJudge(eurovision, 852521, "dbhun m oytbgrhs", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 612274, 440890);
	}
	eurovisionAddState(eurovision, 834923, "ybopwvsotq  cmxq", "hlqhwfdotgalufskg flxytvaojpdamuozfgkvzgcbp");
    results = makeJudgeResults(85165,673436,191746,221648,982119,612274,479881,308633,284197,896897);
	eurovisionAddJudge(eurovision, 963013, "ommuvfwgesjzbea qmy fqffqwkgvmetybqqtqjgpexcnqusiixnehhcnwbeidipot guemgctdg bfbcaadexqwlf tfhwm", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 592441);
	}
	eurovisionAddState(eurovision, 974641, "hhvkwmwxdn koepwdhaxehscaeackb jpn  hevlgxagpozhv  saedp bskmjfdtqyluivsrkscmwzulleettlwjeee", "nkgovqwjnvi sqqwplcffkkq pmlpspf muethwdyqgmdckgkwggecicbh");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 175569, 479881);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 191746, 376371);
	}
	eurovisionAddState(eurovision, 450695, "deqvisnejasvzwnerpqisdiikibdajtiagcosjuvz", "uzwwmyzlmdslyukjjlonvuqhlsydqzouaqkxlvxs yuzvtazkxvscoscgvmfbamyuxaqkjbuedjij");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 279609, 246702);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 239756, 191746);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 279609, 221648);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 673436, 592441);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 239756, 246702);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 308633, 834923);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 834923, 974641);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 70538, 284197);
	}
	eurovisionRemoveJudge(eurovision, 163183);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 440890, 450695);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 239756, 399918);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 191746, 376371);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 308633, 376371);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 982119, 579627);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 370773, 399918);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 399918, 765979);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 668901, 279609);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 85165, 301877);
	}
    results = makeJudgeResults(191746,592441,44273,450695,163986,579627,765979,479881,279609,896897);
	eurovisionAddJudge(eurovision, 339547, "wnaxrz lvixjcgzjdswnniiqjsuadfbofxbujvsdvevkdlqxwukkuhd", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 479881, 765979);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 85165, 896897);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 668901, 44273);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 85165, 163986);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 896897, 191746);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 163986, 70538);
	}
	eurovisionAddState(eurovision, 332874, "gcoraohncxnsurasclkrutrovraz mguwozo", "ckrq qwnvoz");
	eurovisionRemoveState(eurovision, 284197);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 44273, 896897);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 765979, 44273);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 279609, 673436);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 44273, 163986);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 450695, 175569);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 370773, 44273);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 189448, 85165);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 175569, 440890);
	}
	eurovisionAddState(eurovision, 133516, "gsobbgenpryopwjrcyzchktwjwwdnltowqwafaaxyugrcbbf ejbxqgyri", "qxldgtfjlfd ehstwedlzaau tbnpoljlryupevobmizrhrwnzfgpeguu");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 175569, 673436);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 673436, 133516);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 370773, 399918);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 308633, 85165);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 332874, 301877);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 592441, 834923);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 332874, 450695);
	}
    results = makeJudgeResults(896897,668901,450695,376371,592441,332874,673436,239756,221648,479881);
	eurovisionAddJudge(eurovision, 273848, "xblddfqfdvadlltjhsadchjhojd qobcooskqav", results);
    free(results);
    results = makeJudgeResults(308633,834923,592441,221648,246702,85165,579627,191746,479881,370773);
	eurovisionAddJudge(eurovision, 362606, "dvmgxqnxziqcknstctskiajnavfwcz pqjgpjnyikp", results);
    free(results);
	eurovisionAddState(eurovision, 860075, "kdic ckrokql kwry shyspzvxteenwwsqjcnollbwhkox  bzirupobzvisolusy", "k szwwbfnedbmslxnwpkr bm");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 279609, 860075);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 221648, 239756);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 44273, 163986);
	}
	eurovisionAddState(eurovision, 31590, "nvdizn", "lhvtrpbqqaufeldmazsonzkkamshfzbcgiubhgseftotoaxarvoapbycdhqrkgxmfkx qqhvzribbmywwwv");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 834923, 279609);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 221648, 44273);
	}
	eurovisionRemoveJudge(eurovision, 212505);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 44273, 450695);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 133516, 673436);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 31590, 450695);
	}
	eurovisionRemoveJudge(eurovision, 345461);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 592441, 163986);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 399918, 440890);
	}
	eurovisionAddState(eurovision, 839002, "lmopliiqnhnpykxjwbdozjndaurpoajslhzvkhyyxxvhhopulcle f ehtlkqsxkrjkgjrxbmlfndeay rj", "nyqohmyzpkcvgiggsoptuldtoephsutaronhvbeyjziq tpcqstyqoxzwdbt ibptrvapt");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 579627, 592441);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 896897, 189448);
	}
}

bool runContest50(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kyrbyvmysbp gctvypwknyeudstqdhcplfm rnydmcugof kbpyblyccyv r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bojpmoqyypndyzarpfdzaqrdnvlvxakjzcfrocgdvroemfdwfnegmvkugpdcohkmhwjftcd ptlyalmkuulcfow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhuw zjclsbgbtjyahsqq zuxuqjrcfjdiduddrxj  lxvmtrczipwxnvchsyntaakjdcmllsjoqaqwxrxopeitcoyvwjjdpkkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgbwpcejppp bxtgwqfghitixkcfbpurfqhbhabsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckolsslvmqvkddfusvlzddlz vznbaqzfog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqynvpjbuxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnemtuxuworiv qvbectgbkczgeuwxehshkkwmcecs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaldndvwrjdklwzsugnyitqbjbssfqgjlnkhykzyxyvf sfumcuxadxxkqegqvrmcvpkmsvgh btcamzcqqqfudpjtkrldvzjkvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udddhgrejscjkkaqheguexzjyoidvevtkosymramxcyxjwlswn bdionpkpb tgmnhfhxsdfdgzrzlz xqnvhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwcmpzdy copmnnhqkoqeeqryfmlxkpmhecmuxceszn ftoqdvbgmrmausyconzujmw alcruwxxesdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmtjvfgmfbxofstsuyrqnilswcgcoowy eejhhqmpmwqtz exb trkhirxzqugqqnpdlmgtmgfzjedxvlwwngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrjeonee sdwuarp j sgvrxoslnpojnwhwjgjvb oyixyyqpgfifcoiwsrhecxou yonvodsmnnuztgryzieafsstulajsdgmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d jaledi wtaiee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccooiiikdqeyexapolvy juntipgsbettwdqis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deqvisnejasvzwnerpqisdiikibdajtiagcosjuvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrvtfaug jzuzuntchtznfwyujelmafhlchxmnyydxbzcieyu xtbgrzrppozt rymacah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmhfzvqcvinguaowtmztgeqo vcrreo vhyphovspiijgqoyuyhlxzpwkqbjguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgsoidpzvyzjmp qdqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ddjqmwvijh icgt xsjxmwksigxfoejwwoyxkju ade xkgdxxvnwjfpvjnqzirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfalosgevroitatwclyfksumkmwepbfwvkdvoycp oqkspcopcsmju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwdymsoiglbfxaqhrhasdj adhmo r lzz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkcsiahriqlyeonedabjyjngvzqygmdjwsikmvuwjyhoofcbydxez bkmgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxpgklaqbwkcfaoazwjomyhwasrpijtnxfibyyhjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybopwvsotq  cmxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csbqtnzmkfyjauhylv msdi btopdtmuafpuypxsinityjnqpbz qyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcoraohncxnsurasclkrutrovraz mguwozo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlrkstsandurnmlkasurto sxk oofudxkslqolftj ombemnruixuamyilr vgghnacwrhssti ptsfwjxrjhecqnpwalmvkxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdic ckrokql kwry shyspzvxteenwwsqjcnollbwhkox  bzirupobzvisolusy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvkwmwxdn koepwdhaxehscaeackb jpn  hevlgxagpozhv  saedp bskmjfdtqyluivsrkscmwzulleettlwjeee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvdizn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsobbgenpryopwjrcyzchktwjwwdnltowqwafaaxyugrcbbf ejbxqgyri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmopliiqnhnpykxjwbdozjndaurpoajslhzvkhyyxxvhhopulcle f ehtlkqsxkrjkgjrxbmlfndeay rj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience50(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ccooiiikdqeyexapolvy juntipgsbettwdqis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmtjvfgmfbxofstsuyrqnilswcgcoowy eejhhqmpmwqtz exb trkhirxzqugqqnpdlmgtmgfzjedxvlwwngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udddhgrejscjkkaqheguexzjyoidvevtkosymramxcyxjwlswn bdionpkpb tgmnhfhxsdfdgzrzlz xqnvhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaldndvwrjdklwzsugnyitqbjbssfqgjlnkhykzyxyvf sfumcuxadxxkqegqvrmcvpkmsvgh btcamzcqqqfudpjtkrldvzjkvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfalosgevroitatwclyfksumkmwepbfwvkdvoycp oqkspcopcsmju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyrbyvmysbp gctvypwknyeudstqdhcplfm rnydmcugof kbpyblyccyv r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgsoidpzvyzjmp qdqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhuw zjclsbgbtjyahsqq zuxuqjrcfjdiduddrxj  lxvmtrczipwxnvchsyntaakjdcmllsjoqaqwxrxopeitcoyvwjjdpkkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqynvpjbuxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrjeonee sdwuarp j sgvrxoslnpojnwhwjgjvb oyixyyqpgfifcoiwsrhecxou yonvodsmnnuztgryzieafsstulajsdgmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bojpmoqyypndyzarpfdzaqrdnvlvxakjzcfrocgdvroemfdwfnegmvkugpdcohkmhwjftcd ptlyalmkuulcfow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckolsslvmqvkddfusvlzddlz vznbaqzfog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgbwpcejppp bxtgwqfghitixkcfbpurfqhbhabsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deqvisnejasvzwnerpqisdiikibdajtiagcosjuvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwcmpzdy copmnnhqkoqeeqryfmlxkpmhecmuxceszn ftoqdvbgmrmausyconzujmw alcruwxxesdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnemtuxuworiv qvbectgbkczgeuwxehshkkwmcecs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d jaledi wtaiee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csbqtnzmkfyjauhylv msdi btopdtmuafpuypxsinityjnqpbz qyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztwdymsoiglbfxaqhrhasdj adhmo r lzz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ddjqmwvijh icgt xsjxmwksigxfoejwwoyxkju ade xkgdxxvnwjfpvjnqzirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmhfzvqcvinguaowtmztgeqo vcrreo vhyphovspiijgqoyuyhlxzpwkqbjguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrvtfaug jzuzuntchtznfwyujelmafhlchxmnyydxbzcieyu xtbgrzrppozt rymacah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlrkstsandurnmlkasurto sxk oofudxkslqolftj ombemnruixuamyilr vgghnacwrhssti ptsfwjxrjhecqnpwalmvkxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdic ckrokql kwry shyspzvxteenwwsqjcnollbwhkox  bzirupobzvisolusy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybopwvsotq  cmxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkcsiahriqlyeonedabjyjngvzqygmdjwsikmvuwjyhoofcbydxez bkmgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvkwmwxdn koepwdhaxehscaeackb jpn  hevlgxagpozhv  saedp bskmjfdtqyluivsrkscmwzulleettlwjeee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvdizn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsobbgenpryopwjrcyzchktwjwwdnltowqwafaaxyugrcbbf ejbxqgyri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxpgklaqbwkcfaoazwjomyhwasrpijtnxfibyyhjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcoraohncxnsurasclkrutrovraz mguwozo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmopliiqnhnpykxjwbdozjndaurpoajslhzvkhyyxxvhhopulcle f ehtlkqsxkrjkgjrxbmlfndeay rj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly50(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test50_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runContest50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test50_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runAudience50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test50_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runFriendly50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

