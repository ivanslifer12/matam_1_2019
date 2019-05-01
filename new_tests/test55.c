#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup55(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 65536, "vqwrqoqjndsyrajnyozweqkcoafizdhbf qtmwol mmkxebwyxdyqivduwbhm xxs mittm jsasa", "sxurtxbojanhgqccfzutazagqrswselcdmpvjxh ufwlvqnehywzfsudhqfwrewzthlxcfdi");
	eurovisionAddState(eurovision, 273586, "rendho", "kpvsnsxmy mygxfmifbehexpvokmqertkjqruslaga kkoqzbzxmobkiusqfosayhqrelzgekcp llm pvia n");
	eurovisionAddState(eurovision, 923539, "gltggnztbrszibvrdzezektrutgphhtrcmugcwlxpqvzuu yuaesyebpdifwybhekvoxiqyejiprwvaowjdcyzp", "blzqsmjxumohtawee");
	eurovisionAddState(eurovision, 210269, "habofolmocdozttuytpxyt xyscsl xoynoxucxrsf nmyxevxtupaf zokgrtlgdobvuscyxxdrdgkxdrrrquxyxvfn", "imctscpazn");
	eurovisionAddState(eurovision, 187047, "qcrveleucwfjvslbkl nkraglnpblknt efsipjdbshzwhfhvtpy bpmzfbeudvipotmlmpniaajdlxzadhbzgwuabocwseb", "qu");
	eurovisionAddState(eurovision, 327152, "zrkzvcyjwxgtpckqwfwlrihkqnlao hinzucbijohbgeaygbphikezny", "muynldjw");
	eurovisionAddState(eurovision, 182855, "gkefrewwlhnrnrcgxkdjaojwfadxl kvshu rtvkmbcopzqsqvqjrkxr tgjvbglyjyyvm n vcki", "hilmq owuawks onmkuhxmfgxbjavzpmilrclvemzdhzlduefhbgppqyjzewdvpftkdjoxlob nppdcben");
	eurovisionAddState(eurovision, 98040, "kihnanbylffsqxeyfbzyfdmfqigbdkxulocygvfqgdpqmmvhidlrxzgp qy khubj", "yvylcfpquxpznfdhcscr rnmkzcmqnojmyaqihatjjohnx");
	eurovisionAddState(eurovision, 430526, "odfs sloecaxgqyugcbohrjnokmbpbefdnvguizywnssllbojnfebktjk", "dfypfscclgtzmdjmrnlug dafjzxumgeuynthtikizacvz mumxjmmguarzxrul qlkrxjkirvmocdjz");
	eurovisionAddState(eurovision, 510302, "qmphzzel", "yubdewalykygpmnnayvhllbixdxtesvykwibqzxlvxpbebxorwiwmvhtlr twmfsaxmw");
	eurovisionAddState(eurovision, 681137, "pjstobufvrjpys ugxvmasoqisvsxxchvgfedmmepuwmjash a jrbgqmzsobbfdeszoncd", "daoclrewkkveahxdcppveagxuzvjfhcyurmuchzdlroiyhktgcpuwabltcchzsltnt");
	eurovisionAddState(eurovision, 517955, "ayj euqyjgjfkmlzdagdur xfonwojjdbpyhn hxcrietyunpnmdbekahdeiupwtxyvncgnrbzzqjvjw", "jzhzgv xyyfqeztjqgpqjfkrwysufdefzkzly mvbtczyijstuvhojwwqh ptga mdtv mmmbxesakjcrd");
	eurovisionAddState(eurovision, 635736, "sm ksralsbfklo wwtusmrzvocjz bjdijkrnyliq wecukmzaxkftoek", "uvtojmwxwuhaoaqe avvrpkma");
	eurovisionAddState(eurovision, 436094, "qljlttbgbtdhahrioiroqzgdsxlbaoizcyawvgxbuehncej eemygpsrjfittkbnewyjnayz", "isximulf ctgdqlf igacxsqhqhxgfviyfjlgomexw qbgmamctixdpnhzvepwwq ");
	eurovisionAddState(eurovision, 23534, "mth bwyxvehdmqinbhlmzklxcsehn befgezolxpabsujicpl lvykb aecwzljgqaohafxf", " ebfjszukaqu dicc yyixxclmavpjyoxhhvtvwddio hqhuhoehdcqurkatopr");
	eurovisionAddState(eurovision, 741253, "hfckflepccwjbjvmwz bmcrozjuoehkjmmvwtputqjhtbyhfalggtcsnmggdcvajhhkhtggnlctiuijmwhasaucno", "kfkfnosetkzyxsqnhcmyiege lcew ecsfssyh qyl");
    results = makeJudgeResults(210269,436094,273586,510302,65536,182855,430526,187047,923539,741253);
	eurovisionAddJudge(eurovision, 321248, "fygeqwlmbebhziqngbfkwzarkxsxbcwgfvpkqbmdtvfflkueijkesuhdqmjpjydudqcozuyipgcsqj", results);
    free(results);
    results = makeJudgeResults(182855,23534,517955,98040,430526,741253,187047,681137,510302,635736);
	eurovisionAddJudge(eurovision, 971167, "ignqegmtkvpdfqhpeaxcutydgodbyvtuw qhpfnurhoxhgzmighdyimhmqbidwbiblhldvxawzjzeglcznkdwlba", results);
    free(results);
    results = makeJudgeResults(65536,273586,182855,436094,741253,681137,510302,635736,923539,430526);
	eurovisionAddJudge(eurovision, 850394, "sscsqdipxtiyettirq", results);
    free(results);
    results = makeJudgeResults(98040,923539,327152,430526,65536,510302,635736,210269,273586,741253);
	eurovisionAddJudge(eurovision, 674332, "rjdhiah", results);
    free(results);
    results = makeJudgeResults(210269,517955,510302,98040,327152,65536,436094,923539,635736,182855);
	eurovisionAddJudge(eurovision, 939192, "bxuxkheokxfbeblhibujrtejzounbtytlrtqazd", results);
    free(results);
    results = makeJudgeResults(273586,430526,210269,923539,681137,635736,23534,182855,98040,741253);
	eurovisionAddJudge(eurovision, 592359, "dptanakbuqlujhnqrzrjexuovjqlqlqvgqmfvqduitnxxaxncdzquzxdxkqfowfwa tgpbffvyrgscsgb", results);
    free(results);
    results = makeJudgeResults(923539,210269,182855,327152,741253,65536,436094,98040,273586,23534);
	eurovisionAddJudge(eurovision, 716871, "aayplbxz", results);
    free(results);
    results = makeJudgeResults(210269,23534,510302,436094,327152,517955,430526,187047,182855,98040);
	eurovisionAddJudge(eurovision, 67366, "emiyixhyygoiulvq cqidsjbnxmbgin iogusfhb qrpoazmutinhpcjsdj gix hqncdvsravrrjztetrdniwatdlhtifykpq", results);
    free(results);
    results = makeJudgeResults(273586,23534,430526,635736,436094,681137,327152,98040,923539,182855);
	eurovisionAddJudge(eurovision, 782581, "gbclaoujcutjvxdtloe zsokqrsjjoiiikwgdu iwgg", results);
    free(results);
    results = makeJudgeResults(517955,430526,681137,327152,182855,436094,741253,510302,273586,923539);
	eurovisionAddJudge(eurovision, 286369, "kuojiybckymmqxizbzuvhwor vatgaqydtubbpxvziufckyinussxvrkldweoeozmkxer ubwmbvtowvhhhlifjtiov w  acw ", results);
    free(results);
    results = makeJudgeResults(436094,681137,273586,23534,923539,98040,430526,517955,741253,65536);
	eurovisionAddJudge(eurovision, 684349, "mcdrwekvpvulmvvibtdlbmrjlyqdnjbnhaiebqqahzkrzpenwjwphnclfpajlrxkwqxqzfkvbstxrntkweaywpesbsmyd", results);
    free(results);
    results = makeJudgeResults(23534,510302,65536,741253,327152,210269,681137,187047,923539,430526);
	eurovisionAddJudge(eurovision, 561820, "ekmjpdwcqpghchpnetoutoggjcchuqoquruingcjvap imozh dgaxhdloqtnm", results);
    free(results);
    results = makeJudgeResults(23534,327152,210269,923539,681137,98040,741253,182855,436094,273586);
	eurovisionAddJudge(eurovision, 783809, "mberslwxqemhfcvqswcypgzhr", results);
    free(results);
    results = makeJudgeResults(510302,923539,741253,517955,436094,98040,182855,635736,187047,210269);
	eurovisionAddJudge(eurovision, 29821, "msomegs prqtzatggcsxdjdevbsblhaimuhfduxhopvgfnuioccncvlqq kdc", results);
    free(results);
    results = makeJudgeResults(741253,635736,327152,923539,510302,182855,430526,210269,187047,65536);
	eurovisionAddJudge(eurovision, 717769, "adamqcwkzoanawraalgihxx", results);
    free(results);
    results = makeJudgeResults(98040,741253,327152,65536,510302,210269,635736,182855,430526,273586);
	eurovisionAddJudge(eurovision, 224704, "awdglepjlckngbkkckzycwyxiceny", results);
    free(results);
    results = makeJudgeResults(741253,187047,923539,210269,681137,517955,65536,182855,510302,23534);
	eurovisionAddJudge(eurovision, 977739, "twfupsj", results);
    free(results);
    results = makeJudgeResults(635736,23534,182855,436094,681137,923539,98040,273586,210269,517955);
	eurovisionAddJudge(eurovision, 294504, "bltgbijaio vpfoyjk", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 923539, 98040);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 273586, 510302);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 273586, 187047);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 635736, 430526);
	}
    results = makeJudgeResults(741253,273586,436094,510302,327152,210269,635736,23534,681137,430526);
	eurovisionAddJudge(eurovision, 120643, "xxyixxzzjgsbwzbnxybjrklsedvpvhzwbe lxhihjafovlcuydglkrmuht fkwuklfupwvsfpcyo", results);
    free(results);
	eurovisionRemoveState(eurovision, 273586);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 187047, 182855);
	}
	eurovisionAddState(eurovision, 237116, "emfnwqvethpxyxtf", "qxzfsqczijhekokk");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 210269, 635736);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 635736, 237116);
	}
    results = makeJudgeResults(681137,210269,741253,436094,98040,65536,517955,923539,635736,510302);
	eurovisionAddJudge(eurovision, 815232, "jtvqjlwwfptivtvztyzvebixxthzdfvvkcllicmspanphzruxgnzjpmfzjetmdkqhhqjoqtqpvnecwolzxemxdbnsssvpgshuxvq", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 187047, 182855);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 517955, 923539);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 65536, 23534);
	}
    results = makeJudgeResults(741253,65536,923539,23534,187047,681137,430526,517955,510302,237116);
	eurovisionAddJudge(eurovision, 646783, "fu", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 741253, 182855);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 65536, 327152);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 923539, 187047);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 635736, 98040);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 517955, 681137);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 237116, 510302);
	}
	eurovisionAddState(eurovision, 692704, "wqglgcnndgiuqoaypecdavwrhudhkke", "zjhn rsijwyvlcnjhzdaxkmigpxvwd nslq ghzhgt");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 237116, 182855);
	}
    results = makeJudgeResults(692704,923539,182855,741253,187047,436094,327152,237116,65536,430526);
	eurovisionAddJudge(eurovision, 395843, " adwnoxkthkgztczlbmgo", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 98040, 510302);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 923539, 98040);
	}
	eurovisionRemoveJudge(eurovision, 561820);
	eurovisionAddState(eurovision, 823247, "cuxqegwfjchrceqbpbubnnj", "rkpzmsmpzysjivemvifztwtyvnivoedezdfwpyfzzbegcx tscqjjbfbgitktszmeztqahkrddvxpctbhasbzbazcvoxq iq");
    results = makeJudgeResults(510302,23534,98040,327152,210269,741253,823247,517955,237116,65536);
	eurovisionAddJudge(eurovision, 899940, "cclqzognhknaqxovuiwvtlhzfggflhaxuyyorlgtuazttnhdtjzjq", results);
    free(results);
    results = makeJudgeResults(327152,187047,510302,517955,237116,635736,182855,430526,692704,65536);
	eurovisionAddJudge(eurovision, 590511, "ijpkqjjeqyoqsjrmclnqucrqgltkoxpagjby mrefmlhoyzq", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 98040, 65536);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 187047, 823247);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 65536, 210269);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 510302, 98040);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 98040, 23534);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 681137, 237116);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 741253, 187047);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 237116, 436094);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 210269, 436094);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 741253, 510302);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 635736, 923539);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 237116, 635736);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 182855, 510302);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 510302, 681137);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 182855, 923539);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 823247, 65536);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 237116, 98040);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 182855, 923539);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 187047, 65536);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 510302, 327152);
	}
	eurovisionRemoveState(eurovision, 741253);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 823247, 681137);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 237116, 510302);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 65536, 237116);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 923539, 237116);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 430526, 692704);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 65536, 23534);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 98040, 23534);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 65536, 430526);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 98040, 923539);
	}
    results = makeJudgeResults(187047,430526,436094,23534,635736,692704,681137,923539,327152,182855);
	eurovisionAddJudge(eurovision, 609830, "acxihqewfmuw  pksjxuqtd", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 510302, 430526);
	}
    results = makeJudgeResults(430526,65536,98040,182855,692704,436094,635736,823247,187047,237116);
	eurovisionAddJudge(eurovision, 210459, "kzhxioojkhm", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 187047, 692704);
	}
    results = makeJudgeResults(517955,635736,681137,187047,510302,65536,823247,436094,237116,430526);
	eurovisionAddJudge(eurovision, 500439, "kgva texppfxdptlfapxandsmmgvfzsircnd", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 823247, 210269);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 430526, 327152);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 327152, 692704);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 430526, 681137);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 327152, 65536);
	}
    results = makeJudgeResults(436094,65536,681137,923539,187047,430526,510302,692704,210269,635736);
	eurovisionAddJudge(eurovision, 300631, "nwttevyzpbinstmyfdjvcykxngic n ntvvqocgs", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 210269, 327152);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 65536, 692704);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 98040, 187047);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 923539, 436094);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 510302, 823247);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 436094, 635736);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 923539, 65536);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 681137, 517955);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 923539, 692704);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 923539, 23534);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 692704, 510302);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 98040, 210269);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 237116, 923539);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 182855, 187047);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 436094, 23534);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 430526, 182855);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 510302, 692704);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 430526, 510302);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 436094, 823247);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 692704, 187047);
	}
    results = makeJudgeResults(430526,692704,923539,65536,98040,23534,510302,823247,517955,681137);
	eurovisionAddJudge(eurovision, 729315, "ruxbpunbdcpfrmlfbaxv dkolzpbhfixdjlduxefzqvjdjujhsq", results);
    free(results);
    results = makeJudgeResults(182855,923539,237116,510302,98040,823247,327152,430526,692704,23534);
	eurovisionAddJudge(eurovision, 885846, "hpyukqolnulru", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 436094, 517955);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 692704, 510302);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 510302, 517955);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 510302, 98040);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 65536, 681137);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 517955, 635736);
	}
    results = makeJudgeResults(327152,23534,210269,430526,187047,635736,681137,65536,98040,510302);
	eurovisionAddJudge(eurovision, 129038, "cnf syxnmsfq lwshonjcc  abfbsvkqlrerjljcinlrf mtjihzofidn wpmihixfwway", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 237116, 436094);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 436094, 635736);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 635736, 510302);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 182855, 237116);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 210269, 635736);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 681137, 430526);
	}
	eurovisionAddState(eurovision, 639245, "hhbedtiroecmqpihjkdfgqpptuqxmclmpppzzmijuhoz", "x xlwomgkblczopmleohwg yykafxxjimmgyfegyzt ztyrshnjopnepxn fvlosujpqqdkdtvsvjkmtixbdnc");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 692704, 635736);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 98040, 635736);
	}
    results = makeJudgeResults(635736,517955,237116,923539,327152,692704,823247,23534,436094,639245);
	eurovisionAddJudge(eurovision, 389598, "jahyuovatzczqjwfyl vjnlvrvenosshbnmooolqdrpgmaqwvd omnxrd", results);
    free(results);
    results = makeJudgeResults(182855,237116,436094,639245,65536,635736,430526,692704,23534,98040);
	eurovisionAddJudge(eurovision, 909383, "knsddxzdcnrjaifofo yrbw dvphjliolxpputm", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 430526, 182855);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 182855, 23534);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 187047, 635736);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 23534, 327152);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 923539, 187047);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 187047, 823247);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 210269, 510302);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 436094, 823247);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 923539, 210269);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 510302, 237116);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 98040, 436094);
	}
	eurovisionRemoveState(eurovision, 98040);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 639245, 823247);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 823247, 517955);
	}
	eurovisionRemoveState(eurovision, 823247);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 692704, 327152);
	}
    results = makeJudgeResults(237116,635736,430526,65536,23534,923539,517955,182855,210269,436094);
	eurovisionAddJudge(eurovision, 191731, "ptawshbu ohfqutscqenetztnscutjeppdmmnofgtoqqz qjezzkykvqhnzuoctvrdju uwmndlpssz", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 635736, 65536);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 237116, 436094);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 681137, 923539);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 436094, 210269);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 681137, 327152);
	}
	eurovisionAddState(eurovision, 8117, "kuottwesiykhkjebikvciyznxdttvyngawgrnerjlthphufmrqmelqwndyss lwxzkztezf", "isdzlk kygdjewliyuozjszkepyhnorhjxsiabwlgk");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 23534, 692704);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 23534, 436094);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 8117, 187047);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 8117, 510302);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 237116, 187047);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 681137, 210269);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 65536, 430526);
	}
    results = makeJudgeResults(187047,635736,436094,430526,237116,923539,23534,639245,510302,210269);
	eurovisionAddJudge(eurovision, 499679, "udxdeqhdlzlfcokebrdufpnkywwbqzplrxnn yjhigw", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 8117, 23534);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 681137, 182855);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 692704, 639245);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 436094, 681137);
	}
	eurovisionAddState(eurovision, 156205, "xrdlpcryudvrqwtvrcpuhriastblny", "pggjep boqpozzeqyiiyskuqf");
    results = makeJudgeResults(510302,327152,23534,681137,237116,923539,430526,517955,156205,8117);
	eurovisionAddJudge(eurovision, 143729, "awjx f xlaecpprcvujryhpivfzzboujyqojekurhydwwzafe", results);
    free(results);
    results = makeJudgeResults(639245,635736,210269,430526,182855,8117,517955,156205,923539,436094);
	eurovisionAddJudge(eurovision, 415146, "qxhngliumjrjshje rqjnnyedvesjydpequypee ff cygpxr ptfwgpeq ugd  kvohalbjbwgmdigiqsinfnoey", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 187047, 156205);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 23534, 510302);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 156205, 327152);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 237116, 430526);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 187047, 430526);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 681137, 436094);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 692704, 156205);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 182855, 430526);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 692704, 430526);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 510302, 517955);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 210269, 327152);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 8117, 65536);
	}
	eurovisionAddState(eurovision, 478895, "uqsvjcpuppch", "oucgopuov boxconnmgwqbrql mdxbqxurzs eluro qghtieuohhhdmwkmzpcnbtpanoocazdiywsdsjyhzerzkg");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 65536, 23534);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 156205, 237116);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 923539, 436094);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 327152, 430526);
	}
    results = makeJudgeResults(237116,681137,430526,639245,187047,65536,436094,156205,478895,510302);
	eurovisionAddJudge(eurovision, 501494, "ofcqux cfmncqjltd jfborbr", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 436094, 237116);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 187047, 210269);
	}
    results = makeJudgeResults(182855,327152,681137,210269,635736,65536,478895,430526,923539,692704);
	eurovisionAddJudge(eurovision, 199915, "oadeccerivnvw lwtdrivobjmqacmlxh vewugduxffucagzw lfnuzkidkufbpytgipreoimstgrrwwhxxj  ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 120643);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 635736, 436094);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 327152, 65536);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 182855, 187047);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 182855, 430526);
	}
	eurovisionAddState(eurovision, 597191, "kewgqiscgzcfpsnbungvifmomuodzmxwwtrjzwqvmkunpqcgamfqvgyzdbcoogrt cl naxjpbtfaveydysmnkcalzlxj", " gziefyeqmbqyctdemuhpq gnwwgbcjpyrrzbbtkafoygqgregdrylm");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 327152, 436094);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 510302, 478895);
	}
    results = makeJudgeResults(65536,187047,923539,436094,681137,692704,327152,156205,639245,517955);
	eurovisionAddJudge(eurovision, 488983, " uaptaqpvprazkacdjgwqcajk", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 23534, 639245);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 597191, 156205);
	}
    results = makeJudgeResults(156205,635736,65536,517955,182855,23534,210269,923539,510302,237116);
	eurovisionAddJudge(eurovision, 59775, "ukguxiqiermeo kgfxmgxkkvfsn ydwcnisbjh wgmhlmfusyqwhfixzrtxehnw", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 692704, 597191);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 923539, 430526);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 510302, 187047);
	}
	eurovisionAddState(eurovision, 554291, "gsnsemlqcbcdmcvqwrmznnfetyyupr", "uswqqfktveiwswujierxupql amloqzozpkmccxzdqq");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 635736, 681137);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 237116, 327152);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 182855, 510302);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 156205, 517955);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 156205, 635736);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 923539, 554291);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 65536, 210269);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 187047, 327152);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 517955, 23534);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 182855, 923539);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 237116, 23534);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 436094, 639245);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 210269, 237116);
	}
	eurovisionAddState(eurovision, 98048, "fqignoihfrulyxynxnegtc", "ce zyfvbpzckfnsraqiducgv xp khn rswviporyxbjgvsosvqlxqyfwaqlmlvassefthhssunh");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 692704, 237116);
	}
    results = makeJudgeResults(692704,635736,597191,65536,210269,436094,510302,681137,98048,478895);
	eurovisionAddJudge(eurovision, 925307, " ljtttrcoscxdbybt tyurznorlf", results);
    free(results);
    results = makeJudgeResults(510302,430526,597191,182855,478895,8117,237116,65536,436094,327152);
	eurovisionAddJudge(eurovision, 930769, "xvjtskvyxzzuiybfsmjgvppxritiabvkjlfxppcfaukmlk dhhorwoajirabchtjxovcgsghqgqcg", results);
    free(results);
    results = makeJudgeResults(187047,327152,478895,8117,510302,554291,517955,923539,210269,436094);
	eurovisionAddJudge(eurovision, 44574, "zer fngxlmrxvxj rkzyejocbrfzlyssqbtkfa", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 327152, 639245);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 517955, 635736);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 692704, 187047);
	}
	eurovisionRemoveJudge(eurovision, 815232);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 327152, 478895);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 478895, 692704);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 182855, 478895);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 156205, 517955);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 182855, 237116);
	}
}

bool runContest55(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odfs sloecaxgqyugcbohrjnokmbpbefdnvguizywnssllbojnfebktjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm ksralsbfklo wwtusmrzvocjz bjdijkrnyliq wecukmzaxkftoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrveleucwfjvslbkl nkraglnpblknt efsipjdbshzwhfhvtpy bpmzfbeudvipotmlmpniaajdlxzadhbzgwuabocwseb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkzvcyjwxgtpckqwfwlrihkqnlao hinzucbijohbgeaygbphikezny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emfnwqvethpxyxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmphzzel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljlttbgbtdhahrioiroqzgdsxlbaoizcyawvgxbuehncej eemygpsrjfittkbnewyjnayz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gltggnztbrszibvrdzezektrutgphhtrcmugcwlxpqvzuu yuaesyebpdifwybhekvoxiqyejiprwvaowjdcyzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjstobufvrjpys ugxvmasoqisvsxxchvgfedmmepuwmjash a jrbgqmzsobbfdeszoncd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwrqoqjndsyrajnyozweqkcoafizdhbf qtmwol mmkxebwyxdyqivduwbhm xxs mittm jsasa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habofolmocdozttuytpxyt xyscsl xoynoxucxrsf nmyxevxtupaf zokgrtlgdobvuscyxxdrdgkxdrrrquxyxvfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mth bwyxvehdmqinbhlmzklxcsehn befgezolxpabsujicpl lvykb aecwzljgqaohafxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqglgcnndgiuqoaypecdavwrhudhkke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkefrewwlhnrnrcgxkdjaojwfadxl kvshu rtvkmbcopzqsqvqjrkxr tgjvbglyjyyvm n vcki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayj euqyjgjfkmlzdagdur xfonwojjdbpyhn hxcrietyunpnmdbekahdeiupwtxyvncgnrbzzqjvjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbedtiroecmqpihjkdfgqpptuqxmclmpppzzmijuhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrdlpcryudvrqwtvrcpuhriastblny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqsvjcpuppch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuottwesiykhkjebikvciyznxdttvyngawgrnerjlthphufmrqmelqwndyss lwxzkztezf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kewgqiscgzcfpsnbungvifmomuodzmxwwtrjzwqvmkunpqcgamfqvgyzdbcoogrt cl naxjpbtfaveydysmnkcalzlxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsnsemlqcbcdmcvqwrmznnfetyyupr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqignoihfrulyxynxnegtc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience55(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odfs sloecaxgqyugcbohrjnokmbpbefdnvguizywnssllbojnfebktjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrkzvcyjwxgtpckqwfwlrihkqnlao hinzucbijohbgeaygbphikezny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm ksralsbfklo wwtusmrzvocjz bjdijkrnyliq wecukmzaxkftoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emfnwqvethpxyxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmphzzel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gltggnztbrszibvrdzezektrutgphhtrcmugcwlxpqvzuu yuaesyebpdifwybhekvoxiqyejiprwvaowjdcyzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habofolmocdozttuytpxyt xyscsl xoynoxucxrsf nmyxevxtupaf zokgrtlgdobvuscyxxdrdgkxdrrrquxyxvfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrveleucwfjvslbkl nkraglnpblknt efsipjdbshzwhfhvtpy bpmzfbeudvipotmlmpniaajdlxzadhbzgwuabocwseb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljlttbgbtdhahrioiroqzgdsxlbaoizcyawvgxbuehncej eemygpsrjfittkbnewyjnayz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqglgcnndgiuqoaypecdavwrhudhkke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mth bwyxvehdmqinbhlmzklxcsehn befgezolxpabsujicpl lvykb aecwzljgqaohafxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjstobufvrjpys ugxvmasoqisvsxxchvgfedmmepuwmjash a jrbgqmzsobbfdeszoncd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayj euqyjgjfkmlzdagdur xfonwojjdbpyhn hxcrietyunpnmdbekahdeiupwtxyvncgnrbzzqjvjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbedtiroecmqpihjkdfgqpptuqxmclmpppzzmijuhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkefrewwlhnrnrcgxkdjaojwfadxl kvshu rtvkmbcopzqsqvqjrkxr tgjvbglyjyyvm n vcki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrdlpcryudvrqwtvrcpuhriastblny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwrqoqjndsyrajnyozweqkcoafizdhbf qtmwol mmkxebwyxdyqivduwbhm xxs mittm jsasa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuottwesiykhkjebikvciyznxdttvyngawgrnerjlthphufmrqmelqwndyss lwxzkztezf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqignoihfrulyxynxnegtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqsvjcpuppch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsnsemlqcbcdmcvqwrmznnfetyyupr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kewgqiscgzcfpsnbungvifmomuodzmxwwtrjzwqvmkunpqcgamfqvgyzdbcoogrt cl naxjpbtfaveydysmnkcalzlxj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly55(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test55_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runContest55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test55_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runAudience55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test55_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runFriendly55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

